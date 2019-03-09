#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    int a=(k-1)/2;
    int b=a/m+1, c=a%m+1;
    cout << b << " " << c << " ";
    if(k%2)
        cout << 'L' << endl;
    else cout << 'R' << endl;
    return 0;
}
