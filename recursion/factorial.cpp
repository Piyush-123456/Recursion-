#include <iostream>
using namespace std;
int factorial(int n)
{
    if (n == 1)
    {
        return 1;
    }
    int ans = factorial(n - 1) * n;
    return ans;
}

int main()
{
    int n = 5;
    cout << factorial(n);
    return 0;
}