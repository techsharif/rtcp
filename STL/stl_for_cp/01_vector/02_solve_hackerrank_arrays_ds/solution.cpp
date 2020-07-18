/**

Author: Md. Sharif Chowdhury
Youtube: youtube.com/shariftech
Website: techsharif.com
Problem: https://www.hackerrank.com/challenges/arrays-ds/problem

*/

#include <bits/stdc++.h>
using namespace std;

/// input() // 1 4 3 2
/// reverse // 2 3 4 1
/// output // print

vector<int> input(){
    vector<int> data;
    int n;
    cin >> n;
    while(n--){
        int d;
        cin >> d;
        data.push_back(d);
    }

    return data;
}

/// sol 1
//vector<int> reverse(vector<int> data){
//    int ln = data.size();
//    vector<int> rData;
//
//    for(int i=ln-1; i>=0; i--){
//        rData.push_back(data[i]);
//    }
//    return rData;
//}

vector<int> reverse(vector<int> data){
    vector<int> rData;

    while (!data.empty()){
        rData.push_back(data.back());
        data.pop_back();
    }

    return rData;
}

void output(vector<int> rData){
    for (int d:rData){
        cout << d << " ";
    }
    cout << "\n";
}

int main()
{
    vector<int> data;
    data = input();
    data = reverse(data);
    output(data);

    return 0;
}
