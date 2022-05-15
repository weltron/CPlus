// A C++ program that calculates the average of scores
// and assigns grades to those averages.

#include <iostream>
#include <fstream>
#include <iomanip>

double getAvg(int testScore1, int testScore2, int testScore3, int testScore4, int testScore5){
    double avg = (testScore1 + testScore2 + testScore3 + testScore4 + testScore5)/5.0;
    return avg;
}
char getGrade(double avg){
    char grade = 'F';
    if (avg >= 90){
        grade = 'A';
    }else if (avg >= 80){
        grade = 'B';
    }else if (avg >= 70){
        grade = 'C';
    }else if (avg >= 60){
        grade = 'D';
    }
    return grade;
}

int main(){
    
    std::ifstream myFile("/Users/welt_ron/Desktop/COSC 1436/Assignment 5/Assignment 5/scores.csv");

    if(!myFile){
        std::cerr << "\nError: Could not open input file\n";
    }
    else {

        std::cout<< std::setw(15) <<" Test scores\n--------------------\n 1   2   3   4   5   Avg  Grade\n=== === === === === ===== =====\n";
       
        int testScore1, testScore2, testScore3, testScore4, testScore5;
        char comma1, comma2, comma3, comma4;
        
        // Read all values in one line, then next line, next line and so on
        while (myFile >> testScore1 >> comma1 >> testScore2 >> comma2 >> testScore3 >> comma3 >> testScore4 >> comma4 >> testScore5) {
            
            // Calculate
            double average = getAvg(testScore1, testScore2, testScore3, testScore4, testScore5);
            char grade = getGrade(average);
            std::cout<< " "<< testScore1<< "  "<< testScore2 << "  "<< testScore3 << "  "<< testScore4 << "  "<< testScore5<< "  " << average << "  " << grade << '\n';
        }
    }
    return 0;
}
