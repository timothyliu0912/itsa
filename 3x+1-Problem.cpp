#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    //scanf("%d",&t);
    while(t--)
    {
        int a,cnt=0;
        cin>>a;
        //scanf("%d",&a);
        while(a >= 1)
        {
            cnt++;
            if(!(a%2) && a > 1) a/=2;
            else if(a % 2 && a > 1) a = 3*a+1;
            if(a==1) break;
        }
        cout<<cnt<<endl;
    }
    return 0;
}
