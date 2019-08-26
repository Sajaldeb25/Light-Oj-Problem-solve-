#include<bits/stdc++.h>
using namespace std;

int main()
{
    ///freopen("input.txt", "r", stdin);
    int t;
    cin>>t;

    for(int tt=1;tt<=t;tt++)
    {
        cout<<"Case "<<tt<<":"<<endl;

        stack<string>st1,st2;
        string s,add,take;
        add = "http://www.lightoj.com/";
        st1.push(add);

        while(cin>>s)
        {
            if(s== "QUIT")
                break;
            if(s == "VISIT")
            {
                cin>>take;
                st1.push(take);
                cout<<take<<endl;
                if(!st2.empty())
                {
                    while(!st2.empty())
                        st2.pop();
                }
            }


            else
            {
                if(s == "BACK")
                {
                    st2.push( st1.top() );
                    st1.pop();

                    if(!st1.empty())
                        cout<<st1.top()<<endl;
                    else
                    {
                        cout<<"Ignored"<<endl;
                        st1.push( st2.top() );
                        st2.pop();
                    }
                }
                else if(s == "FORWARD")
                {
                    if(!st2.empty())
                    {
                        cout<<st2.top()<<endl;
                        st1.push(st2.top());
                        st2.pop();
                    }
                    else
                        cout<<"Ignored"<<endl;
                }
            }

        }
    }
    return 0;
}
