#include <iostream>
using namespace std;

int main()
{
    int i, j, k, l;
    cin >> i >> j >> k >> l;
    int one[5] = { 0, i, i + j, i + j + k, i + j + k + l };
    int two[5] = { i, 0, j, j + k, j + k + l };
    int three[5] = { i + j, j, 0, k, k + l };
    int four[5] = { i + j + k, j + k, k, 0, l };
    int five[5] = { i + j + k + l, j + k + l,k + l, l, 0 };
    for (auto i : one) {
        cout << i << " ";
    }
    cout << "" << '\n';
    for (auto i : two) {
        cout << i << " ";
    }
    cout << "" << '\n';
    for (auto i : three) {
        cout << i << " ";
    }
    cout << "" << '\n';
    for (auto i : four) {
        cout << i << " ";
    }
    cout << "" << '\n';
    for (auto i : five) {
        cout << i << " ";
    }
}

