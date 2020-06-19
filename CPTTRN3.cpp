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
    tt{
        int a,b,i,j;
        cin>>a>>b;
        for(i=1;i<=3*a+1;i++){
            for(j=1;j<=3*b+1;j++){
                if((i-1)%3==0) 
                    cout<<"*";
                else{
                    if((j-1)%3==0)
                        cout<<"*";
                    else
                        cout<<".";
                }
            }
            cout<<endl;
        }
        cout<<endl;
    }
    return 0;
}
