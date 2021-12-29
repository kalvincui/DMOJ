#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector <int> a;
    for (int i = 0; i < n; i++) {
        int input;
        cin >> input;
        a.push_back(input);
    }
    sort(a.begin(), a.end());
    for (int i = 0; i < a.size(); i++) {
        cout << a.at(i) << '\n';
    }
}

