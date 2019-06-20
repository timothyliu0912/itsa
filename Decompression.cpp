#include <stdio.h>      
#include <string.h>
#include <bits/stdc++.h>
int main(int argc, const char * argv[]) {      
    char a[2000]={0},c[2000]={0};      
    int num[6000]={0};
    cin>>a;
    //scanf("%s",a);      
        int i,k=0,t=0,total=0;      
        for(i=0;i<strlen(a);i++)      
        {      
            if(a[i]>='0'&&a[i]<='9')      
            {      
                num[k]=a[i]-'0'; k++;      
            }      
            if(a[i]>'9'||a[i]<'0')      
            {      
                c[t]=a[i]; t++;      
                if((a[i+1]>='0'&&a[i+1]<='9')||a[i+1]=='\0')      
                {      
                    int j;      
                    for(j=0;j<k;j++) total+=total*10+num[j];      
                          
                    for(j=0;j<total;j++) cout<<a;//printf("%s",c);
                          
                    memset(c, 0, sizeof(c));      
                          
                    memset(num, 0, sizeof(num));      
                          
                    total=0; k=0; t=0;      
                }      
            }      
        }     
    return 0;      
}  
