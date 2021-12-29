#include <iostream>
#include <string>
using namespace std;

int main()
{
    char grid[5][6];
    grid[0][0] = 'A';
    grid[0][1] = 'B';
    grid[0][2] = 'C';
    grid[0][3] = 'D';
    grid[0][4] = 'E';
    grid[0][5] = 'F';
    grid[1][0] = 'G';
    grid[1][1] = 'H';
    grid[1][2] = 'I';
    grid[1][3] = 'J';
    grid[1][4] = 'K';
    grid[1][5] = 'L';
    grid[2][0] = 'M';
    grid[2][1] = 'N';
    grid[2][2] = 'O';
    grid[2][3] = 'P';
    grid[2][4] = 'Q';
    grid[2][5] = 'R';
    grid[3][0] = 'S';
    grid[3][1] = 'T';
    grid[3][2] = 'U';
    grid[3][3] = 'V';
    grid[3][4] = 'W';
    grid[3][5] = 'X';
    grid[4][0] = 'Y';
    grid[4][1] = 'Z';
    grid[4][2] = ' ';
    grid[4][3] = '-';
    grid[4][4] = '.';
    grid[4][5] = ':';
    int keystrokes = 0;
    int row = 0;
    int column = 0;
    string input;
    getline(cin, input);
    for (int i = 0; i < input.length(); i++) {
        char current = input[i];
        for (int j = 0; j < 5; j++) {
            for (int k = 0; k < 6; k++) {
                if (grid[j][k] == current) {
                    keystrokes += abs(row - j);
                    keystrokes += abs(column - k);
                    row = j;
                    column = k;
                }
            }
        }
    }
    keystrokes += abs(4 - row);
    keystrokes += abs(5 - column);
    cout << keystrokes;
    return 0;
}
