#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n == 1)
    {
        return 1;
    }
    int result = n * factorial(n - 1);
    return result;
}

int main()
{
    int result = factorial(5) / (factorial(2) * factorial(3));
    cout << result;
    return 0;
}
