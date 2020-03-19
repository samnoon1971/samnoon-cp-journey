#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
   int n;
   cin >> n;
   string s;
   cin >> s;
   int cnt = 0;
   for(int i=0; i<n; i+=2)
   {
       if(s[i]=='a')
       {
           if(s[i+1]=='a')
           {
               cnt++;
               s[i+1]='b';
           }
       }
       else
       {
           if(s[i+1]=='b')
           {
               cnt++;
               s[i+1]='a';
           }
       }
   }
   cout << cnt << endl << s << endl;
   return 0;
}
