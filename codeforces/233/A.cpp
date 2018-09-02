#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if(n%2==1)
    {
        cout << -1 << endl;
        return 0;
    }
    vector <int> v;
    for(int i=1; i<=n; i++)
        v.push_back(i);
    sort(v.rbegin(), v.rend());
    vector <int> :: iterator it;
    for(it=v.begin(); it!=v.end()-1; it++)
        cout << *it << " ";
    cout << *it << endl;
    return 0;
}
