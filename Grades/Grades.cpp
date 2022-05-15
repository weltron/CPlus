// A C++ program that calculates the average of five tests 
// score and displays the grade letter

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    double score1, score2, score3, score4, score5, averageScore;
    
    cout << fixed << setprecision(2) << endl; //sets the score number to 2 digits to the right of the decimal
    cout << "Enter test score #1: "; //prompts user to input value
    cin >> score1;
    
    cout << "Enter test score #2: "; //prompts user to input value
    cin >> score2;
    
    cout << "Enter test score #3: "; //prompts user to input value
    cin >> score3;
    
    cout << "Enter test score #4: "; //prompts user to input value
    cin >> score4;
    
    cout << "Enter test score #5: "; //prompts user to input value
    cin >> score5;
    
    averageScore = (score1 + score2 + score3 + score4 + score5)/5; //calculates the average of test scores
    cout << "Average score is: "<< averageScore << endl; // displays the average score
    
    //conditional statements to determine the letter grade for average scores
    if (averageScore >= 90)
        cout << "Grade letter is: 'A'" << endl;
    else if (averageScore >= 80)
        cout << "Grade letter is: 'B'" << endl;
    else if (averageScore >= 70)
        cout << "Grade letter is: 'C'" << endl;
    else if (averageScore >= 60)
        cout << "Grade letter is: 'D'" << endl;
    else
        cout << "Grade letter is: 'F'" << endl;
    
    return 0;
}
