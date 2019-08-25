#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    int t,c,s;
    cin>>t;

    for(int tt=1;tt<=t;tt++)
    {
        cin>>s>>c;
        cout<<"Case "<<tt<<":"<<endl;


        deque<int>dq;

        int v;
        string str;
        while(c--)
        {
            cin>>str;
            if(str == "pushLeft")
            {
                cin>>v;
                if(dq.size() == s)
                {
                    cout<<"The queue is full"<<endl;
                }
                else
                {
                    dq.push_front(v);
                    cout<<"Pushed in left: "<<v<<endl;
                }
            }

            else if(str == "pushRight")
            {
                cin>>v;
                if(dq.size() == s)
                {
                    cout<<"The queue is full"<<endl;
                }
                else
                {
                    dq.push_back(v);
                    cout<<"Pushed in right: "<<v<<endl;
                }
            }

            else if(str == "popLeft")
            {
                //cin>>v;
                if(dq.empty())
                {
                    cout<<"The queue is empty"<<endl;
                }
                else
                {
                    cout<<"Popped from left: "<<dq.front()<<endl;
                    dq.pop_front();
                }
            }

            else if(str == "popRight")
            {
                //cin>>v;
                if(dq.empty())
                {
                    cout<<"The queue is empty"<<endl;
                }
                else
                {
                    cout<<"Popped from right: "<<dq.back()<<endl;
                    dq.pop_back();
                }
            }

        }
    }
}
