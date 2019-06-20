#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    cin>>n;
    int cnt = 0,a;
    for(int i = 0 ; i < n ; i++)
        for(int j = 0 ; j < n ; j++)
        {
           // scanf("%d",&a);
            cin>>a;
            if(i==j) cnt+=a;
        }
    cout<<cnt<<endl;
    return 0;
}
