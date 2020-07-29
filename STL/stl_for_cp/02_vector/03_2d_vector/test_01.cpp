
#include<bits/stdc++.h>
using namespace std;


void print(vector<vector<int>> data, string text=""){
    cout << text << "\n";

    cout << "Total Row: " << data.size() << "\n";
    for (vector<int> row:data){
        cout << "\t[" << row.size() << "] -> ";
        for (int column:row)
            cout << column << " ";
        cout << "\n";
    }
    cout << "\n";
}

int main()
{
    vector < vector<int> > data;

    vector<int> row1;
    row1.push_back(5);
    row1.push_back(2);
    row1.push_back(7);
    data.push_back(row1);

    vector<int> row2;
    row2.push_back(6);
    data.push_back(row2);

    vector<int> row3;
    row3.push_back(7);
    row3.push_back(9);
    data.push_back(row3);

    print(data);

    return 0;
}
