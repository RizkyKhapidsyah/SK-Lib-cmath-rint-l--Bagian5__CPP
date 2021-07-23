// CPP program to illustrate rinfl()

#include <cfenv>
#include <cmath>
#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	long double x = 3.765426764, y = 3.37562657, hasil;

	fesetround(FE_DOWNWARD);

	hasil = rintl(x);
	cout << hasil << endl;

	fesetround(FE_UPWARD);

	hasil = rintl(y);
	cout << hasil << endl;

	_getch();
	return 0;
}
