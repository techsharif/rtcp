#include <bits/stdc++.h>
using namespace std;

int main()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);

     long long a, b, c, d;
     cin >> a >> b >> c >> d;

     long long start = max(a+b , c);
     long long end = b+c;
     long long sum = 0;
     for(long long i = start; i<=end; i++){
        long long n;

        n = min(
            {
                b - a + 1,
                c - b + 1,
                i - a - b + 1,
                b + c -i +1
            }
        );

        long long p = min (i-c, d - c + 1 );

        sum += (n*p);

     }

     cout << sum << "\n";


    return 0;
}
