#include <iostream>
using namespace std;

int count_set_bits(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if ((n & 1) == 1)
    {
        return 1 + count_set_bits(n >> 1);
    }
    else
    {
        return count_set_bits(n >> 1);
    }
}

int main()
{
    int n = 21;
    cout << count_set_bits(n);
}