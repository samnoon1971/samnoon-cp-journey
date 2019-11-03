#include <bits/stdc++.h>
using namespace std;
typedef  long long ll;
const int N = 2e5+10;
vector <int> adj[N];
vector <int> keep(N);
vector <bool> vis(N);
bool cmp(int x, int y)
{
    return keep[x]<keep[y];
}
int main()
{
    int n;
    cin >> n;
    vis.resize(n+1);
    keep.resize(n+1);
    for(int i=0; i<n-1; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    queue <int> mark;
    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        mark.push(x);
        keep[x]=i;
    }
    for(int i=1; i<=n; i++)
    {
        sort(adj[i].begin(), adj[i].end(), cmp);
    }
    queue <int> q;
    q.push(1);
    vis[1]=true;
    while(!q.empty())
    {
        int s=q.front();
        q.pop();
        if(s!=mark.front())
        {
            cout << "No" << endl;
            return 0;
        }
        mark.pop();
        for(auto i:adj[s])
        {
            if(vis[i])
                continue;
            vis[i]=true;
            q.push(i);
        }
    }
    cout << "Yes" << endl;
    return 0;
}
