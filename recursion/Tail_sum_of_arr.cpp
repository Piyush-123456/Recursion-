#include <iostream>
#include <vector>
using namespace std;

void sum_of_Elem(vector<int> arr, int index, int &sum)
{
    if (index < 0)
    {
        return;
    }
    sum += arr[index];
    sum_of_Elem(arr, index - 1, sum);
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    int sum = 0;
    sum_of_Elem(arr, arr.size() - 1, sum);
    cout << sum;
    return 0;
}