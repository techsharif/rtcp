#include<bits/stdc++.h>
using namespace std;

int main()
{


    int arr[5] = {5, 2, 7, 2, 1};
    cout << count(arr, arr+5, 2) << "\n"; /// success
    cout << count(arr, arr+5, 1) << "\n"; /// success
    cout << count(arr, arr+5, 9) << "\n"; /// fail


    return 0;
}
