// FCAI - Programming 1 - 2022 - Assignment 2
// Program Name:            Task4.cpp
// Program Description: The program calculates the time elapsed since midnight in seconds
// Last Modification Date: 19/03/2022
// Author1 and ID and Group: Abobakr Osman - 20210005 - A
// Author2 and ID and Group: Hatem Ahmed - 20210109 - A
// Teaching Assistant: xxxxxxxx
// Purpose: calculate elapsed time

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string time;
    int timePassed;

    // To input the the time as a string
    cout << "Please enter a valid time in hh:mm:ss format (hours between 00 and 23)\n";
    getline(cin, time);
    cout << time << endl;

    // IF condition because the hours can't get equal to 24 but 00-
    // and minutes and seconds can't get equal to 60.
    // Used substr to get the digits(still string) then turn it into integers.
    if (stoi(time.substr(0, 2)) < 24 && stoi(time.substr(3, 5)) < 60 && stoi(time.substr(0, 2)) < 60)
    {
        // To calculate how many seconds passed
        timePassed = (stoi(time.substr(0, 2)) * 60 * 60) + (stoi(time.substr(3, 5)) * 60) + stoi(time.substr(6));
        cout << timePassed << " seconds elapsed since last midnight" << endl;
    }
    else    // if the user inputs a wrong input
    {
        cout << "Invalid input, please try again.\n";
    }

    return 0;
}
