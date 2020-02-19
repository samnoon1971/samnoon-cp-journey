#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 5e5+10;
vector <int> vec[N];
vector <int> mark(N);
void go(int x)
{
    if(mark[x])
        return;
    mark[x]++;
    for(auto i:vec[x])
        go(i);
}
int main()
{
    int n;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        string s;
        cin >> s;
        int m = s.size();
        for(int j=0; j<m; j++)
        {
            vec[i].push_back(n+s[j]-'a');
            vec[n+s[j]-'a'].push_back(i);
        }
    }
    int cnt = 0;
    for(int i=n; i<n+26; i++)
    {
        if(mark[i] || vec[i].empty())
            continue;
        go(i);
        cnt++;
    }
    cout << cnt << endl;
    return 0;
}
