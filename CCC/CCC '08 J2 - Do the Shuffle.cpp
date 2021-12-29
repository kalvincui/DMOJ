#include <iostream>
#include <vector>
using namespace std;

int main()
{
    bool c = true;
    vector <char> mp3;
    mp3.push_back('A');
    mp3.push_back('B');
    mp3.push_back('C');
    mp3.push_back('D');
    mp3.push_back('E');
    int input;
    cin >> input;
    while (c) {
        int n;
        cin >> n;
        for (int i = 0; i < n; i++) {
            char temp;
            if (input == 1) {
                temp = mp3.at(0);
                mp3.erase(mp3.begin());
                mp3.push_back(temp);
            }
            else if (input == 2) {
                temp = mp3.at(4);
                mp3.erase(mp3.begin() + 4);
                mp3.insert(mp3.begin(), temp);
            }
            else if (input == 3) {
                temp = mp3.at(0);
                mp3.at(0) = mp3.at(1);
                mp3.at(1) = temp;
            }
            else if (input == 4) {
                for (int j = 0; j < mp3.size(); j++) {
                    cout << mp3.at(j) << ' ';
                }
                c = false;
            }
        }
        cin >> input;
    }
    return 0;
}
