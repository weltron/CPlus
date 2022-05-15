// A C++ Program that reads from a CSV file and displays a table
#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

int main(){
    string myText;

    ifstream MyReadFile("scores.csv");

    cout<<" Test scores"<<endl;
    cout<<" -------------------------"<<endl;
    cout<<"Name 1 2 3 4 5 Avg Grade"<<endl;
    cout<<"=================== === === === === === === ======"<<endl;
    while (getline (MyReadFile, myText)) {
        stringstream ss;
        ss << myText;
        string temp;
        int found;
        int sum=0;
        double avg;
          
        cout << myText;
          
        while (!ss.eof()) {
          
            ss >> temp;
          
            if (stringstream(temp) >> found)
            {
                sum=sum+found;
            }
      
            temp = "";
        }
        avg = (double) sum / 5;
        cout<<" "<<(double)avg<<" ";
        if(avg>=90 && avg<=100){
            cout<<" A"<<endl;
        }
        else if(avg>=80 && avg<=89){
            cout<<" B"<<endl;
        }
        else if(avg>=70 && avg<=79){
            cout<<" C"<<endl;
        }
        else if(avg>=60 && avg<=69){
            cout<<" D"<<endl;
        }
        else if(avg>=0 && avg<=59){
            cout<<" F"<<endl;
        }
    }
    MyReadFile.close();
}
