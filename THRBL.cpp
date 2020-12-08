// Author :: <Hitesh_Saini>
#include<bits/stdc++.h>

#define __speed() ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define dbg(x) cout << "--- " << #x << " = " << x << " ---\n";
#define findmax(v) *max_element(v.begin(), v.end())
#define _sum(a) accumulate(a.begin(), a.end(), 0)
#define tt int t;for(cin>>t; t--; )
#define f0(i, n) for(i = 0; i < int(n); i++)
#define f1(i, n) for(i = 1; i<= int(n); i++)
#define cmax(a, b) a= max(a, b)
#define cmin(a, b) a= min(a, b)
#define all(x) x.begin(), x.end()
#define EB emplace_back
#define PB push_back
#define F first
#define S second
#define int ll
#define endl "\n"

using namespace std;
// using mii = map<int, int>;
using ll = long long;
using vi = vector<int>;
using vl = vector<ll>;
const int mod = 1e9+7,mxN = 2e5+5;


int st[mxN][20]={};
void solve(){
	int K=20, N, i, q, L, R;
	cin >> N >> q;
	vi array(N);
	f0(i, N)
		cin >> array[i];
	int log[mxN+1];
	log[1] = 0;
	for (int i = 2; i < mxN; i++)
	    log[i] = log[i/2] + 1;

	for (int i = 0; i < N; i++)
    st[i][0] = array[i];

	for (int j = 1; j <= K; j++)
	    for (int i = 0; i + (1 << j) <= N; i++)
	        st[i][j] = max(st[i][j-1], st[i + (1 << (j - 1))][j - 1]);

	int ans=0;
	f1(i, q){
		cin >> L >> R, L--, R--;
		if(abs(R-L)==1|| R==L)
			ans++;
		else if(R<L){
			swap(L, R);
			L++, R--;
			int j = log[R - L + 1];
			int mx = max(st[L][j], st[R - (1 << j) + 1][j]);
			if(mx<=array[R+1])
				ans++;	
		}
		else{
				L++, R--;
			int j = log[R - L + 1];
			int mx = max(st[L][j], st[R - (1 << j) + 1][j]);
			if(mx<=array[L-1])
				ans++;
		}
	}
	cout << ans;
}

signed main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin); 
		freopen("output.txt", "w", stdout);
	#endif

    __speed();
    solve();
    return 0;
}
