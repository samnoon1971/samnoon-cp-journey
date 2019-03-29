#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int cnt=1, sum=1;
    for(int i=1; i<=n; i++)
    {
        if(i*i>n)
            break;
        sum=i*i;
        cnt=i;
    }
    int c=n-sum;
    if(!c)
        cout << 4*cnt << endl;
    else if(c>cnt)
        cout << 4*cnt+4 << endl;
    else
        cout << 4*cnt+2 << endl;
    return 0;
}
