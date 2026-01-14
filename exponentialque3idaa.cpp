// #include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void linear_search(vector<int>& v, int n, int key, int prev, int end) {
    int comp = 0;
    bool flag = false;

    for (int i = prev; i < min(end, n); i++) {
        comp++;
        if (v[i] == key) {
            cout << "Present, Comparisons: " << comp << endl;
            flag = true;
            break;
        }
    }

    if (!flag) {
        cout << "Not Present, Comparisons: " << comp << endl;
    }
}

void jump_search(vector<int>& v, int n, int key) {
    int prev = 0;
    int end = 1;

    // Find the block where the key may be present
    while (end < n && v[end - 1] < key) {
        prev = end;
        end *= 2;
    }

    // Perform linear search in the found block
    linear_search(v, n, key, prev, min(end, n));
}

int main() {
    int t; // number of test cases
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        int key;
        cin >> key;

        jump_search(v, n, key);
    }
    return 0;
}
