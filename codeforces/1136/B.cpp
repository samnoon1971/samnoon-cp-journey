#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int sum=3*n+min(k-1, n-k);
    cout << sum << endl;
    return 0;
}
