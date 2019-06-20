#include <bits/stdc++.h>  
using namespace std;  
char a[1000];  
int main()  
{  
    while(fgets(a,1000,stdin)!=NULL)  
    {  
        int l = strlen(a);  
        for(int i=0;i<l;i++)  
        {  
            if(a[i]<='Z'&&a[i]>='A')   
            {  
                a[i] = 155 - a[i];  
                a[i] = tolower(a[i]);  
            }  
            else if(a[i]<='z'&&a[i]>='a')  
            {  
                a[i] = 219 - a[i];  
                a[i] = toupper(a[i ]);  
            }  
            else if(a[i]<='9'&&a[i]>='0')  
            {  
                if(a[i]=='9') a[i] = '0';  
                else a[i] = a[i]+1;  
            }  
        }   
        printf("%s",a);  
    }  
    return 0;  
}  