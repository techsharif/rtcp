#include <bits/stdc++.h>
using namespace std;

void solution(){

    long long n;
    cin >> n;
    long long sum = 0;
//    for (long long i=1; i<=n/2; i++){
//        sum += (i*i*8);
//    }

    n = n/2;

    cout << (n * (n+1) * (2*n + 1) * 8 ) / 6 << "\n";

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
