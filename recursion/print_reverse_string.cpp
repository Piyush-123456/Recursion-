#include <iostream>
using namespace std;

void reverse_string(string &str, int start, int end)
{
    if (start >= end)
    {
        return;
    }
    else
    {
        swap(str[start], str[end]);
        reverse_string(str, start + 1, end - 1);
    }
}

int main()
{
    string str = "Piyush Panchabhai";
    reverse_string(str, 0, str.size() - 1);
    cout << str;
    return 0;
}