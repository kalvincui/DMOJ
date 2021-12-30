#include <iostream>
using namespace std;

int main()
{
	int x, m;
	int n = 0;
	cin >> x;
	cin >> m;
	for (int i = 1; i < m; i++) {
		int test = i * x - 1;
		if (test % m == 0) {
			n = i;
			break;
		}
	}
	if (n != 0) {
		cout << n;
	}
	else {
		cout << "No such integer exists.";
	}

	return 0;
}
