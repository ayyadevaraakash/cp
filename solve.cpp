#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

// clang-format off
// *INDENT-OFF*

/* ---------- pbds ordered set ---------- */
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds; typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;

/* ---------- overflow and data types ---------- */
// #define ll long long
// #define MOD 1'000'000'007
// #define int long long

/* ---------- binpow ---------- */
// int binpow(int a, int b) { if (b == 0) { return 1; } if (b & 1) { return (1LL * a * binpow(a, b - 1)) % MOD; } else { return binpow((1LL * a * a) % MOD, b / 2) % MOD; }}

/* ---------- binpow without MOD ---------- */
// long long binpow(long long a, long long b) { if (b == 0) { return 1; } if (b & 1) { return (a * binpow(a, b - 1)); } else { return binpow((a * a), b / 2); }}

/* ---------- modular multiplicative inverse ---------- */
// int inverse(int x) { return binpow(x, MOD - 2);}

/* ---------- basic computation ---------- */
// int ceil2(int a, int b) { return a ? ( (a - 1) / b + 1 ) : 0; }

// *INDENT-ON*
// clang-format on

void solve() {
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    // clang-format off
    // int _t; cin >> _t; while (_t--)
    solve();
    // clang-format on

    return 0;
}