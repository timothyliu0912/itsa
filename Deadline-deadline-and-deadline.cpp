#include <bits/stdc++.h>  
#define pb push_back  
using namespace std;  
bool cmp(pair <int,int > a, pair <int,int > b)  
{  
    if(a.second != b.second) return a.second < b.second;  
    else return a.first < b.first;  
}  
int main()  
{  
    int T;  
   // scanf("%d",&T);
    cin>>T;
    while(T--)  
    {   
        int n;  
        pair <int,int > hw[100];
        con>>n;
       // scanf("%d",&n);
        for(int i=0;i<n;i++)   
        {  
            //scanf("%d",&hw[i].first);
            cin>>hw[i].first;
            //cout<<hw[i].first<<endl;  
        }  
        for(int i=0;i<n;i++)   
        {  
           // scanf("%d",&hw[i].second); //deadline
             cin>>hw[i].second;
            //cout<<hw[i].second<<endl;  
        }  
        sort(hw,hw+n,cmp);  
        int span=0;  
        bool flag =false;  
        for(int i=0;i<n;i++)  
        {  
            span+=hw[i].first;  
            if(span>hw[i].second)  
            {  
                //cout<<span<<" "<<hw[i].second<<endl;  
                flag = true;  
                break;  
            }  
        }  
        if(!flag) cout<<"Yes"<<endl;//printf("Yes\n");
        else cout<<"No"<<endl;// printf("No\n");
    }  
    return 0;  
}  
