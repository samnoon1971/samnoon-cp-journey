#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define DEBUG cout << "VUL KHUJHE PAISI" << endl;
vector <string> vs;
int main()
{
    string s;
    cin >> s;
    int n = s.size(), i=0;
    while(i<=5)
    {
        int j = 0;
        while(j<=20)
        {
            int k = 0;
            while(k<=i)
            {
                if((i*j-k)==n)
                {
                    reverse(s.begin(), s.end());
                    for(int p=1; p<=i-k; p++)
                    {
                        string temp;
                        for(int q=1; q<=j; q++)
                        {
                            temp+=s.back();
                            s.pop_back();
                        }
                        vs.push_back(temp);
                    }
                    //DEBUG;
                    for(int p=1; p<=k; p++)
                    {
                        string temp;
                        for(int q=1; q<=j-1; q++)
                        {
                            temp+=s.back();
                            s.pop_back();
                        }
                        if(temp.size())
                           vs.push_back(temp+"*");
                    }
                    cout << i << " " << j << endl;
                    for(auto it:vs)
                    {
                        cout << it << endl;
                    }
                    return 0;
                }
                k++;
            }
            j++;
        }
        i++;
    }
}
