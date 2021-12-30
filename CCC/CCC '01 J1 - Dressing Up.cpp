#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector <string> output;
	int n;
	cin >> n;
	int num = 1;
	for (int i = 0; i < (n/2)+1; i++) {
		int space = 2 * n - 2 * num;
		string temp = "";
		for (int j = 0; j < num; j++) {
			temp += "*";
		}
		for (int j = 0; j < space; j++) {
			temp += " ";
		}
		for (int j = 0; j < num; j++){
			temp += "*";
		}
		output.push_back(temp);
		num += 2;
	}
	for (int i = (n / 2) - 1; i >= 0; i--) {
		string temp = output.at(i);
		output.push_back(temp);
	}
	for (auto i : output) {
		cout << i << '\n';
	}
	return 0;
}
