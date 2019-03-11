#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    vector <pair<int, int> > v;
    cin >> n;
    int a, b;
    for(int i=0; i<n; i++)
    {
        cin >> a >> b;
        v.push_back(make_pair(a, b));
    }
    int k;
    cin >> k;
    int sum=0;
    for(auto i:v)
    {
        int x=i.first;
        int y=i.second;
        if(x<=k && k<=y)
            break;
        sum++;
    }
    cout << n-sum << endl;
    return 0;
}
