#include <vector>
#include <tuple>
#include <climits>
#include <algorithm>

using namespace std;

long long pow_mod(long long base, long long exp, int mod) {
    long long res = 1 % mod;
    base %= mod;
    while (exp > 0) {
        if (exp & 1) res = (res * base) % mod;
        base = (base * base) % mod;
        exp >>= 1;
    }
    return res;
}

long long mod_inv(long long a, int m) {
    long long m0 = m, t, q;
    long long x0 = 0, x1 = 1;
    if (m == 1) return 0;
    while (a > 1) {
        q = a / m;
        t = m;
        m = a % m;
        a = t;
        t = x0;
        x0 = x1 - q * x0;
        x1 = t;
    }
    if (x1 < 0) x1 += m0;
    return x1;
}

vector<int> precompute_f(int p, int pe) {
    vector<int> f(pe);
    f[0] = 1;
    for (int i = 1; i < pe; ++i) {
        if (i % p != 0)
            f[i] = (1LL * f[i-1] * i) % pe;
        else
            f[i] = f[i-1];
    }
    return f;
}

long long fact_mod_free(long long n, int p, int pe, const vector<int>& f) {
    if (n == 0) return 1;
    long long res = pow_mod(f[pe-1], n / pe, pe);
    res = (res * f[n % pe]) % pe;
    res = (res * fact_mod_free(n / p, p, pe, f)) % pe;
    return res;
}

long long vp_in_factorial(long long n, int p) {
    long long vp = 0;
    long long x = n;
    while (x > 0) {
        x /= p;
        vp += x;
    }
    return vp;
}

int last_digit(long long n, int b) {
    if (n == 0) return 1;

    vector<tuple<int, int, int>> factors;
    int temp = b;
    for (int d = 2; d * d <= temp; ++d) {
        if (temp % d == 0) {
            int e = 0;
            int pe = 1;
            while (temp % d == 0) {
                temp /= d;
                ++e;
                pe *= d;
            }
            factors.emplace_back(d, e, pe);
        }
    }
    if (temp > 1) {
        factors.emplace_back(temp, 1, temp);
    }

    vector<long long> vps;
    long long Z = LLONG_MAX;
    for (const auto& [p, e, pe] : factors) {
        long long vp = vp_in_factorial(n, p);
        vps.push_back(vp);
        Z = min(Z, vp / e);
    }

    vector<int> moduli, remainders;
    for (size_t idx = 0; idx < factors.size(); ++idx) {
        int p = get<0>(factors[idx]);
        int e = get<1>(factors[idx]);
        int pe = get<2>(factors[idx]);
        long long vp = vps[idx];

        vector<int> f = precompute_f(p, pe);
        long long A = fact_mod_free(n, p, pe, f);

        long long diff = vp - e * Z;
        long long Mi;
        if (diff >= e) {
            Mi = 0;
        } else {
            long long other = b / pe;
            long long other_pow = pow_mod(other, Z, pe);
            long long inv = mod_inv(other_pow, pe);
            Mi = (A * pow_mod(p, diff, pe)) % pe;
            Mi = (Mi * inv) % pe;
        }
        moduli.push_back(pe);
        remainders.push_back((int)Mi);
    }

    long long M = 1;
    for (int m : moduli) M *= m;
    long long res = 0;
    for (size_t i = 0; i < moduli.size(); ++i) {
        long long mi = moduli[i];
        long long Mi = M / mi;
        long long inv = mod_inv(Mi % mi, mi);
        res = (res + remainders[i] * Mi % M * inv) % M;
    }
    return (int)res;
}
