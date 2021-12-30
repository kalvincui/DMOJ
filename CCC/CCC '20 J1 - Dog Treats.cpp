#include <iostream>
using namespace std;

int main()
{
    int s;
    int m;
    int l;
    cin >> s;
    cin >> m;
    cin >> l;
    if ((s + (2 * m) + (3 * l)) >= 10) {
        cout << "happy";
    }
    else {
        cout << "sad";
    }
}
