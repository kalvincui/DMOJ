#include <iostream>
using namespace std;

int main()
{
	int y, m, d, n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		bool legal = true;
		cin >> y >> m >> d;
		if (y > 1989) {
			legal = false;
		}
		else if (y == 1989) {
			if (m > 2) {
				legal = false;
			}
			else if (m == 2) {
				if (d > 27) {
					legal = false;
				}
			}
		}
		if (legal) {
			cout << "Yes" << '\n';
		}else {
			cout << "No" << '\n';
		}
	}
	return 0;
}
