#include<iostream>
#include<climits>
using namespace std;

int main() 
{
    int index_largest = 0;
    int index_smallest = 0;
    int age[10];
    int size = sizeof(age) / sizeof(int);

    for(int i = 0; i < size; i++)
    {
        cout << "Enter the age of " << i+1 << " person" << endl;
        cin >> age[i];
    }
    int start = age[0];
    int start2 = age[0];


    //For largest age
    for(int i = 0; i < size; i++)
    {
        if(age[i] >= start)
        {
            index_largest = i;
            start = age[i];
        }
    }
    
    cout << "The largest age =" << start << endl;
    cout << "The index of largest age = " << index_largest << endl;

    for(int i = 0; i < size; i++)
    {
        if(age[i] <= start2)
        {
            index_smallest = i;
            start2 = age[i];
        }
    }

    cout << "The smallest age =" << start << endl;
    cout << "The index of smallest age = " << index_smallest << endl;


    return 0;
}
