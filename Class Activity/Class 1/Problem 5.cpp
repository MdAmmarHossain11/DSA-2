#include<iostream>
using namespace std;
int calc_factorial(int n)
{
    int fact = 1;
    for(int i=n; i>=1; i--)
        fact = fact * i;
    return fact;
}
int main()
{
    int number1, number2;
    cin >> number1 >> number2;
    for(int i=number1; i<=number2; i++)
    {
        cout << calc_factorial(i) << endl;
    }
    return 0;
}
