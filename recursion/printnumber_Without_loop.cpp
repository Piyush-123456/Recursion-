#include <iostream>
using namespace std;

void print_1_to_n(int n)
{
    if (n == 0)
    {
        return;
    }
    cout << n << " ";
    print_1_to_n(n - 1);
}

int main()
{
    print_1_to_n(10);
    return 0;
}