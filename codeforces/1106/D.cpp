#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector <int> v[n+1];
    priority_queue <int> pq;
    int mark[n+1]={0};
    for(int i=0; i<m; i++)
    {
        int x, y;
        cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    pq.push(-1);
    mark[1]=1;
    while(!pq.empty())
    {
        int s=-pq.top();
        pq.pop();
        cout << s << " ";
        for(auto u:v[s])
        {
            if(mark[u])
                continue;
            mark[u]++;
            pq.push(-u);
        }
    }
    return 0;
}
