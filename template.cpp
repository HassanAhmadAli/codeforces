#pragma ide diagnostic ignored "misc-no-recursion"
#pragma ide diagnostic ignored "modernize-use-nodiscard"
#pragma ide diagnostic ignored "OCUnusedTypeAliasInspection"
#pragma clang diagnostic ignored "-Wmacro-redefined"
#pragma ide diagnostic ignored "bugprone-reserved-identifier"
#pragma ide diagnostic ignored "OCUnusedGlobalDeclarationInspection"
#pragma ide diagnostic ignored "readability-static-accessed-through-instance"
#pragma clang diagnostic ignored "-Wshadow"
#pragma ide diagnostic ignored "google-explicit-constructor"
#pragma ide diagnostic ignored "modernize-return-braced-init-list"
#pragma ide diagnostic ignored "bugprone-macro-parentheses"
#pragma ide diagnostic ignored "OCUnusedMacroInspection"
#pragma ide diagnostic ignored "bugprone-reserved-identifier"
#pragma GCC optimize("Ofast")

#include <bits/stdc++.h>

using namespace std;

#define endl "\n"
#define in std::cin >>
#define out std::cout <<
#define print(x) std::cout << (x)
#define printl(x) std::cout << (x) << "\n"
#define var auto
#define ll long long
#define d double
#define ld long double
#define for0(i, n) for(int i=0;i<n;++i)
#define for1(i, n) for(int i=1;i<=n;++i)

#define fi first
#define se second
#define all(obj) begin(obj), end(obj)
#define _max(x) *max_element(ALL(x))
#define _min(x) *min_element(ALL(x))
#define _sum(x) accumulate(ALL(x), 0LL)
#define fori(i, a) for (auto &i: a)
const var INF = (int) (1e13 + 7);
const double PI = M_PI;
template<class T> using V = vector<T>;
template<class T> using VV = vector<vector<T>>;
template<class T> using VVV = vector<vector<vector<T>>>;
template<class T, class S> using P = pair<T, S>;
const double eps = 1e-8;
constexpr int MOD = 998244353;

template<class T>
bool chmax(T &a, const T &b) {
    if (a < b) {
        a = b;
        return true;
    }
    return false;


}

template<class T>
bool chmin(T &a, const T &b) {
    if (b < a) {
        a = b;
        return true;
    }
    return false;
}

int _ceil(int a, int b) { return (a >= 0 ? (a + (b - 1)) / b : (a - (b - 1)) / b); }

int _mod(int a) { return a >= 0 ? a % MOD : a - (MOD * _ceil(a, MOD)); }

int _pow(int a, int b) {
    int res = 1;
    for (a %= MOD; b; a = a * a % MOD, b >>= 1)if (b & 1) res = res * a % MOD;
    return res;
}


int repeatcount = 1;


void solve(istream &cin, ostream &cout) {
    for0(i, 26) cout << "cp ./template.cpp ./"<<(char)('A' + i) << ".cpp"<< endl;

}


signed main() {
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios::sync_with_stdio(false);

    solve(cin, cout);
    return 0;
}/*



 */