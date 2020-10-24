#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << fixed << setprecision(2);


    int total_seconds;

    cin >> total_seconds;

    int t_minutes, hours, minutes, seconds;

    t_minutes = total_seconds / 60;
    seconds = total_seconds % 60;

    minutes = t_minutes % 60;
    hours = t_minutes / 60;

    cout << hours <<":" << minutes << ":" << seconds << "\n";

    return 0;
}
