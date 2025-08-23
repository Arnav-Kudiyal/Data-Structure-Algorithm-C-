#include<iostream>
using namespace std;

int convertor(int decimal)

{
    int answer = 0, power = 1;

    while (decimal>0)
    {
        

        int reminder = decimal % 2;
        decimal = decimal / 2;

        answer += reminder * power;
        power = power * 10;
        
    }
    return answer;


}

int main()
{

int decNum;

    cout << "Please Enter the decimal number that you want to change to Binary" << endl;
    cin >> decNum;

    cout << "The Binary form of the number is : " << convertor(decNum) << endl;;

    return 0;
}
