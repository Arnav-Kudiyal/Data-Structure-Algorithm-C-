#include<iostream>
using namespace std;

int findMin(int arr[10])
{
    int minimum = arr[0];

    for(int i = 1; i < 10; i++)
    {
        if (arr[i] < minimum)
        {
            minimum = arr[i];
        }
    }
    return minimum;
}

int main()
{
    int values[10];
    
    for(int i = 0; i < 10; i++)
    {
        cout << "Enter the " << i << "element" << endl;
        cin >> values[i];

    }

    // Calling the function to find the minimum value from the list

    cout << " The minimum value from the given elements is " << findMin(values) << endl;

    return 0;
}
