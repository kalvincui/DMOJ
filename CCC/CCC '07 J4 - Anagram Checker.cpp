#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	bool anagram = true;
	string a, b;
	getline(cin, a);
	getline(cin, b);
	while (a.length() > 0) {
		if (b.find(a[0]) != std::string::npos) {
			b.erase(remove(b.begin(), b.end(), a[0]), b.end());
			a.erase(remove(a.begin(), a.end(), a[0]), a.end());
		}
		else {
			anagram = false;
			break;
		}
	}
	if (b.length() >0 || anagram == false) {
		cout << "Is not an anagram.";
	}
	else {
		cout << "Is an anagram.";
	}
}

