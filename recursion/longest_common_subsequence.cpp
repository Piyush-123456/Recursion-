#include <iostream>
using namespace std;

int solve(string s1, string s2, int i, int j)
{
    if (i >= s1.size() || j >= s2.size())
    {
        return 0;
    }
    else if (s1[i] == s2[j])
    {
        return 1 + solve(s1, s2, i + 1, j + 1);
    }
    else
    {
        return max(solve(s1, s2, i + 1, j), solve(s1, s2, i, j + 1));
    }
}

int main()
{
    string s1 = "AGGTAB";
    string s2 = "GXTXAYB";
    cout << solve(s1, s2, 0, 0);
}
