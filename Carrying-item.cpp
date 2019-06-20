#include <bits/stdc++.h>  
#define pb push_back  
using namespace std;  
vector <int> item;  
vector <int> stu;  
int main()  
{  
    int t;  
    //scanf("%d",&t);
    cin>>t;
    while(t--)  
    {  
        int n,m;  
        item.clear(); stu.clear();
        cin>>n>>m;
        //scanf("%d%d",&n,&m);
        for(int i=0;i<n;i++)  
        {  
            int x; //scanf("%d",&x);
            cin>>x;
            item.pb(x);
        }  
        for(int i=0;i<m;i++)  
        {  
            int x; //scanf("%d",&x);
            cin>>x;
            stu.pb(x);
        }  
        sort(item.begin(),item.end());  
        sort(stu.begin(),stu.end());  
        int i = 0, j = 0, mini = 0;  
        bool flag = false;  
        while(i < m && j < n)  
        {  
            while( (item[j] > stu[i] )&&( i < m )) i++;   
            if(i==m)  
            {  
                 flag = true;  
                break;  
            }  
            mini+=stu[i];   
            i++;  
            j++;  
        }  
        if(flag) cout<<"-1"<<endl;  
        else cout<<mini<<endl;  
    }  
    return 0;  
}  
