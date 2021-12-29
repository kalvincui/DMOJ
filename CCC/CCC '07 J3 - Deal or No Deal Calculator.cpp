#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <int> b;
    b.push_back(0);
    b.push_back(100);
    b.push_back(500);
    b.push_back(1000);
    b.push_back(5000);
    b.push_back(10000);
    b.push_back(25000);
    b.push_back(50000);
    b.push_back(100000);
    b.push_back(500000);
    b.push_back(1000000);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int input;
        cin >> input;
        b.at(input) = 0;
    }
    int offer;
    cin >> offer;
    double average = 0;
    for (int i = 1; i <= 10; i++) {
        average += b.at(i);
    }
    average = average / (10 - n);
    if (average < offer) {
        cout << "deal";
    }
    else {
        cout << "no deal";
    }
    return 0;
}
