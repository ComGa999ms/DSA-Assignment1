#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define int long long
#define rep(i, l, r) for (int i = l; i <= r; ++i)
#define repd(i, r, l) for (int i = r; i >= l; --i)
#define _unique(x) (x).resize(unique((x).begin(), (x).end()) - (x).begin());
#define sz(v) (int)(v).size()
#define fi first
#define se second
#define pii pair<int,int>
#define p2i pair<int,pii>
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

const int BaseScore = 40;
const int Bonus_Excess = 3;
const int Bonus_Upper = 4;
const int Bonus_Number = 5;
const int Bonus_Symbols = 5;
const int Bonus_Combo_3 = 25;
const int Bonus_Combo_2 = 15;
const int Bonus_FlatLower = -15;
const int Bonus_FlatNumber = -35;

const string special_chars = "!@#$%^&*?_~";
const char invalid_chars[] = {'.' , '\\' , '/' , ' ' , ','};

string s;

bool check_valid(string s) {
    if (sz(s) < 8) return 0;

    for (char c : s) for (char c_invalid : invalid_chars) {
        if (c == c_invalid) return 0;
    }
    return 1;
}

int myabs(int x) {
    return (x > 0 ? x : -x);
}

void solve(void) {
    cin >> s;
    if (!check_valid(s)) {
        cout << "KhongHopLe" << endl;
        return ;
    }

    int upper = 0, num = 0, sym = 0, excess = myabs(sz(s) - 8);
    bool hasLower = 0, hasUpper = 0, hasNum = 0, hasSym = 0;

    for (char c : s) {
        if (c >= 'A' && c <= 'Z') upper++, hasUpper = 1;
        if (c >= 'a' && c <= 'z') hasLower = 1;
        if (c >= '0' && c <= '9') num++, hasNum = 1;
    }

    // cout << num << endl;

    for (char c : s) for (char c_spec : special_chars) {
        if (c == c_spec) {
            sym++,
            hasSym = 1;
            break;
        }
    }

    int score = BaseScore + excess * Bonus_Excess + upper * Bonus_Upper + num * Bonus_Number + sym * Bonus_Symbols;

    if (hasUpper && hasNum && hasSym) score += Bonus_Combo_3;
    else if ((hasUpper && hasNum) || (hasUpper && hasSym) || (hasNum && hasSym)) score += Bonus_Combo_2;

    if (hasLower && !hasUpper && !hasNum && !hasSym) score += Bonus_FlatLower;
    if (!hasLower && !hasUpper && hasNum && !hasSym) score += Bonus_FlatNumber;

    if (score < 50) {
        cout << "Yeu";
    } else if (50 <= score && score < 75) {
        cout << "Vua";
    } else if (75 <= score && score < 100) {
        cout << "Manh";
    } else if (score >= 100) cout << "RatManh";
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
