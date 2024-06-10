#include <iostream>
using namespace std;

int print_reverse_fibonacci(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
        return 1;
    else
    {
        return print_reverse_fibonacci(n - 1) + print_reverse_fibonacci(n - 2);
    }
}

int main()
{
    int n = 5;
    for (int i = n-1; i >=0; i--)
    {
        cout << print_reverse_fibonacci(i)<<" ";
    }
    return 0;
}