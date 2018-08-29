#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector <int> a, b;
    int n, x;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> x;
        a.push_back(x);
    }
    for(int i=0; i<n; i++)
    {
        cin >> x;
        b.push_back(x);
    }
    int s1=0, s2=0;
    s1 = accumulate(a.begin(), a.end(), s1);
    s2 = accumulate(b.begin(), b.end(), s2);
    if(s2>s1)
        cout << "No" << endl;
    else cout << "Yes" << endl;
    return 0;
}
