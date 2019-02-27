#include <iostream>
#include <emscripten/emscripten.h>

using namespace std;

int main()
{
	int price, change, dimes, pennies;
	constexpr int divisor = 10;

	cout << "Enter price (0:100): ";
	cin >> price;
	change = 100 - price;			// how much change
	dimes = change / divisor;		// number of dimes
	pennies = change % divisor;		// number of pennies
	cout << "\n\nThe change is: "
		<< dimes << " dimes ";
	cout << pennies << " pennies." << endl;
}