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

}
