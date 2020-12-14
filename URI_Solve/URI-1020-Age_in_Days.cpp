#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // cout << fixed << setprecision(2);

    long days;
    cin >> days;

    long year = days / 356;
    long temp = days % 365;

    long month = temp / 30;
    long day = temp % 30;

    cout << year << " ano(s)\n";
    cout << month << " mes(es)\n";
    cout << day << " dia(s)\n";


    return 0;

}
