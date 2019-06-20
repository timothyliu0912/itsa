#include <stdio.h>  
int main(int argc, const char * argv[]) {  
    int mcas,t;  
    //scanf("%d",&mcas);  
    //for(t=0;t<mcas;t++)  
    //{  
        int a[3],i,b[100]={0},c[100]={0};  
        for(i=0;i<3;i++)  
        {  
            scanf("%d",&a[i]);  
            b[i]=a[i];  
        }  
        int d,j,k;  
        scanf("%d",&d);  
        for(i=0;i<d-1;i++)  
            for(j=0;j<25;j++)  
            {  
                for(k=0;k<3;k++)  
                    c[j+k]+=b[j]*a[k];  
                b[j]=c[j];  
                c[j]=0;  
            }  
        for(i=0;i<=2*d;i++)  
        {  
            printf("%d",b[i]);  
            if(i<2*d)printf(" ");  
        }  
        printf("\n");  
    //}  
    return 0;  
}  