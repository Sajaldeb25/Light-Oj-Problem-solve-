#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int a[n+1];

    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];

    sort(a,a+n);
    cout<<a[n-2]-a[0]<<endl;
    return 0;

}
