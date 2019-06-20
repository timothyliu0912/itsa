#include <bits/stdc++.h>  
#define fst first  
#define snd second  
#define pb push_back  
using namespace std;  
int main()  
{  
    //int T;  
    //scanf("%d",&T);  
    //while(T--)  
    //{  
        int n;  
        int mark[20000]={0};  
        bool par[20000] = {false};  
        scanf("%d",&n);  
        for(int i = 1; i < n; i++)     
        {  
            scanf("%d",&mark[i]);  
        }  
        int cnt = 0;  
        for(int i = n-1; i >= 0; i--)  
        {  
            if(!par[i]) par[mark[i]] = true;  
            else cnt++;  
        }  
        cout<<cnt<<endl;  
  
   // }  
    return 0;  
}  