#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    pair<int,int> p1, p2;
    int a[n];
    p1={INT_MAX, -1};
    p2={INT_MIN, -1};
    for(int i=0; i<n; i++)
        {
            cin >> a[i];
            if(a[i]>p2.first)
            {
                p2.first=a[i];
                p2.second=i;
            }
            if(a[i]<p1.first)
            {
                p1.first=a[i];
                p1.second=i;
            }
        }
    int p=max(n-p2.second-1, p2.second), q=max(n-p1.second-1, p1.second);
    cout << max(p, q) << endl;
    return 0;
}
