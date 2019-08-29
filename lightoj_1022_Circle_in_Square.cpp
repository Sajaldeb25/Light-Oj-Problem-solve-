#include<bits/stdc++.h>
using namespace std;

#define pi 2*acos(0.0)

int main()
{
    double a,b,c,d,ans;
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        scanf("%lf",&a);
        b = pi*a*a;
        c = 4*a*a;

      //  cout<<a<<endl;
      //  cout<<b<<endl;
        printf("Case %d: %.2f\n",i,(c-b) );
       // printf("Case %d: %.2f\n",i,a );

    }
    return 0;

}
