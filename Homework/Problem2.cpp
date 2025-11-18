#include<iostream>
using namespace std;

int main()
{
    int num;
    int rev = 0;
    
    cout << "Please enter the number you want to reverse" << endl;
    cin >> num;


    while(num != 0)
    {
        int mod = num % 10;
        rev = rev * 10 + mod;
        num = num / 10;
         
    }

    cout << "Reversed number = " << rev << endl;


    return 0;
}
