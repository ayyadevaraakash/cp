/* ---------- binpow ---------- */
int binpow(int a, int b) {
    if (b == 0) {
        return 1;
    }
    if (b & 1) {
        return (1LL * a * binpow(a, b - 1)) % MOD;
    } else {
        return binpow((1LL * a * a) % MOD, b / 2) % MOD;
    }
}

long long binpow(long long a, long long b) {
    if (b == 0) {
        return 1;
    }
    if (b & 1LL) {
        return (a * binpow(a, b - 1));
    } else {
        return binpow((a * a), b / 2);
    }
}

/* ---------- inverse ---------- */
int inverse(int x) {
    return binpow(x, MOD - 2);
}

/* ---------- ceil ---------- */

int ceil2(int a, int b) {
    return a ? (a + b - 1) / b : 0;
}

long long ceil2(long long a, long long b) {
    return a ? (a + b - 1) / b : 0;
}

/* ---------- pbds ordered set ---------- */
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
