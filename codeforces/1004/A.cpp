#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, d, sum=2;
    cin >> n >> d;
    int a[n];
    for(int i=0; i<n; i++)
        cin >> a[i];
    for(int i=0, j=1; j<n; i++, j++)
    {
        if(a[j]-a[i]>2*d)
            sum+=2;
        else if(a[j]-a[i] == 2*d)
            sum++;
    }
    cout << sum << endl;
    return 0;
}
