#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define int long long
#define rep(i, l, r) for (int i = l; i <= r; ++i)
#define repd(i, r, l) for (int i = r; i >= l; --i)
#define _unique(x) (x).resize(unique((x).begin(), (x).end()) - (x).begin());
#define sz(v) (int)(v).size()
#define fi first
#define se second
#define pii pair <int, int>
#define vii vector <int>
#define endl '\n'

using namespace std;

const int N = 1e6 + 5;
const int M = 2e3 + 5;
const int mod = 1e9 + 7;
const int inf = 1e18 + 7;
const bool ComGa999ms = false;

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
int rnd(int l, int r) {
    return l+rng()%(r-l+1);
}

int maximize(int &a, int b) {
    if (a < b) {
        a = b;
        return 1;
    }
    return 0;
}

int minimize(int &a, int b) {
    if (a > b) {
        a = b;
        return 1;
    }
    return 0;
}

int n, m;
vector <vii> f;

bool inside(int x, int y) {
    return (x >= 1 && x <= n && y >= 1 && y <= m);
}

int get(int x,int y,int u,int v){
    return f[u][v] - f[u][y - 1] - f[x - 1][v] + f[x - 1][y - 1];
}

void solve(void) {
    cin >> n >> m;

    f = vector <vii> (n + 2, vii (m + 2, 0));
    rep(i, 1, n) rep(j, 1, m) {
        int x; cin >> x;
        f[i][j] = f[i - 1][j] + f[i][j - 1] - f[i - 1][j - 1] + x;
    }

    int res = get(1, 1, 3, 3);
    rep(i, 1, n) rep(j, 1, m) {
        int u = i + 3 - 1, v = j + 3 - 1;
        if (inside(u, v)) minimize(res, get(i, j, u, v));
    }

    cout << res;
}

signed main()
{
    #define task "gen"
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    // freopen(task".inp", "r", stdin);
    // freopen(task".out", "w", stdout);

    if (ComGa999ms) {
        int t; cin >> t;
        while (t-- ) solve();
    } else solve();

    return 0;
}
