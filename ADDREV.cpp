// Author :: <Hitesh_Saini>
#include<bits/stdc++.h>

#define speed() ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define foreachrev(i,t) for(typeof(t.rbegin()) i = t.rbegin(); i!=t.rend(); i++)
#define foreach(i,t) for(typeof(t.begin()) i = t.begin(); i!=t.end(); i++)
#define fo(i, start, end)  for(i = start; i <= end; i++)
#define fro(i, start, end) for(i = start; i >= end; i--)
#define findmax(v) *max_element(v.begin(), v.end())
#define _sum(a) accumulate(a.begin(), a.end(), 0)
#define cnt(v, x) count(v.begin(), v.end(), x)
#define _revsort(v) sort(v.rbegin(), v.rend())
#define debug(x) cout<<#x<<" is "<<x<<endl
#define _sort(v) sort(v.begin(), v.end())
#define f0(i, n) for(i = 0; i < n; i++)
#define f1(i, n) for(i = 1; i<= n; i++)
#define tt int tt;for(cin>>tt;tt--;)
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
const int mod = 1e9+7;

void solve(){
    ll a,b,n1=0,n2=0,ans=0;
    cin>>a>>b;
    do n1=n1*10+a%10;
    while(a/=10);
    do n2=n2*10+b%10;
    while(b/=10);
    ll s=n1+n2;
    do ans=ans*10+s%10;
    while(s/=10);
    cout<<ans<<endl;
}

int main(){
    tt solve();
    return 0;
}
