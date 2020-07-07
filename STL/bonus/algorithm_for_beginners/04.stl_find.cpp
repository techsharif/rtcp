#include<bits/stdc++.h>
using namespace std;

int main()
{


    int arr[5] = {5, 6, 7, 2, 1};
    cout << find(arr, arr+5, 7) - arr << "\n"; /// success
    cout << find(arr, arr+5, 9) - arr << "\n"; /// fail


    return 0;
}
