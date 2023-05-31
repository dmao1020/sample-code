#include <iostream>
#include <vector>
#include <string>

using namespace std;

int fun1(){
        int divisor, dividend, quotient, remainder;

        cout << "Enter dividend: ";
        cin >> dividend;

        cout << "Enter divisor: ";
        cin >> divisor;

        quotient = dividend/ divisor;
        remainder = dividend % divisor;

        cout << "Quotient = " << quotient << endl;
        cout << "Remainder = " << remainder << endl;

        return 0;

    }

int main()
{
    fun1();

    int first_number, second_number, sum;

    cout << "Hello motherduckers, enter the first integer:"; 
    cin >> first_number ;
    cout << "Enter the second integer:"; 
    cin >> second_number;

    // sum of two numbers are stored in variable sumOfTwoNumbers
    sum = first_number + second_number;

    cout << first_number << "+" << second_number << "=" << sum << endl; //endl is adding a new line


    
    return 0;


    

    

}
