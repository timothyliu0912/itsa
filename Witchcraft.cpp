#include <bits/stdc++.h>  
using namespace std; 
long long int D,a,b,c,A,B,C;  
bool check()
{
    for(int i=0;i <= a; i++)  
        for(int j = 0;j <= b; j++)  
            for(int k = 0; k <= c; k++)  
                if(i*A + j*B + k*C == D) 
                    return true; 
    return false; 
}
int main()  
{  
    int T; scanf("%d",&T);  
    while(T--)  
    {  
        D=a=b=c=A=B=C=0;  
        bool flag = false;  
        scanf("%lld%lld%lld%lld%lld%lld%lld",&D,&a,&b,&c,&A,&B,&C);  
        flag = check();
        if(flag) printf("yes\n");  
        else printf("no\n");  
    }  
    return 0;  
}  
 