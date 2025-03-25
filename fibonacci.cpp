#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    int a = 0, b = 1;
    if(n==1) 
        cout<<a<<endl;
    else if(n==2) 
        cout<<a<<" "<<b<<endl;
    else
    {
        cout<<a<<" "<<b<<endl;
        for(int i=3;i<=n;i++)
            cout<<a+b<<" ", b = a+b, a = b-a;
    }
    return 0;
}