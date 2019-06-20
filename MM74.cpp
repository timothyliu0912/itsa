#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    while(!cin.eof())
    {
        int cnt = 0;
        for(int i = n;i <= m;i++)
            if(i % 2) cnt+=i;
        cout<<cnt<<endl;
    }
    return 0;
}
