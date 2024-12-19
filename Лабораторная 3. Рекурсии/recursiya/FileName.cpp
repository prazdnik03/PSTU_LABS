#include<iostream>
#include<clocale>
using namespace std;
int n;
double x;

int fact(int i)
{
    if (i == 0)
        return 1;
    return i * fact(i - 1);
}

double f(double n, double x)
{
    double z= ((2*n+1)/fact(n))*pow(x,2*n);
    return z;
}
double rec(int n, double x)
{
    double num = 1;
    double s = 0;
    while (n >= num)
    {
        s = s + f(num, x);
        ++num;
    }
    return s;
}
int main()
{
    setlocale(LC_ALL, "Rus");
    int i;
    cout << "Enter n: ";
    cin >> n;
    cout << "Enter x: ";
    cin >> x;
    cout <<"Сумма n членов равна: " << rec(n, x) << endl;
    return 0;
}