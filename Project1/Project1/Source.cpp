#include <iostream>

using namespace std;

bool SoNguyenTo(int n) {
	if (n < 2)
		return false;
	else if (n == 2)
		return true;
	else {
		for (int i = 2; i <= sqrt(n * 1.0); i++) {
			if (n % i == 0)
				return false;
		}
		return true;
	}
}

int main() {
	int n;
	cin >> n;
	if (SoNguyenTo(n))
		cout << n << " la so nguyen to\n";
	else
		cout << n << " khong phai la so nguyen to\n";

}