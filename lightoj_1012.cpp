#include<bits/stdc++.h>
using namespace std;
#define SIZE 25
#define Boundary(i,j) ( (i>=0 && i<m) && (j>=0 && j<n ) )
char grid[SIZE][SIZE];
bool visited[SIZE][SIZE];

int n,m,ans;

int X[] = {-1, 0, 1, 0};
int Y[] = { 0, 1, 0,-1};

void DFS(int x,int y)
{
    //cout<<"S "<<" "<<x<<" "<< y<<endl;
    for(int i=0;i<4;i++)
    {
        //cout<<"Dukce"<<endl;
        int u = x + X[i];
        int v = y+ Y[i];
        if( Boundary(u , v) && grid[u][v]=='.' && visited[u][v] == false  )
        {
            visited[u][v] = true ;
            ans++;
            DFS(u,v);
        }
    }
}

int main()
{

    int t;
    //freopen("input.txt", "r", stdin);
    cin>>t;

    for(int tt=1;tt<=t;tt++)
    {
        ///cout<<"Sajal"<<endl;
        int x,y;
        cin>>n>>m;
        getchar();
        memset(visited,false, sizeof(visited));

        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                grid[i][j] = getchar();
                if(grid[i][j] == '@')
                {
                    x = i;
                    y = j;
                    visited[x][y] = true;
                }
            }
            getchar();
        }

        ans = 1;
        DFS(x,y);
       // cout<<"What happen?"<<endl;
        cout<<"Case "<<tt<<": "<<ans<<endl;
    }
    return 0;
}
