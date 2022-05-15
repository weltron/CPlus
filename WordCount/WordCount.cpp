// A C++ program that counts the number of words and vowels in a text file

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    //declare variables
    int words = 0, vowels = 0;
    string word;

    ifstream inFile;
    //open file
    inFile.open("/Users/welt_ron/Desktop/COSC 1436/Ass 7/Ass 7/lorem.txt");
    //process file
    
    // while loop for reading the words from the file
    while(inFile >> word) {
        words++;
        
        // range based for loop to read vowels from words
        for(char letter : word)
            // if statement to identify vowels
            if (letter == 'a' || letter == 'A' || letter == 'e' || letter == 'E' || letter == 'i'|| letter == 'I' || letter == 'o' || letter == 'O' || letter == 'u' || letter == 'U')
                vowels++;
    }
    
    //final output
    cout << "The input file contains "<< words << " words and " << vowels<< " vowels"<<endl;
    return 0;
}

