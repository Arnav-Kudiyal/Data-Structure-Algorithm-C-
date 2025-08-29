/* Floyd's Triangle with characters*/

#include<iostream>
using namespace std;

int main()
{
    int n=5;
    char ch = 'a';
    for(int i=0; i<n; i++)
    {
        for(int j=1; j<i+1; j++)
        {
            cout << ch <<" ";
            ch +=1;
        }
        cout << endl;
    }
    return 0;
}
