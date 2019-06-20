#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,mx = -100000;
    int cnt = 0;
    while(!cin.eof())
    {
        cin<<a;
        if(mx < a) 
        {
            mx = a;
            cnt++;
        }   
    }
    cout<<cnt<<endl;
    //printf("%d\n",cnt);
    return 0;
}
