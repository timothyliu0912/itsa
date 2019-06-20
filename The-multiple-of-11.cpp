#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        string a;
        cin>>a;
        int cnt1 = 0,cnt2 = 0;
        for(int i = 0;i < a.size(); i++)
        {
            int c = a[i] -'0';
            if(i%2) cnt1+=c;
            else cnt2+=c;
        }
        if((cnt1 - cnt2)%11) cout<<"false"<<endl;
        else cout<<"true"<<endl;
    }
    return 0;
}