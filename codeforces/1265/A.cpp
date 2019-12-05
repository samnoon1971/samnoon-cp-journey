#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
   int t;
   cin >> t;
   while(t--)
   {
       string s;
       cin >> s;
       int n=s.size();
       int flag=0;
       for(int i=0; i<n-1; i++)
       {
           if(s[i]==s[i+1] && s[i]!='?')
           {
             flag++;
             break;
           }
           if(s[i]=='?')
           {
               if(i==0)
               {
                   if(s[i+1]=='a')
                    s[i]='b';
                   else if(s[i+1]=='b')
                    s[i]='c';
                   else
                    s[i]='a';
               }
               else
               {
                   if(s[i+1]=='a')
                   {
                       if(s[i-1]=='b')
                        s[i]='c';
                       else
                        s[i]='b';
                   }
                   else if(s[i+1]=='b')
                   {
                       if(s[i-1]=='a')
                        s[i]='c';
                       else
                        s[i]='a';
                   }
                   else
                   {
                        if(s[i-1]=='a')
                         s[i]='b';
                       else
                         s[i]='a';
                   }
               }
           }
       }
       if(s[n-1]=='?')
       {
           if(s[n-2]=='a')
            s[n-1]='b';
           else if(s[n-2]=='b')
            s[n-1]='c';
           else
            s[n-1]='a';
       }
       if(flag)
        cout << -1 << endl;
       else
        cout << s << endl;
   }
   return 0;
}
