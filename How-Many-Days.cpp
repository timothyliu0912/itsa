//#include <stdio.h>
#include <bits/stdc++.h>
int main()  
{  
    int i,j,k,y,m,d,x;   
   // scanf("%d%d%d",&y,&m,&d);
    cin<<y<<m<<d;
    int z;  
    z=d;  
    if(y<1970)  //printf("invalid\n");
        cout<<"invalid"<<endl;
    else  
    {  
    if((y%400==0)||((y%4==0)&&(y%100!=0)))  
    {  
        if((m==2)&&(d>29))  
        {  
            //printf("invalid\n");
            cout<<"invalid"<<endl;
        }  
        else if(m>12||m<=0)  
        {  
            //printf("invalid\n");
            cout<<"invalid"<<endl;
        }  
        else if((d>30)&&(m==4||m==6||m==9||m==11))  
        {  
            //printf("invalid\n");
            cout<<"invalid"<<endl;
        }  
        else if((d>31)&&(m==1||m==3||m==5||m==7||m==8||m==10||m==12))  
        {  
            //printf("invalid\n");
            cout<<"invalid"<<endl;
        }  
        else  
        {  
              
            for(j=y-1;j>=1970;j--)  
            {  
                if((j%400==0)||((j%4==0)&&(j%100!=0)))  
                {  
                    z=z+366;  
                }  
                else  
                {  
                    z=z+365;  
                }  
            }  
            for(i=m-1;i>=0;i--)  
            {  
                if(i==4||i==6||i==9||i==11)  
                {  
                    z=z+30;  
                }  
                if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)  
                {  
                    z=z+31;  
                }  
                if(i==2)  
                {  
                    z=z+28;  
                }  
            }  
                // printf("%d\n",z);
                cout<<z<<endl;
            }  
        }  
    else  
    {  
        if((m==2)&&(d>28))  
        {  
            cout<<"invalid"<<endl;
        }  
        else if(m>12||m<=0)  
        {  
            cout<<"invalid"<<endl;
        }  
        else if((d>30)&&(m==4||m==6||m==9||m==11))  
        {  
            cout<<"invalid"<<endl;
        }  
        else if((d>31)&&(m==1||m==3||m==5||m==7||m==8||m==10||m==12))  
        {  
            cout<<"invalid"<<endl;
        }  
        else if(m>12||m<=0)  
        {  
            cout<<"invalid"<<endl;
        }  
        else  
        {  
            for(j=y-1;j>=1970;j--)  
             {  
                 if((j%400==0)||((j%4==0)&&(j%100!=0)))  
                 {  
                     z=z+366;  
                 }  
                 else  
                 {  
                     z=z+365;  
                 }  
             }  
            for(i=m-1;i>=0;i--)  
            {  
                if(i==4||i==6||i==9||i==11)  
                {  
                    z=z+30;  
                }  
                if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)  
                {  
                    z=z+31;  
                }  
                if(i==2)  
                {  
                    z=z+28;  
                }  
            }  
                  cout<<z<<endl;
            }  
        }  
    }  
//}  
    return 0;  
}  
