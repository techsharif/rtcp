#include<bits/stdc++.h>
using namespace std;

int main()
{


    int arr[5] = {1, 2, 3, 6, 8,};
    cout << binary_search(arr, arr+5, 3)<< "\n"; /// success
    cout << binary_search(arr, arr+5, 9)<< "\n"; /// fail


    return 0;
}
