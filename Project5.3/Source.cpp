#include <iostream>
#include <cmath>
using namespace std;
double g(const double x);
int main()
{
	double zp, zk, m;
	int n;
	cout << "zp = "; cin >> zp;
	cout << "zk = "; cin >> zk;
	cout << "n = "; cin >> n;
	double dz = (zk - zp) / n;
	double z = zp;
	while (z <= zk)
	{
		m = g(2 * z) + pow(g((2 * z) + (z * z)), 2) + g(1.5);
		cout << z << " " << m << endl;
		z += dz;
	}
	return 0;
}
double g(const double x)
{
	if (abs(x) >= 1)
		return (sin(x)) / (cos(x) + 2);
	else
	{
		double S = 0;
		int n = 0;
		double a = 1;
		S = a;
		do
		{
			n++;
			double R = (x * x) / (n * (n - 1));
			a *= R;
			S += a;
		} while (n < 6);
		return S;
	}
}