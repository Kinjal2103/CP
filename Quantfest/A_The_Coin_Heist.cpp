#include<bits/stdc++.h>
using namespace std;

const long long MOD = 998244353;
long long modpow(long long a, long long b) {
    long long res = 1; a %= MOD;
    while (b > 0) {
        if (b & 1) res = (res * a) % MOD;
        a = (a * a) % MOD;
        b >>= 1;
    }
    return res;
}
long long modinv(long long q) { return modpow(q, MOD - 2); }
// long long ans = (p * modinv(q)) % MOD;

int main(){
    cout<<(1*modinv(2)%MOD);
}