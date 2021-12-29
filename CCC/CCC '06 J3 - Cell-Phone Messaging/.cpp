#include <iostream>
using namespace std;

int main()
{
    string one = "adgjmptw-";
    string two = "behknqux";
    string three = "cfilorvy";
    string four = "sz";
    string input;
    string buttons[9];
    buttons[0] = "abc";
    buttons[1] = "def";
    buttons[2] = "ghi";
    buttons[3] = "jkl";
    buttons[4] = "mno";
    buttons[5] = "pqrs";
    buttons[6] = "tuv";
    buttons[7] = "wxyz";
    buttons[8] = "-";
    cin >> input;
    while (input.compare("halt")!=0) {
        int time = 0;
        string previous ="";
        for (int i = 0; i<input.length(); i++) {
             if (previous.find(input[i]) != string::npos) {
                    time += 2;
             }
             if (one.find(input[i]) != string::npos) {
                 time += 1;
             }
             else if (two.find(input[i]) != string::npos) {
                 time += 2;
             }
             else if (three.find(input[i]) != string::npos) {
                 time += 3;
             }
             else {
                 time += 4;
             }
            for (int j = 0; j < 9; j++) {
                if (buttons[j].find(input[i]) != string::npos) {
                    previous = buttons[j];
                    break;
                }
            }
        }
        cout << time << '\n';
        cin >> input;
    }
    return 0;
}
