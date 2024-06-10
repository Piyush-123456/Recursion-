#include <iostream>
using namespace std;

bool check_palindrome(string str, int start, int end)
{
    if (start >= end)
    {
        return true;
    }
    else if (str[start] != str[end])
    {
        return false;
    }
    else
    {
        return check_palindrome(str, start + 1, end - 1);
    }
}

int main()
{
    string str = "nbkkitin";
    cout << check_palindrome(str, 0, str.size() - 1);
    return 0;
}
