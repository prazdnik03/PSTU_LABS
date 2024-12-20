#include<iostream> 
#include<clocale> 
#include<math.h> 
using namespace std;
int fact(int i)
{
	if (i == 0)
		return 1;
	return i * fact(i - 1);
}
double S(double x, double n)
{
	if (n == 0)
	{
		return 0;
	}
	else
	{
		return ((2 * n + 1) / fact(n)) * pow(x, 2 * n) + S(x, n - 1);
	}
}
int main()
{
	setlocale(LC_ALL, "RUS");
	double x;
	int n;
	int i;
	cout << "¬ведите n" << endl;
	cin >> n;
	cout << "¬ведите x" << endl;
	cin >> x;
	double sum1 = S(x, n);
	cout << "сумма n членов равна: " << sum1;
	return 0;
}