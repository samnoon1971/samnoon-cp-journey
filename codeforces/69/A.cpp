#include <bits/stdc++.h>
using namespace std;
int main()
{
    int sumx=0, sumy=0, sumz=0;
    int n;
    cin >> n;
    int x, y, z;
    for(int i=0; i<n; i++)
    {
        cin >> x >> y >> z;
        sumx+=x;
        sumy+=y;
        sumz+=z;
    }
    if(sumx==0 && sumy==0 && sumz==0)
        cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
