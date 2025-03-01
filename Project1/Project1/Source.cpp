#include <iostream>

using namespace std;

bool soNguyenTo(int soA)
{
	if (soA < 2)
		return false;

	for (int i = 3; i <= sqrt((float)soA); i++)
	{
		if (soA % i == 0)
		{
			return false;
		}
	}
	return true;
}




int main() {

}
