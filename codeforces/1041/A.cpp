#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x;
    cin >> n;
    vector <int> v;
    for(int i=0; i<n; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    vector <int> :: iterator mx, mn;
    mx = max_element(v.begin(), v.end());
    mn = min_element(v.begin(), v.end());
    int dif = *mx - *mn + 1;
    cout << dif - v.size() << endl;
    return 0;
}
