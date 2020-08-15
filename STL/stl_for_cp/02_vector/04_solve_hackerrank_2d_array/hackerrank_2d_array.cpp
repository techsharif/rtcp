#include <bits/stdc++.h>
using namespace std;

vector< vector<int> > input(){
    vector< vector<int> > arr;

    for(int i=0; i<6; i++){
        vector<int> row;

        for(int i=0; i<6; i++){
            int d;
            cin >> d;
            row.push_back(d);
        }
        arr.push_back(row);
    }

    return arr;
}


int solve(vector< vector<int> > arr){
    int mx = -1000000;

    for(int x=0; x<=3; x++){
        for(int y=0; y<=3; y++){
            int sum = arr[x][y] + arr[x][y+1] + arr[x][y+2]
                                + arr[x+1][y+1]
                    + arr[x+2][y] + arr[x+2][y+1] + arr[x+2][y+2];

            mx = max(sum, mx);
        }
    }

    return mx;
}

int main()
{
    vector< vector<int> > arr = input();

    cout << solve(arr) << "\n";

    return 0;
}
