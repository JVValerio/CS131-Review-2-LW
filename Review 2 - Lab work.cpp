////
// Name: Josh Valerio
// Section: CS 131 - 2830
// Program Name: Review 2 - Lab work
////
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int leftNum[2][2];
    int rightNum[2][2];
    for (int i = 0; i < 2; i++) {
        cout << "Input Matrix " << i + 1 << " (2x2)\n";
        cout << setw(20) << setfill('-') << "-" << endl;

        for (int j = 0; j < 2; j++) {
            cout << "Type in 2 values for row " << j + 1 << " separated by a space: ";
            cin >> leftNum[i][j];
            cin >> rightNum[i][j];
        }
        cout << endl;
    }
    for (int a = 0; a < 2; a++) {
        for (int b = 0; b < 2; b++) {
            cout << "\t\t" <<leftNum[a][b] << "\t" << rightNum[a][b] << endl;
        }
        if (a == 0) {
            cout << "TIMES" << endl;
        }
    }
    cout << "EQUALS" << endl;
    cout << "\t\t" << (leftNum[0][0] * leftNum[1][0]) + (rightNum[0][0] * leftNum[1][1]) << "\t" 
        << (leftNum[0][0] * rightNum[1][0]) + (rightNum[0][0] * rightNum[1][1]) << endl;
    cout << "\t\t" << (leftNum[0][1] * leftNum[1][0]) + (rightNum[0][1] * leftNum[1][1]) << "\t" 
        << (leftNum[0][1] * rightNum[1][0]) + (rightNum[0][1] * rightNum[1][1]) << endl << endl;

    cout << "I messed up in the logic of the array. The equals portion outputs the correct answers,\nbut it is not looped correctly due to bad array inputs" << endl;

    system("pause");
    return 0;
}