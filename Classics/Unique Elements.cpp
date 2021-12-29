#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n = 0;
    int number;
    cin >> number;
    vector <int> list;
    for (int i = 0; i < number; i++) {
        bool distinct = true;
        int input;
        cin >> input;
        list.push_back(input);
        for (int j = 0; j < i; j++) {
            if (list[j] == list[i]) {
                distinct = false;
                break;
            }
        }
        if (distinct) {
            n++;
        }
    }
    cout << n;
    return 0;
}
