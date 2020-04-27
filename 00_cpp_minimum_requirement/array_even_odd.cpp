#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num[1000];
    int n;
    cin >>n;

    for (int i=0; i<n; i++){
        cin >> num[i];
    }

    cout << "Even" << endl;
    for (int i=0; i<n; i++){
        if (num[i] % 2 == 0){
            cout << num[i];
        }
    }

    cout << endl;
    cout << "Odd" << endl;
    for (int i=0; i<n; i++){
        if (num[i] % 2 != 0){
            cout << num[i];
        }
    }



    return 0;
}
