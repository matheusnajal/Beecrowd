#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int v;
    cin >> v;

    vector<int> a;
    for (int i = 1; i < 100; ++i) {
        int n;
        cin >> n;

        a.push_back(n);
    }

    vector<int>::iterator max_iter = max_element(a.begin(), a.end());
    int valor = *max_iter;
    int index = distance(a.begin(), max_iter) + 2;

    cout << valor << endl;
    cout << index << endl;

    return 0;
}