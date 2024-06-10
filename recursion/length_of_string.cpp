#include <iostream>
using namespace std;

int length_of_string(char ch[])
{
    if (*ch == '/0')
    {
        return 0;
    }
    else
    {
        return 1 + length_of_string(ch);
    }
}

int main()
{
    char ch[] = "piyush panchabhai";
    cout << length_of_string(ch);
    return 0;
}