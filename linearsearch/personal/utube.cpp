#include <iostream>
using namespace std;

int linearSearch(int array[], int size, int searchValue)
{
    // int array[] is the array in which we want to search
    // int size is the number of elements in the array
    // int searchValue is the value we want to look for

    // for loop goes through every element in the array from idex 0 to size-1
    for (int i = 0; i < size; i++)
    {
        // At each osition i, function checks if the value at th position is equal to the value we're searching for.

        if (searchValue == array[i])
        {
            // If yes, the function returns the index i, which is the position where we found the match
            return i;
        }
    }
    // Signal that the value does not exist in the array
    return -1;
}

int main()
{
    // Creates array of integers a with 6 elements
    int a[] = {15, 23, 7, 45, 87, 17};
    // DEclares variable userVale of type integer
    int userValue;
    // Displays message on screen asking user to type in an integer
    cout << "Enter an integer: " << endl;
    // Waits for user to enter an integer from the keyboard
    // Entered value is then stored inside the variable userValue
    cin >> userValue;
    int result = linearSearch(a, 6, userValue);
    if (result >= 0)
    {
        cout << "The number " << a[result] << "was found";
    }
    else
    {
        cout << "The number " << userValue << "was not found." << endl;
    }
}