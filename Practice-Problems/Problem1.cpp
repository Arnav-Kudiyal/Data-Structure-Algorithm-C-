// Program to check if the number is square of 2

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int i;
    int num;

    cout << "Please enter the number you want to check " << endl;
    cin >> num;

    for(i = 1; i<=num; i++)
    {
        int c = pow(2 , i);

        if(c == num)
        {
            cout << "This is a square of 2" << endl;
            return 0;
        }
        
        if(c > num)
        {
            cout << "This is not a square of 2" << endl;
            return 0;
        }
    
    }

    return 0;
}
