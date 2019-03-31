#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
set <int> ms;
void dfs(int x, bool visited[], vector <int> adj[], int mark[])
{
    if(visited[x])
        return;
    visited[x]=true;
    int sum=0;
    for(auto i:adj[x])
    {
        if(mark[i]==1)
            sum++;
        dfs(i, visited, adj, mark);
    }
    if(sum==adj[x].size() && mark[x]==1)
        ms.insert(x);
}

int main()
{
    int n;
    cin >> n;
    vector <int> adj[n+1];
    bool visited[n+1];
    int  mark[n+1];
    int src;
    for(int i=0; i<n; i++)
    {
        int p, c;
        cin >> p >> c;
        if(p!=-1)
        adj[p].push_back(i+1);
        mark[i+1]=c;
        if(p==-1)
            src=i+1;
    }
    memset(visited, false, sizeof(visited));
    dfs(src, visited, adj, mark);
    if(ms.empty())
        cout << -1 << endl;
    else
    {
        for(auto i:ms)
            cout << i << " ";
        cout << endl;
    }
    return 0;
}
