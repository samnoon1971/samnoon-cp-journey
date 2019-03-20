#include <bits/stdc++.h>
using namespace std;
int calc(int n, int m)
{
    if(n>m)
        return -1;
    else if(n==m)
        return 0;
    int p1=calc(2*n, m);
    int p2=calc(3*n, m);
    if(p1==-1 && p2==-1)
        return -1;
    else
        return 1+max(p1, p2);
}
int main()
{
    int n, m;
    cin >> n >> m;
    cout << calc(n, m) << endl;
    return 0;
}
