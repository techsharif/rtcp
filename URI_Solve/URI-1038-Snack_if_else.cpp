#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << fixed << setprecision(2);

    long x,y;
    cin >> x >> y;

    if (x == 1) cout << "Total: R$ " << 4.00 * y << "\n";
    else if (x == 2) cout << "Total: R$ " << 4.50 * y << "\n";
    else if (x == 3) cout << "Total: R$ " << 5.00 * y << "\n";
    else if (x == 4) cout << "Total: R$ " << 2.00 * y << "\n";
    else if (x == 5) cout << "Total: R$ " << 1.50 * y << "\n";

    return 0;
}
