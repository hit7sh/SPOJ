// Author :: <Hitesh_Saini>
#include<bits/stdc++.h>
 
#define __speed() ios_base::sync_with_stdio(false), cin.tie(nullptr);

#define tt 	int t; for (cin >> t; t--; )
 
#define f0(i, n)  for (i = 0; i < (int)(n); i++)

#define sz(x) (int)(x.size())

 
#define endl "\n"
#define S second
#define F first
 
 
 
using namespace std;
using mii = map<int, int>;
using pii = pair<int, int>;
 
using ll = int64_t;
using vi = vector<int>;
 
using vvi = vector<vi>;

template <typename T> istream& operator>>(istream& in, vector<T>& v) { for (T& x:v) in >> x; return in; }


int n, m;
vector<string> s;
bool possible(int x, int y) {
	return x>=0 && y>=0 && x<n && y<m && s[x][y] == '.';
}
 
void solve() {
	cin >> m >> n;
	s.resize(n);
	vector<string> temp;
	cin >> s;
	temp = s;

	int i, j;

	pii st;
	f0(i, n)
		f0(j, m)
			if (s[i][j] == '.') {
				st = {i, j};
				break;
			}
      
	queue<pii> q;
	q.push(st);
	vvi vis(n, vi(m));
	vis[st.F][st.S] = 0;

	while (sz(q)) {
		auto [x, y] = q.front(); q.pop();
		s[x][y] = '#';
		if (possible(x-1, y))
			q.push({x-1, y}), s[x-1][y] = '#', vis[x-1][y] = vis[x][y] + 1;
		if (possible(x, y-1))
			q.push({x, y-1}), s[x][y-1] = '#', vis[x][y-1] = vis[x][y] + 1;
		if (possible(x+1, y))
			q.push({x+1, y}), s[x+1][y] = '#', vis[x+1][y] = vis[x][y] + 1;
		if (possible(x, y+1))
			q.push({x, y+1}), s[x][y+1] = '#', vis[x][y+1] = vis[x][y] + 1;
	}
	s = temp;

	int mxd = 0;
	f0(i, n)
		f0(j, m)
			if (vis[i][j] > mxd)
				mxd = vis[i][j], st = {i, j};
	
	q.push(st);
	vvi dst(n, vi(m));
	dst[st.F][st.S] = 0;

	while (sz(q)) {
		auto [x, y] = q.front(); q.pop();
		s[x][y] = '#';
		if (possible(x-1, y))
			q.push({x-1, y}), s[x-1][y] = '#', dst[x-1][y] = dst[x][y] + 1;
		if (possible(x, y-1))
			q.push({x, y-1}), s[x][y-1] = '#', dst[x][y-1] = dst[x][y] + 1;
		if (possible(x+1, y))
			q.push({x+1, y}), s[x+1][y] = '#', dst[x+1][y] = dst[x][y] + 1;
		if (possible(x, y+1))
			q.push({x, y+1}), s[x][y+1] = '#', dst[x][y+1] = dst[x][y] + 1;
	}

	int ans = 0;

	f0(i, n)
		f0(j, m)
			ans = max(ans, dst[i][j]);

	cout << ("Maximum rope length is ") <<  ans << "." << endl;
}	

 
int main() {
    __speed() tt solve();
 	
    return 0;
}
 
