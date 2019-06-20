#include <bits/stdc++.h>  
#define val first  
#define wei second  
using namespace std;  
pair <int ,int > item[100];  
int n, l, wa, wb,a; //wa maximum pound wb maximum   
void ini()  
{  
    for(int i=0;i<100;i++)  
    {  
        item[i].val = 0;  
        item[i].wei = 0;  
    }  
}  
int knapsack()   
{  
    int ans = 0;  
    for(int i=0;i < (1 << n) ;i++) //列舉2^n種可能  
    {  
        int w = 0;  
        int v = 0;  
        /* w is total weight  
           v is total value */  
        if(__builtin_popcount(i) >= l)    
        {  
            for(int j=0;j<n;j++) //物品個數  
            {  
                cout<<i<<" "<<j<<endl;  
                if( (i>>j) & 1) //如果  
                {  
                    cout<<"add"<<i<<" "<<j<<endl;  
                    w += item[j].wei;  
                    v += item[j].val;  
                }  
            }  
            if(wa <= w && wb >= w)  
            {  
                ans = max( ans,((w+v-1)/w) );  
            }  
        }  
    }  
    return ans;  
}  
int main()  
{  
    while(!cin.eof())
    {  
        ini();
        cin>>n>>l>>wa>>wb;
        for(int i=0;i<n;i++)  
            //scanf("%d%d",&item[i].val,&item[i].wei);
            cin>>item[i].val<<item[i].wei;
        //scanf("%d",&a);
        cin>>a;
        cout<<knapsack()<<endl;
        //printf("%d\n",knapsack());  
        if(a==-1) return 0;  
        else continue;  
    }  
    return 0;  
}  
