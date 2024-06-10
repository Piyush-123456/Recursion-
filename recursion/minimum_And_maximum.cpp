#include <iostream>
#include <climits>
#include <vector>
using namespace std;

void minimum_element(vector<int> &arr, int &mini, int index)
{
    if (index >= arr.size())
    {
        return;
    }
    mini = min(arr[index], mini);
    minimum_element(arr, mini, index + 1);
}

void maximum_element(vector<int> arr, int &maxi, int index)
{
    if (index >= arr.size())
    {
        return;
    }
    maxi = max(arr[index], maxi);
    maximum_element(arr, maxi, index + 1);
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    int mini = INT_MAX;
    minimum_element(arr, mini, 0);
    cout << mini << " ";
    int maxi = INT_MIN;
    maximum_element(arr, maxi, 0);
    cout << maxi << " ";
    return 0;
}