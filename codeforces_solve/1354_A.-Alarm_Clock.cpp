#include <bits/stdc++.h>
using namespace std;

void solution(){
    long long a, b, c, d, r, s, n, total;
    cin >> a >> b >> c >> d;
    total = b;

    if(a>b){
        if (c < d) {total = -1}
        else{
            r = a-b;
            s = c-d;

            if (r%s == 0) n = r/s;
            else n = r/s + 1;

            total = total + (n * c);
        }


    }

    cout << total << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << fixed << setprecision(2);

    int test_cases;
    cin >> test_cases;
    while(test_cases--){
        solution();
    }

    return 0;
}
