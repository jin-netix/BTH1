#include <iostream>

using namespace std;


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


	int a;
	cin >> a;
	if (nam_nhuan(a))
		cout << a << " la nam nhuan\n";
	else
		cout << a << " khong phai la nam nhuan\n";

}
