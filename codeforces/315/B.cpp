#include <bits/stdc++.h>
using namespace std;
#define MAX 100005
int tree[3*MAX];
int lazy[3*MAX];
void updateRangeUtil(int si, int ss, int se, int us, int ue, int diff)
{
    if(lazy[si])
    {
        tree[si]+=(se-ss+1)*lazy[si];
        if(ss!=se)
        {
            lazy[si*2+1]+=lazy[si];
            lazy[si*2+2]+=lazy[si];
        }
        lazy[si]=0;
    }
    if(ss>se || ss>ue || se<us)
        return;
    if(ss>=us && se<=ue)
    {
        tree[si]+=(se-ss+1)*diff;
        if(ss!=se)
        {
            lazy[si*2+1]+=diff;
            lazy[si*2+2]+=diff;
        }
        return;
    }
    int mid=(ss+se)/2;
    updateRangeUtil(si*2+1, ss, mid, us, ue, diff);
    updateRangeUtil(si*2+2, mid+1, se, us, ue, diff);
    tree[si]=tree[si*2+1]+tree[si*2+2];
}

void updateRange(int n, int us, int ue, int diff)
{
    updateRangeUtil(0, 0, n, us, ue, diff);
}
void constructSTUtil(int arr[], int ss, int se, int si)
{
    if(ss>se)
        return;
    if(ss==se)
    {
        tree[si]=arr[ss];
        return;
    }
    int mid=(ss+se)/2;
    constructSTUtil(arr, ss, mid, si*2+1);
    constructSTUtil(arr, mid+1, se, si*2+2);
    tree[si]=tree[si*2+1]+tree[si*2+2];
}
void constructST(int arr[], int n)
{
    constructSTUtil(arr, 0, n, 0);
}

int getSumUtil(int ss, int se, int qs, int qe, int si)
{
    if(lazy[si])
    {
        tree[si]+=(se-ss+1)*lazy[si];
        if(ss!=se)
        {
            lazy[si*2+1]+=lazy[si];
            lazy[si*2+2]+=lazy[si];
        }
        lazy[si]=0;
    }
    if(ss>se || ss>qe || se<qs)
    {
        return 0;
    }
    if(ss>=qs && se<=qe)
    {
        return tree[si];
    }
    int mid=(ss+se)/2;
    return getSumUtil(ss, mid, qs, qe, 2*si+1)+getSumUtil(mid+1, se, qs, qe, 2*si+2);
}
int getSum(int n, int qs, int qe)
{
    return getSumUtil(0, n, qs, qe, 0);
}

int main()
{
    int n, m;
    cin >> n >> m;
    int arr[n+1];
    for(int i=1; i<=n; i++)
        cin >> arr[i];
    constructST(arr, n);
    for(int i=0; i<m; i++)
    {
        int q;
        cin >> q;
        if(q==1)
        {
            int x, y;
            cin >> x >> y;
            int res=getSum(n, x, x);
            updateRange(n, x, x, y-res);
        }
        else if(q==2)
        {
            int x;
            cin >> x;
            updateRange(n, 0, n, x);
        }
        else
        {
            int x;
            cin >> x;
            cout << getSum(n, x, x) << endl;
        }
    }
    return 0;
}
