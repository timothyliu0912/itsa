#include <bits/stdc++.h>
using namespace std;
int f(int t)
{
    if(t > 1)return f(t-1) * t;
    else return 1;

}
int main()
{
    int t;
    //scanf("%d",&t);
    cin>>t;
    while(t--)
    {
        int n;
        //scanf("%d",&n);
        cin>>n;
        int ans = f(n);
        cout<<ans<<endl;
    }
    return 0;
}
