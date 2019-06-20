#include <bits/stdc++.h>
using namespace std;
int main()
{
    double h,w;
   // scanf("%lf%lf",&h,&w);
    cin>>h>>w;
    h /=100;
    double b = w / (h * h);
    printf("%.1lf ",b);
    cout<<b;
    if(b < 18.5) cout<<"underweight\n";
    else if(b < 24 && b >=18.5) cout<<"normal\n";
    else if(b >=24 && b < 27)  cout<<"overweight\n";
    else if(b >=27 && b < 30)  cout<<"mild obesity\n";
    else if(b >=30 && b < 35)  cout<<"moderate obesity\n";
    else cout<<"severe obesity\n";
    return 0;
}
