#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x=0;
    string s;
    cin >> n >> s;
    for(int i=0; i<n-1; i++)
    {
        if(s.at(i)==s.at(i+1))
             x++;
    }
    cout << x << endl;
    return 0;
}
