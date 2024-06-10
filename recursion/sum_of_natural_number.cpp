#include <iostream>
using namespace std;

void sum_of_natural_number(int n, int &sum)
{
    if (n == 0)
    {
        return;
    }
    sum += n;
    sum_of_natural_number(n - 1, sum);
}

int recursion(int n)
{
    if (n == 0)
    {
        return;
    }
    return n + recursion(n - 1);
}

int main()
{
    int sum = 0;
    sum_of_natural_number(6, sum);
    cout << sum;
}