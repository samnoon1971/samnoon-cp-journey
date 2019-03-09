#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
   int n, m;
   cin >> n >> m;
   vector <int> adj[n+1];
   bool visited[n+1];
   int color[n+1];
   for(int i=0; i<=n; i++)
   {
       visited[i]=false;
       color[i]=0;
   }
   for(int i=0; i<m; i++)
   {
       int u, v;
       cin >> u >> v;
       adj[u].push_back(v);
       adj[v].push_back(u);
   }
   for(int i=1; i<=n; i++)
   {
       if(visited[i]) continue;
       queue <int> q;
       q.push(i);
       color[i]=1;
       while(!q.empty())
       {
           int s=q.front();
           q.pop();
           visited[s]=true;
           for(auto i:adj[s])
           {
               if(visited[i])
               {
                   if(color[i]==color[s])
                   {
                       cout << -1 << endl;
                       return 0;
                   }
                   continue;
               }
               if(color[s]==1)
                color[i]=2;
               else
                color[i]=1;
                q.push(i);
           }
       }
   }
   int x=count(color, color+n+1, 1), y=count(color, color+n+1, 2);
   cout << x << endl;
   for(int i=0; i<=n; i++)
   {
       if(color[i]==1)
       {
           if(x!=1)
             cout << i << " ";
           else cout << i << endl;
          x--;
       }
   }
   cout << y << endl;
   for(int i=0; i<=n; i++)
   {
       if(color[i]==2)
        {
            if(y!=1)
               cout << i << " ";
            else cout << i << endl;
            y--;
        }
   }
   return 0;
}
