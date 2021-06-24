#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

bool comp(string a, string b) {
    if(a.length() == b.length())
        a < b;
    else a.length() < b.length();
}

int main() {
    int N;
    string tmp;
    vector<string> arr;

    scanf("%d", &N);

    for(int i = 0; i < N; i++) {
        cin >> tmp;
        arr.push_back(tmp);
    }

    sort(arr.begin(), arr.end(), comp);
    unique(arr.begin(), arr.end());

    for(int i = 0; i < arr.size(); i++) {
        cout << arr[i] << "\n";
    }
}