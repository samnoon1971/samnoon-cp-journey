#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s, k;
    cin >> s;
    int i=1;
    int sum=0;
    while((sum*i)/2<s.size())
    {
       k+=s[((sum*i)/2)];
       i++;
       sum++;

    }
    cout << k << endl;
    return 0;
}
