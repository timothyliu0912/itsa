#include <bits/stdc++.h>  
#define pb push_back  
#define maxn 2000  
using namespace std;  
vector <int> tree[maxn];  
int dp[maxn][2]; //dp[i][0] 父節點不來來，子來或不來,dp[i][1]父節點來，子節點不來  
void ini()  
{  
    for(int i=0;i<maxn;i++)  
    {  
        tree[i].clear();  
        dp[i][0] = 0;  
        dp[i][1] = 0;  
    }  
}  
int dfs(int x)  
{  
    for(int i=0;i<tree[x].size();i++)  
    {  
        int u = tree[x][i];  
        dfs(u);  
        dp[x][0] += max(dp[u][1],dp[u][0]);  
        dp[x][1] += dp[u][0];  
    }  
}  
int main()  
{  
    int T;  
    scanf("%d",&T);  
    while(T--)  
    {  
          
        int n,r,root;  
        ini();  
        scanf("%d%d",&n,&r);  
        dp[1][1] = r;  
        root = 1;  
        for(int i=2;i<=n;i++)  
        {  
            int x,u;scanf("%d%d",&x,&u);  
            tree[x].pb(i);  
            dp[i][1] = u;  
        }  
        dfs(root);  
        int maxi = max(dp[root][0],dp[root][1]);  
        printf("%d\n",maxi);  
    }  
    return 0;  
}  