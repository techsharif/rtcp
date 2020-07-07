#include<bits/stdc++.h>
using namespace std;

int main()
{


    int arr[5] = {5, 2, 7, 2, 1};

    cout << "before \n";
    for (int i=0; i<5; i++){
        cout << arr[i] << " ";
    }
    cout << "\n\n";

    sort(arr, arr+5);

    cout << "after \n";
    for (int i=0; i<5; i++){
        cout << arr[i] << " ";
    }
    cout << "\n\n";


    return 0;
}
