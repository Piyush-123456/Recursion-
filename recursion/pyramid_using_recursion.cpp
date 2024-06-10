#include <iostream>
using namespace std;

void printn(int n)
{
    if (n == 0)
    {
        return;
    }
    cout << "* ";
    printn(n - 1);
}

void pattern_pyramid(int n, int i)
{
    if (n == 0)
    {
        return;
    }
    printn(i);
    cout << endl;
    pattern_pyramid(n - 1, i + 1);
}

int main()
{
}