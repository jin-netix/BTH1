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

bool nam_nhuan(int year)
{
	if (year % 100 == 0)
	{
		if (year % 400 == 0) {
			return true;
		}
		else {
			return false;
		}
	}
	else if (year % 4 == 0) {
		return true;
	}
	else {
		return false;
	}
}

int main() {
	int n;
	cin >> n;
	if (SoNguyenTo(n))
		cout << n << " la so nguyen to\n";
	else
		cout << n << " khong phai la so nguyen to\n";

	int a;
	cin >> a;
	if (nam_nhuan(a))
		cout << a << " la nam nhuan\n";
	else
		cout << a << " khong phai la nam nhuan\n";

}
