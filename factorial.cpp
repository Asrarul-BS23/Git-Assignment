#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    long long int fact = 1;
    for(int i=2;i<=n;i++)
        fact *= i;
    cout<<"Factorial of "<<n<<" : "<<fact<<endl;
}