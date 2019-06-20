//#include <stdio.h>
#include <bits/stdc++.h>
int fib(int n)  
{  
    if(!n) return 0;  
    else if(n == 1) return 1;  
    else return fib(n-1)+ fib(n-2);  
}  
int main()  
{  
    int n;  
   //scanf("%d",&n);
    cin>>n;
    while(n--)  
    {  
        int c;  
        //scanf("%d",&c);
        cin>>c;
        cout<<fib(c)<<endl;
        //printf("%d\n",fib(c));      
    }  
    return 0;  
} 
