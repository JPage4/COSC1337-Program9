//***************************************************************
//
//  Developer:         Jessica Page
//
//  Program #:         Program 9
//
//  File Name:         Program9.cpp
//
//  Course:            COSC 1337 Programming Fundamentals II 
//
//  Due Date:          7/19/21
//
//  Instructor:        Prof. Fred Kumi 
//
//  Chapter:           Chapter 10 & 12
//
//  Description:
//  This program receives a numeric check amount from
//  the user and writes the word equivalent of the amount.
//
//***************************************************************

#include <iostream>
#include <iomanip>

using namespace std;

void developerInfo();
string doubleToString(double);

//***************************************************************
//
//  Function:     main
// 
//  Description:  The main function of the program
//
//  Parameters:   None
//
//  Returns:      Zero (0) 
//
//**************************************************************
int main()
{
    developerInfo();    // Do not delete this statement

    // Write your code here
    double checkAmount;
    cout << "Enter a check amount: $ " << endl;
    cin >> checkAmount;
    string amountStr = doubleToString(checkAmount);

    system("PAUSE");
    return 0;
}

string doubleToString(double)
{

    return string();
}

//***************************************************************
//
//  Function:     developerInfo
// 
//  Description:  The developer's information
//
//  Parameters:   None
//
//  Returns:      N/A 
//
//**************************************************************
void developerInfo()
{
    cout << "Name:    Jessica Page" << endl;
    cout << "Course:  Programming Fundamentals II" << endl;
    cout << "Program: 9"
        << endl
        << endl;
} // End of developer

