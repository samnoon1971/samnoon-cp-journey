
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1e5+10;
//1106004
struct point
{
  int s, e, p;
  bool operator < (const point &p)
  {
      return e<p.e;
  }
};
point prothom[N], shesh[N];
vector <ll> comp;
struct node1
{
    int val;
    node1 *lc, *rc;
    node1(): val(1e9-1), lc(NULL), rc(NULL){}
};
node1 *tree[4*N];
void update1(node1 *node, int tl, int tr, int x, int val)
{
    node->val = min(node->val, val);
    if(tl==tr)
        return;
    int mid = (tl+tr)/2;
    if(x<=mid)
    {
        if(node->lc==NULL)
            node->lc = new node1();
        update1(node->lc, tl, mid, x, val);
    }
    else
    {
        if(node->rc==NULL)
            node->rc = new node1();
        update1(node->rc, mid+1, tr, x, val);
    }
}
int query1(node1 *node, int tl, int tr, int l, int r)
{
    if(tr<l || r<tl)
        return LONG_MAX;
    if(l<=tl && tr<=r)
        return node->val;
    int mid = (tl+tr)/2;
    int res = LONG_MAX;
    if(node->lc!=NULL)
        res = min(res, query1(node->lc, tl, mid, l, r));
    if(node->rc!=NULL)
        res = min(res, query1(node->rc,  mid+1, tr, l, r));
    return res;
}
void update2(int y, int x, int val)
{
    int i, j;
    y = comp.size()-y+1;
    for(int i=y; i<=comp.size(); i+=(i&-i))
        update1(tree[i], 1, comp.size(), x, val);
}
int query2(int y, int x)
{
    int res = LONG_MAX;
    y = comp.size()-y+1;
    for(int i=y; i>0; i-=(i&-i))
        res = min(res, query1(tree[i], 1, comp.size(), 1, x));
    return res;
}
int p[N], q[N];
int main()
{
    int n;
    cin >> n;
    for(int i=1; i<=n; i++)
    {
        int a, b, c, d;
        scanf("%d %d %d %d", &a, &b, &c, &d);
        prothom[i] = {a, b, i};
        shesh[i] = {c, d, i};
        comp.push_back(a);
        comp.push_back(b);
        comp.push_back(c);
        comp.push_back(d);
    }
    sort(comp.begin(), comp.end());
    comp.erase(unique(comp.begin(), comp.end()), comp.end());
    for(int i=1; i<=n; i++)
    {
        prothom[i].s = lower_bound(comp.begin(), comp.end(), prothom[i].s) - comp.begin()+1;
        prothom[i].e = lower_bound(comp.begin(), comp.end(), prothom[i].e) - comp.begin()+1;
        shesh[i].s = lower_bound(comp.begin(), comp.end(), shesh[i].s) - comp.begin()+1;
        shesh[i].e = lower_bound(comp.begin(), comp.end(), shesh[i].e) - comp.begin()+1;
    }
    vector <int> loop = {1, 2};
    for(auto it:loop)
    {
    for(int i=1; i<=comp.size(); i++)
        tree[i] = new node1();
    sort(prothom+1, prothom+n+1);
    for(int i=1; i<=n; i++)
        p[prothom[i].p] = i;
    for(int i=1; i<=n; i++)
        prothom[i].p = p[prothom[i].p];
    for(int i=1; i<=n; i++)
        shesh[i].p = p[shesh[i].p];
    for(int i=1; i<=n; i++)
        q[i] = prothom[i].e;
    sort(shesh+1, shesh+n+1, [&] (point p1, point p2){return p1.p<p2.p;});
    for(int i=1; i<=n; i++)
    {
        int nx = query2(shesh[i].s, shesh[i].e);
        int ny = upper_bound(q+1, q+n+1, prothom[i].s-1)-q-1;
        if(nx<=ny)
        {
            cout << "NO" << endl;
            return 0;
        }
        update2(shesh[i].e, shesh[i].s, i);
    }
    swap(prothom, shesh);
    }
    cout << "YES" << endl;
    return 0;

}
