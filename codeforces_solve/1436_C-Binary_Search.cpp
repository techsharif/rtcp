/// Codeforces Round #678 (Div. 2)
/// C. Binary Search
/// https://codeforces.com/problemset/problem/1436/C

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, x, pos;
    cin >> n >> x >> pos;

    long long MOD = 1e9 + 7;
    long long result = 1;

    int left = 0, right = n, counts =0, countb = 0;

    while(left < right){
        int mid = (left + right) / 2;

        if (mid == pos){
            left = mid + 1;
        }else if (mid > pos){
            countb++;
            right = mid;
        }else{
            counts++;
            left = mid + 1;
        }
    }

    for (int i=0; i<counts; i++){
        long long val = x-1-i;
        result *= val;
        result %= MOD;
    }

    for (int i=0; i<countb; i++){
        long long val = n-x-i;
        result *= val;
        result %= MOD;
    }

    long long dc = n - counts - countb - 1;

    for (int i=2; i<=dc; i++){
        result *= i;
        result %= MOD;
    }

    cout << result;


    return 0;
}








