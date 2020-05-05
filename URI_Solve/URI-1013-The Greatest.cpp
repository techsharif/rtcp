#include <bits/stdc++.h>
using namespace std;

int main()
{
    // uncomment if you want to use cin cout for input output ( don't mix with scanf, printf ).
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     cout << fixed << setprecision(3);

     long long a, b, c, mab, m;

     cin >> a >> b >> c;
     mab = (a + b + abs(a-b)) / 2;
     m = (mab + c + abs(mab-c)) / 2;

     cout << m << "eh o maior" << "\n";

    return 0;
}
