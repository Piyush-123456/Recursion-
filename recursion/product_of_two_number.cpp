#include <iostream>
using namespace std;

int product_of_two(int a, int b)
{
    if (a < b)
    {
        return product_of_two(b, a);
    }
    else if (b != 0)
    {
        return a + product_of_two(a, b - 1);
    }
    else
    {
        return 0;
    }
}

int main()
{
    int a = 5, b = 2;
    cout << product_of_two(a, b);
    return 0;
}