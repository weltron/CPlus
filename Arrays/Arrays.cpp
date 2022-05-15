// A C++ program that inputs random numbers in an array 
// and displays the highest and lowest values in the array
#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;


// search array function
void array_search_function(int arr[]){

    // high - highest number , h_id - index of high number

    // low  - lowest number  , l-id - index of lowest number

    int high = -1, h_id = -1, low = 101, l_id = -1;

    // finding the highest and lowest number

    for(int i = 0; i < 30; i++){

        if(arr[i] > high){

            high = arr[i];

            h_id = i;

        }

        if(arr[i] < low){

            low = arr[i];

            l_id = i;

        }

    }

    // printing the highest and lowest

    cout << "The highest number is " << high<< " and it is at position " << h_id <<endl;

    cout << "The lowest number is " <<low << " and it is at position " << l_id <<endl;

}
//main function
int main() {

    // declaring the array with size 30

    int arr[30];

    srand(time(0));  // Initialize random number generator.

     

    //Random numbers generated between 1 and 100 using rand function

    for(int i = 0 ; i < 30; i++){

        arr[i] = (rand() % 100) + 1;

    }

    //displaying the output (5 numbers per line)

    int start = 0,end = 5;

    for(int i = 0; i < 6; i++){

        for(int j = start ; j < end; j++){

            cout << setw(3) << arr[j] << " ";

        }

        cout << endl;

        start += 5;

        end += 5;

    }

    // calling the search array function for printing highest and lowest number

    array_search_function(arr);

    return 0;

}

