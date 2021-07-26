#include <iostream>
#include <vector> // https://blockdmask.tistory.com/70
#include <list>
#include <map>
#include <set>
using namespace std;

int main() {
    vector<int> v;
    int arr[4] = {0, 1, 23, 32};

    v.push_back(2);
    v.push_back(3);
    for(auto i : v) {
        cout << arr[i] << endl;
    }
}