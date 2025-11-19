// Program to find if the number is the power of two by using bitiwse operator
#include<iostream>
using namespace std;

int main()
{
    long int num;

    cout << "Enter the number you want to check " << endl;
    cin >> num;

    if(num > 0 && (num & (num-1)) == 0)
    {
        cout << "This is a power of 2 " << endl; 
    }
    else
    {
        cout << "This is not a power of 2 " << endl;
    }


    return 0;
}
