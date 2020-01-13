#include <iostream>

using namespace std;

int summingSeries(long n)
{
	int modulus = 1000000000 + 7;
	long a = n % modulus;
	return (a * a) % modulus;
}

int main()
{
	int n;
	cin >> n;
	cout << summingSeries(n) << endl;
	return 0;
}