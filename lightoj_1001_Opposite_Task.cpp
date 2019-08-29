#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int tt=1;tt<=t;tt++)
    {
        int n;
        cin>>n;
        int c = n/2;

        int a = c;
        c = n-a;

        cout<<a<<" "<<c<<endl;
    }
}
