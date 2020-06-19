// Author :: <Hitesh_Saini>
#include<bits/stdc++.h>

#define __speed() ios::sync_with_stdio(false), cin.tie(0);
#define tt int t;for(cin>>t;t--;)
#define endl "\n"

using namespace std;

void solve(){
    int n;cin >>n;
    map<string, int>M;
    string st;
    while(n--){
        getline(cin, st);
        while(st.length()==0)
            getline(cin, st);
        M[st]++;
    }
        
    for(auto x:M)
        cout << x.first  << x.second << endl;
    cout <<endl;
}

int main(){
    __speed();
    tt solve();
    return 0;
}
