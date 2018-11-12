#include "iostream"
#include "string"
#include "chrono"
#include "thread"

using namespace std;

double calculatemark(float newMark, float newTotalmark) {

    double remark =  newMark /  newTotalmark ;
    double gradePercentage = remark * 100;
    return gradePercentage;
}

void joke(string kidding) {

    cout << kidding << ", " << "it was just joke" << endl;
}


int onetoten(int newcount) {
    newcount = newcount + 1;
    return newcount;
}


int main() {
    cout << "Welcome to the function machine!" << endl;
    cout << "================================" << endl;
    cout << endl;
    cout << "Enter a number to select the program you want to run:" << endl;
    cout << endl;
    cout << "1: Calculate your grade on a test" << endl;
    cout << "2: Tell me a joke" << endl;
    cout << "3: Count to 10" << endl;
    cout << "Any other key: Exit" << endl; //

    int selection;
    cin >> selection;

    if (cin.fail() || selection < 1 || selection > 3) {
        cout << endl;
        cout << "Have a nice day, goodbye!" << endl;
    }

    if(selection == 1) {
        float marksReceived = 0;
        float totalMarksAvailable = 0;
        double gradePercentage = 0;
        double remark;

        // Read in 2 integer values
        cout << "Enter your two grades: " << endl;
        cin >> marksReceived >> totalMarksAvailable;

        /* 
           Pass the integer values to a function. 
           The function should calculates the grade
           as a percentage out of 100 and return as
           as a double
        */

        gradePercentage = calculatemark(marksReceived, totalMarksAvailable);

        cout << "You achieved a grade of: " << gradePercentage << "%" << endl;

    } else if(selection == 2) {

        // Ask the user for their name
        string name;

        cout << "Please Enter your name: " << endl;
        cin >> name;
       
        // Call a function that tells them a joke
        // The function should not return a value

        joke(name);


    } else if(selection == 3) {
        int count = 0;
        int n;
        
        // Replace the while loop with a for loop
        /* while(true == true) {
            // Call a function here to increase the count
            cout << count << " ";
        } */

        for ( int n = 0; n < 10; n++ ) {

            int newcount;
            // Call a function here to increase the count

            count = onetoten(count);

            cout << count << " ";
            
        }
    }

    return 0;
}

