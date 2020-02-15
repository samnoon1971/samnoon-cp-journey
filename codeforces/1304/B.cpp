#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool isCheck(string s)
{
    int n = s.size();
    for(int i=0; i<n/2; i++)
    {
        if(s[i]!=s[n-i-1])
            return false;
    }
    return true;
}
int main()
{
   int n, m;
   cin >> n >> m;
   vector <string> vec(n);
   set <string> ms;
   for(int i=0; i<n; i++)
   {
       cin >> vec[i];
       ms.insert(vec[i]);
   }
   string pal;
   vector <string> mp;
   vector <string> pre, suf;
   for(int i=0; i<n; i++)
   {
       string s = vec[i];
       reverse(s.begin(), s.end());
       if(ms.find(s)!=ms.end() && s!=vec[i])
       {
           pre.push_back(vec[i]);
           suf.push_back(s);
           ms.erase(vec[i]);
           ms.erase(s);
       }
       else if(count(s.begin(), s.end(), s[0])==m)
       {
           mp.push_back(s);
           ms.erase(s);
       }
       else if(isCheck(s))
       {
           if(s.size()>pal.size())
           {
               pal = s;
               ms.erase(s);
           }
       }
   }
   string mid;
   if(mp.size())
   {
       vector <string> :: iterator it, ip;
       for(it=mp.begin(); it!=mp.end(); it++)
       {
           string temp = *it;
           string res = temp;
           for(ip=it+1; ip!=mp.end(); ip++)
           {
               string kemp = *ip;
               if(temp[0] == kemp[0])
               {
                   res += kemp;
               }
           }
           if(res.size()>mid.size())
           {
               mid = res;
           }
       }
   }
   if(pal.size()>mid.size())
    mid = pal;
   if(pre.empty() && mid.empty())
   {
       cout << 0 << endl;
   }
   else
   {
       int cnt = mid.size();
       for(auto it:pre)
       {
           string k = it;
           cnt += k.size();
       }
       for(auto it:suf)
       {
           string k = it;
           cnt += k.size();
       }
       cout << cnt << endl;
       vector <string> :: iterator it;
       vector <string> :: reverse_iterator ip;
       for(it=pre.begin(); it!=pre.end(); it++)
        cout << *it;
       cout << mid;
       for(ip=suf.rbegin(); ip!=suf.rend(); ip++)
        cout << *ip;
       cout << endl;
   }
   return 0;
}
