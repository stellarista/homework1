// homework1
// No. 1
#include <iostream>

using namespace std;

int main()
{
    int sum = 0, number;
     cout << "enter a number: ";
     cin>> number;

    for (int counter = 0; counter <= number;)

    {
        sum = sum + counter;
        counter++;
    }

if (number<1)
{
    cout << "\n" << number <<"is invalid";
    cout << "error\n";
}

else

    cout << "\n the sum of number 1 - " << number << " "<< "is " << sum << endl;


    return 0;
}
