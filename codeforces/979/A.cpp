#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long
int main()
{
    ull n;
    cin >> n;
    if(n==0)
        cout << 0 << endl;
    else if(n%2==1)
        cout << n/2+1 << endl;
    else
    cout << n+1 << endl;
    return 0;

}
