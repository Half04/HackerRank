#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int base;
	int square;
	cin >> base >> square;
	int height = ceil((double)(2 * square) / base);
	cout << height << endl;
	return 0;
}