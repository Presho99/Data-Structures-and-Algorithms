#include <iostream>
using namespace std;

int linearSearch(int array[], int size, int targetValue)
{
    for (int i = 0; i < size; i++)
    {
        if (targetValue == array[i])
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int a[] = {5, 25, 13, 56, 78, 89, 34};
    int searchValue;
    cout << "Enter a value to search: ";
    cin >> searchValue;
    int result = linearSearch(a, 7, searchValue);

    if (result > 0)
    {
        cout << searchValue << " was found at index " << result;
    }
    else
    {
        cout << -1;
    }
}
