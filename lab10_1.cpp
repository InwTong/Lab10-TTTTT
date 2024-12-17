#include<iostream>
using namespace std;

int main(){
    int count[5] = {};  // Declare array count for counting A, B, C, D, F and initialize all elements to 0
    char grade;
    int studentCount = 0; // Variable to count the number of students entered

    cout << "Please input grade of each student (A-F) or input 0 to exit." << endl;

    // Loop to get grades of students
    do {
        studentCount++;  // Increment student count for each new entry
        cout << "Student [" << studentCount << "]: ";
        cin >> grade; // Input the grade

        // Check the grade and update the corresponding count
        if (grade == 'A') {
            count[0]++;
        } else if (grade == 'B') {
            count[1]++;
        } else if (grade == 'C') {
            count[2]++;
        } else if (grade == 'D') {
            count[3]++;
        } else if (grade == 'F') {
            count[4]++;
        } else if (grade == '0') {
            break;  // Exit the loop when the input is '0'
        } else {
            // Handle incorrect input
            cout << "Wrong input. Please input again." << endl;
            studentCount--;  // Do not count this entry as it's invalid
        }
    } while (true);

    // Output the results
    cout << "In total " << studentCount - 1 << " students." << endl; // Subtract 1 to exclude the '0' input
    cout << "A = " << count[0] << ", ";
    cout << "B = " << count[1] << ", ";
    cout << "C = " << count[2] << ", ";
    cout << "D = " << count[3] << ", ";
    cout << "F = " << count[4] << endl;

    return 0;
}
