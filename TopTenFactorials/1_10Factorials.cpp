// A C++ program that calculates the factorial of numbers between 1 and 10

#include <iostream>

using namespace std;

int main (){
    int n; //
    
    do{   //a do - while loop to take the input numbers and calculate the factorial
        cout << "Enter a number between 1 and 10 (or 0 to end program): ";
        cin >> n;
        
        while (n < 0 || n > 10) {       // a while loop to validates the input 0
            cout << "Error: " << n << " is outside the valid range \n";
            break;
        }
        if (n > 0 && n <= 10) {
            int factorial = 1; // a for loop that calculates the factorial of numbers between 1 and 10
            for(int i = 1; i <= n; ++i){
                factorial *= i;
            }
            cout << "Factorial of " << n << " is " << factorial << endl;
        } else if (n==0){
            cout << "Good bye! \n";
            break;
        }
    } while (n != 0);
    return 0;
}
