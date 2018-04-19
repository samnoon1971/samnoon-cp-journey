#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, sum=0;
    cin >> n;
    int a[n];
    for(int i=0; i<n; ++i)
        cin >> a[i];
    for(int i=0; i<n; ++i)
        sum+=a[i];
    double sum2 = (double) sum/2;
    double cnt=0;
    for(int i=0; i<n; ++i)
    {
        cnt+=a[i];
        if((sum2-cnt) < (.5))
        {
            cout << i+1 << endl;
            return 0;
        }
    }
}
