#include <iostream>
#include <vector>
using namespace std;

void sum_of_array(vector<int> arr, int index, int &sum)
{
    if (index >= arr.size())
    {
        return;
    }
    else
    {
        sum += arr[index];
        sum_of_array(arr, index + 1, sum);
    }
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    int sum = 0;
    sum_of_array(arr, 0, sum);
    cout << sum;
    return 0;
}