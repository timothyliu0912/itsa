#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,s,num,n;
    cin>>s;
    //scanf("%d",&s);
    for(i=0;i<s;i++){
        n=1;
       // scanf("%d",&num);
        cin>>num
        for(j=0;j<num;j++){
            n*=2;
        }
       // printf("%d\n",n);
        cout<<n<<endl;
    }
    return 0;   
}
