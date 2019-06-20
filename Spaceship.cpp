#include <bits/stdc++.h>  
#define fst first  
#define snd second  
#define pb push_back  
using namespace std;  
int main()  
{  
    int n;  
    while(1)  
    {  
        scanf("%d",&n);  
        if(!n) return 0;  
        int a[2000],b[2000];  
        for(int i=0;i<n;i++)  
            scanf("%d%d",&a[i],&b[i]);  
            int mini1 = abs(a[0]-1000),mini2 = abs(b[0]-1000);  
        for(int i=1;i<n;i++)  
        {  
            int now11,now12,now21,now22;  
            now11 = mini1 + abs(a[i]-a[i-1]); // from 1 to 1  
            now12 = mini1 + abs(b[i]-a[i-1]); //from 1 to 2  
            now21 = mini2 + abs(a[i]-b[i-1]); //from 2 to 1  
            now22 = mini2 + abs(b[i]-b[i-1]);// from 2 to 2  
            mini1 = min(now11,now21);  
            mini2 = min(now22,now12);  
        }  
        cout<<min(mini1,mini2)<<endl;  
    }  
    return 0;  
}  