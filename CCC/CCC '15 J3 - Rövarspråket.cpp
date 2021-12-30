#include <iostream>
#include <string>
using namespace std;

int main()
{
	string input;
	string output;
	string vowels = "aeiou";
	string a = "bc";
	string e = "dfg";
	string ii = "hjkl";
	string o = "mnpqr";
	string u = "stvwxyz";
	cin >> input;
	for (int i = 0; i < input.length(); i++) {
		char curr = input[i];
		int cur = curr;
		if (vowels.find(curr) != std::string::npos) {
			output += curr;
		}
		else {
			if (a.find(curr) != std::string::npos) {
				output += curr;
				output += "a";
				output += char(cur + 1);
			}
			else if (e.find(curr) != std::string::npos) {
				output += curr;
				output += "e";
				if (curr == 'd') {
					output += char(curr + 2);
				}
				else {
					output += char(cur + 1);
				}
			}
			else if (ii.find(curr) != std::string::npos) {
				output += curr;
				output += "i";
				if (curr == 'h') {
					output += char(curr + 2);
				}
				else {
					output += char(cur + 1);
				}
			}
			else if (o.find(curr) != std::string::npos) {
				output += curr;
				output += "o";
				if (curr == 'n') {
					output += char(curr + 2);
				}
				else {
					output += char(cur + 1);
				}
			}
			else {
				output += curr;
				output += "u";
				if (curr == 'z') {
					output += 'z';
				}else if (curr == 't') {
					output += char(curr + 2);
				}
				else {
					output += char(cur + 1);
				}
			}
		}
	}
	cout << output;
	return 0;
}
