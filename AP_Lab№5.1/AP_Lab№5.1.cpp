#include <iostream>
#include <cmath>
using namespace std;
double g(const double a, const double b, const double c)
{
	return ((a * a) + (b * b) - (c * c));
}
int main()
{
	double x, y;
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	double c = (g(x * y, x * x, y * y) - pow(g(1, x, y), 2)) / (1 + g(sqrt(x), y * y, 1));
	cout << "c = " << c << endl;
	return 0;
}
