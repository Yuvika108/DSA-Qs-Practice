class Solution {
public:
  const long long MOD = 1e9 + 7;

  long long power(long long base, long long expo) {
    long long result = 1;
    base %= MOD;
    while (expo > 0) {
      if (expo % 2 == 1) {
        result = (base * result) % MOD;
      }
      base = (base * base) % MOD;
      expo /= 2;
    }

    return result;
  }

  int countGoodNumbers(long long n) {
    // prime no = 2, 3, 5 & 7
    // n=length of the string

    long long n_e = (n + 1) / 2;
    long long n_o = n / 2;

    long long ans1 = power(5, n_e);
    long long ans2 = power(4, n_o);

    long long ans = (ans1 * ans2) % MOD;

    return ans;
  }
};