#include <iostream>
using namespace std;

void decimal_to_binary(int n)
{
    if (n == 0)
    {
        return;
    }
    else
    {
        decimal_to_binary(n / 2);
        cout << n % 2;
    }
}

int main()
{
    int n = 10;
    decimal_to_binary(n);
    return 0;
}