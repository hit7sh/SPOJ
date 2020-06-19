// Author :: <Hitesh_Saini>
#include<bits/stdc++.h>

#define speed() ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define foreachrev(i,t) for(typeof(t.rbegin()) i = t.rbegin(); i!=t.rend(); i++)
#define foreach(i,t) for(typeof(t.begin()) i = t.begin(); i!=t.end(); i++)
#define fo(i, start, end)  for(i = start; i <= end; i++)
#define fro(i, start, end) for(i = start; i >= end; i--)
#define debug(x) cout<<#x<<" is "<<x<<endl
#define f0(i, n) for(i = 0; i < n; i++)
#define f1(i, n) for(i = 1; i<= n; i++)
#define tt int tcs;for(cin>>tcs;tcs--;)
#define eb(n) emplace_back(n)
#define pf(n) push_front(n)
#define pb(n) push_back(n)
#define endl "\n"

using namespace std;
using umii = unordered_map<int, int>;
using mii = map<int, int>;
using ll = long long;
using vi = vector<int>;
using vl = vector<ll>;
const int mod=1e9+7;

int main(){
    speed();
    ll A[]={0,2,4,11,36,147,778,5161,40568,363383,3629814,39918837,479005684,6227028979,87178307570};
    int x;
    cin>>x;
    cout<<A[x];
    return 0;
}
