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
    int t,n,c,i;
    cin>>t;
    while(t--){
        cin>>n>>c;
        int A[n];
        for(i=0;i<n;i++)
            cin>>A[i];
        sort(A,A+n);
        int lb=1,rb=A[n-1],mid,ans=0;
        while(lb<=rb){
            mid=lb+(rb-lb)/2;
            int total=1,prev=0;
            for(i=1;i<n;i++)
                if(A[i]-A[prev]>=mid)
                    total++,prev=i;
            if(total>=c)
            lb=mid+1,ans=mid;
            else
                rb=mid-1;
        }
         cout<<ans<<endl;     
    }
    return 0;
}
