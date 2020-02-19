#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 2e5+500;
int parent[N], mark[N];
int check[N];
void make_set(int v) {
    parent[v] = v;
    mark[v] = 1;
}
int find_set(int v) {
    if (v == parent[v])
        return v;
    return parent[v] = find_set(parent[v]);
}
void init()
{
    for(int i=0; i<N; i++)
    {
        make_set(i);
    }
}
void union_sets(int a, int b) {
    check[a]++;
    check[b]++;
    a = find_set(a);
    b = find_set(b);
    if (a != b) {
        if (mark[a] < mark[b])
            swap(a, b);
        parent[b] = a;
        mark[a] += mark[b];
        mark[b] = 0;
    }
}
int main()
{
    int n;
    cin >> n;
    init();
    for(int i=0; i<n; i++)
    {
        string s;
        cin >> s;
        int m = s.size();
        for(int j=0; j<m; j++)
        {
            union_sets(i, n+s[j]-'a');
        }
    }
    set <int> ms;
    for(int i=n; i<n+26; i++)
    {
        if(check[i])
        {
        int sum = find_set(i);
        if(mark[sum])
            ms.insert(sum);
        }
    }
    cout << ms.size() << endl;
    return 0;
}
