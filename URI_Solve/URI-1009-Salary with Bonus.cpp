#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // char name[1000];
    string name1;

    /// scanf("%s", name);
    /// cin >> name1;

    getline(cin, name1);

    double s, t;
    /// scanf("%lf%lf", &s, &t);
    cin >> s >> t;

    /// printf("TOTAL = R$ %.2lf\n", s + t*.15);
    cout << "TOTAL = R$ "<< fixed << setprecision(2) << s + t*.15 << "\n";

    return 0;
}
