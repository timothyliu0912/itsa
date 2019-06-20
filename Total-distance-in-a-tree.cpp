#include <bits/stdc++.h>  
#define fst first  
#define snd second  
#define pb push_back  
using namespace std;  
vector < int > tree[5050];  
int wei[5050];  
int cnt;  
void ini()  
{  
    for(int i=0;i<5050;i++)  
    {  
        wei[i]=0;  
        tree[i].clear();  
    }  
}  
int dfs(int x)  
{  
    cnt++;  
    for(int i=0;i<tree[x].size();i++)  
    {  
        int g = tree[x][i];  
        if(g) dfs(g);  
        else return 0;  
    }  
    return 0;  
}  
int main()  
{  
    int T;  
    scanf("%d",&T);  
    while(T--)  
    {  
        ini();  
        int n;  
        scanf("%d",&n);  
        for(int i=2;i<=n;i++)  
        {  
            int node;  
            scanf("%d",&node);  
            tree[node].pb(i);  
        }  
        for(int i=2;i<=n;i++) scanf("%d",&wei[i]);  
        int ans=0;  
        for(int i=1;i<=n;i++)  
        {  
            int u=i;  
            cnt = 0;  
            //cout<<i<<endl;  
            dfs(u);  
            //cout<<"cnt"<<cnt<<endl;  
            ans += (n-cnt)*2*cnt*wei[u];  
        }  
        cout<<ans<<endl;  
    }  
    return 0;  
}  