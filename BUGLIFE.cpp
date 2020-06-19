// Author :: <Hitesh_Saini>
#include<bits/stdc++.h>

#define __speed() ios::sync_with_stdio(false), cin.tie(0);
#define debug(x) cout<<"--- "<<#x<<" = "<<x<<" ---\n";
#define findmax(v) *max_element(v.begin(), v.end())
#define _sum(a) accumulate(a.begin(), a.end(), 0)
//#define tt int t;for(cin>>t;t--;)
#define f0(i, n) for(i = 0; i < n; i++)
#define f1(i, n) for(i = 1; i<= n; i++)
#define all(x) x.begin(),x.end()
#define EB emplace_back
#define PF push_front
#define PB push_back
#define endl "\n"

using namespace std;
using mii = map<int, int>;
using ll = long long;
using vi = vector<int>;
using vl = vector<ll>;
const int mod = 1e9+7,mxN = 1e5+5;
vector<int>color(2001);
vector<bool>visited(2001);

bool bipartite(vector<int> adj[], int v)
{ 
    queue<int>q;
    q.push(v);
    color[v]=2;
    visited[v]=true;
    while(!q.empty()){
        int cur = q.front();q.pop();
        for(int nbr:adj[cur]){
            if(!visited[nbr])
                color[nbr] = color[cur]^1, visited[nbr] = true, q.push(nbr);
            else if(color[nbr] == color[cur])
                return false;
        }
    }
    return true; 
} 
bool check(vi adj[], int ver){
    for(int i=1;i<=ver;i++)
        if(!visited[i])
            if(!bipartite(adj, i))
                return false;
    return true;
}
int main(){
    int tt,u,v,ver,edg,x=1;
    
    for(cin>>tt;x<=tt;x++){
        cin >> ver >> edg;
        vector<int>adj[ver+1];
        for(int i=0;i<edg;++i){
            cin >> u >> v;
            adj[u].emplace_back(v);
            adj[v].emplace_back(u);
        }
        for(int i = 1; i<=2000; ++i)
            visited[i] = false, color[i] = 0;
        if(check(adj, ver))
            cout << "Scenario #" << x << ":\n" << "No suspicious bugs found!\n";
        else
            cout << "Scenario #" << x << ":\n" << "Suspicious bugs found!\n";
    }
    return 0;
}
