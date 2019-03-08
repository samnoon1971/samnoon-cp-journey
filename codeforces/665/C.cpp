#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    char c;
    for(int i=0, j=0; i<s.size(); i=j)
    {
        while(i<s.size() && s[i]==s[j])
            j++;
        c='a';
        while(s[i]==c || s[i-1]==c || s[j]==c)
            c++;
        for(int k=i; k<j; k++)
        {
            if((i+k)%2)
                    s[k]=c;
        }
    }
    cout << s << endl;
    return 0;
}
