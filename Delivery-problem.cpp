#include <bits/stdc++.h>  
using namespace std;  
vector <int> a;  
int main(int argc, char const *argv[])  
{  
    int t;  
   // scanf("%d",&t);  
    //while(t--)  
    //{  
      a.clear();  
      int n;  
     // scanf("%d",&n);
    cin>>n;
      for(int i=0;i<n;i++)  
      {  
        int x;//scanf("%d",&x);
          cin>>x;
          a.push_back(x);
      }  
      sort(a.begin(),a.end());  
      int ans=a[0];  
      for(int i=1;i<a.size();i++)  
      {  
        ans+=a[i];  
        for(int j=0;j<i;j++)  
          ans+=a[j]*2;  
      }
    cout<<ans<<endl;
     // printf("%d\n",ans);
   // }  
  return 0;  
}  
