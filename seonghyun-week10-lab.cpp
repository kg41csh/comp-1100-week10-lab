#include "iostream"
#include "string"
#include "chrono"
#include "thread"

using namespace std;

float functionformark(float value1, float value2) {

    double gradePercentage = (value1 + value2 / 2) * 100;
    return gradePercentage;
}

void joke(char name) {

    cin >> name;
    cout << "It is just joke" << endl;
}

int count(int y) {
    
    return y;
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
    cout << "Any other key: Exit" << endl;

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

        // Read in 2 integer values
        cout << "Enter your grade: " << endl;
        cin >> marksReceived >> totalMarksAvailable;

        /* 
           Pass the integer values to a function. 
           The function should calculates the grade
           as a percentage out of 100 and return as
           as a double
        */

        functionformark(marksReceived, totalMarksAvailable);

        cout << "You achieved a grade of: " << gradePercentage << "%" << endl;

    } else if(selection == 2) {

        // Ask the user for their name
        char name;
        cout << "Please Enter your name: " << endl;
        
        // Call a function that tells them a joke
        // The function should not return a value

        joke();


    } else {
        int count = 0;

        // Replace the while loop with a for loop
        for ( count = 0; count < 10; count++) {

            // Call a function here to increase the count
            
            cout << count() << " ";
        }
    }

    return 0;
}

