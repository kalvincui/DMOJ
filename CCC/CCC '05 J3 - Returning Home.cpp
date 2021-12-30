#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector <char> directions;
	vector <string> streets;
	char a;
	string b;
	while (b != "SCHOOL") {
		cin >> a;
		cin >> b;
		if (a == 'L') {
			directions.insert(directions.begin(), 'R');
		}
		else {
			directions.insert(directions.begin(), 'L');
		}
		if (b == "SCHOOL") {
			break;
		}
		else {
		streets.insert(streets.begin(), b);
		}
	}
	for (int i = 0; i < streets.size(); i++) {
		if (directions.at(i) == 'L') {
			cout << "Turn LEFT onto " + streets.at(i) + " street." << '\n';
		}
		else {
			cout << "Turn RIGHT onto " + streets.at(i) + " street." << '\n';
		}
	}
	if (directions.at(directions.size() - 1) == 'L') {
		cout << "Turn LEFT into your HOME." << '\n';
	}
	else {
		cout << "Turn RIGHT into your HOME." << '\n';
	}
	return 0;
}
