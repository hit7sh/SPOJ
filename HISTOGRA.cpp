// Author :: <Hitesh_Saini>
#include<bits/stdc++.h>

#define speed() ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define foreachrev(i,t) for(typeof(t.begin()) i = t.rbegin(); i!=t.rend(); i++)
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
typedef struct pair<int, int> edge;
const int N = 100001;

int f[N], c[N], h[N], n;
int find(int x) { return f[x] == x ? x : (f[x] = find(f[x])); }
void merge(int a, int b) {
	a = find(a); b = find(b);
	if (a != b) {
		f[a] = b;
		c[b] += c[a];
	}
}

priority_queue<edge> pq;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	while (cin >> n, n) {
		long long area = 0;
		pq = priority_queue<edge>();
		for (int i = 0; i < n; ++i) {
			cin >> h[i];
			f[i] = i;
			c[i] = 1;
			pq.push(edge(h[i], i));
			area = max(area, (long long) h[i]);
		}
		while (!pq.empty()) {
			edge e = pq.top(); pq.pop();
			int x = find(e.second);
			if (e.second > 0 && h[e.second - 1] >= e.first) {
				merge(e.second, e.second - 1);
			}
			if (e.second + 1 < n && h[e.second + 1] >= e.first) {
				merge(e.second, e.second + 1);
			}
			area = max(area, e.first * (long long) c[find(e.second)]);
		}
		cout << area << '\n';
	}
	cout << flush;
}
