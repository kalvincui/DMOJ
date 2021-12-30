#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector <string> ans;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int k;
		char c;
		cin >> k >> c;
		ans.push_back(string(k, c));
	}
	for (auto i : ans) {
		cout << i << '\n';
	}
	return 0;
}
