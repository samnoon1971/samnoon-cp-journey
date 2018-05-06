#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s;
    cin >> n >> s;
    int pos=0, m=0, x;
    for(int i=0; i<s.size()-1; i++)
    {
        string sb=s.substr(i, 2);
        for(int j=0; j<s.size()-1; j++)
        {
            string sa=s.substr(j, 2);
            if(sb==sa)
                pos++;
        }
        if(pos>=m)
            {   m=pos;
                x=i;
            }
        pos=0;
    }
    cout << s.substr(x, 2) << endl;
    return 0;

}
