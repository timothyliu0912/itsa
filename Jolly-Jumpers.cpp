#include <bits/stdc++.h>  
int main(int argc, const char * argv[]) {  
        int i;
            int m,Marr[4000]={0},j,I[4000]={0},k;  
            while(!cin.eof())
            {
                cin>>m
                for(j=0;j<m;j++)  
                    cin>>Marr[j];
                for(j=0;j<m;j++)
                {  
                    I[j]=Marr[j]-Marr[j+1];  
                    if(I[j]<0) I[j]=-I[j];  
                }  
                int d=0;  
                for(j=0;j<m-1;j++)  
                {  
                    if(I[j]<=m-1&&I[j]>0)  
                    {  
                        for(k=j+1;k<m-1;k++){  
                            if(I[j]==I[k])d++;  
                        }  
                    }  
                    else d++;  
                }  
                if(d==0)cout<<"Jolly\n";
                else cout<<"Not jolly\n";   
            }
        return 0;  
    }  
