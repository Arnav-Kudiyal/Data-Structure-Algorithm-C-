#include<iostream>
using namespace std;

int calculator(int binary)
{
    int answer = 0 , power = 1;
    while (binary > 0)
    {
        int reminder = binary % 2 ;
        answer += reminder * power ;
        
        binary = binary / 10 ; 
        power = power * 2;
    }
        return answer ; 
     


}

int main()
{
    int biNum;

    cout << "Please enter your Binary Number Here :" << endl;
    cin >> biNum;

    cout << "Your Decimal Number is : "<< calculator(biNum) << endl;

    return 0;
}
