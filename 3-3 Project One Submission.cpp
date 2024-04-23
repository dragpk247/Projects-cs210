#include <iostream>

using namespace std;

// Function to display time in 12-hour format
void displayTime12Hour(int hour, int minute, int second, string meridiem) {
    cout << "Clock 1 (12-hour format): ";
    cout << hour << ":" << minute << ":" << second << " " << meridiem << endl;
}

// Function to display time in 24-hour format
void displayTime24Hour(int hour, int minute, int second) {
    cout << "Clock 2 (24-hour format): ";
    cout << hour << ":" << minute << ":" << second << endl;
}

// Function to convert clock 1 to AM or PM
string convertToMeridiem(int hour) {
    return (hour >= 12) ? "PM" : "AM";
}

// Function to add hours to the time
void addHours(int& hour, int hoursToAdd) {
    hour = (hour + hoursToAdd) % 24;
}

// Function to add minutes to the time
void addMinutes(int& minute, int minutesToAdd) {
    minute = (minute + minutesToAdd) % 60;
}

// Function to add seconds to the time
void addSeconds(int& second, int secondsToAdd) {
    second = (second + secondsToAdd) % 60;
}

int main() {
    int clockType;
    int hour, minute, second;
    string meridiem;

    // Get user input for initial time and clock type
    cout << "Enter the initial time:" << endl;
    cout << "Hour (0-23): ";
    cin >> hour;
    cout << "Minute (0-59): ";
    cin >> minute;
    cout << "Second (0-59): ";
    cin >> second;
    cout << "Enter '1' for 12-hour clock or '2' for 24-hour clock: ";
    cin >> clockType;

    // Validate input for clock type
    if (clockType != 1 && clockType != 2) {
        cout << "Invalid input for clock type. Exiting program." << endl;
        return 1;
    }

    // Convert clock 1 time to 12-hour format with AM or PM
    if (clockType == 1) {
        meridiem = convertToMeridiem(hour);
        hour %= 12;
        if (hour == 0) {
            hour = 12;
        }
    }

    char choice;

    // Menu for adding hours, minutes, or seconds to the clocks
    do {
        // Display the current time in both clock formats
        displayTime12Hour(hour, minute, second, meridiem);
        displayTime24Hour(hour, minute, second);

        // Display menu options
        cout << "\nMenu:" << endl;
        cout << "1. Add hours" << endl;
        cout << "2. Add minutes" << endl;
        cout << "3. Add seconds" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        // Perform actions based on user's choice
        switch(choice) {
            case '1':
                int hoursToAdd;
                cout << "Enter the number of hours to add: ";
                cin >> hoursToAdd;
                addHours(hour, hoursToAdd);
                if (clockType == 1) {
                    meridiem = convertToMeridiem(hour);
                    hour %= 12;
                    if (hour == 0) {
                        hour = 12;
                    }
                }
                break;
            case '2':
                int minutesToAdd;
                cout << "Enter the number of minutes to add: ";
                cin >> minutesToAdd;
                addMinutes(minute, minutesToAdd);
                break;
            case '3':
                int secondsToAdd;
                cout << "Enter the number of seconds to add: ";
                cin >> secondsToAdd;
                addSeconds(second, secondsToAdd);
                break;
            case '4':
                cout << "Exiting the program." << endl;
                break;
            default:
                cout << "Invalid choice. Please enter a valid option." << endl;
        }

        // Check if the time exceeds the limit for each clock format and exit if so
        if ((clockType == 1 && (hour > 12 || (hour == 12 && meridiem == "AM"))) || (clockType == 2 && hour > 23)) {
            cout << "Time limit exceeded. Exiting the program." << endl;
            return 1;
        }
    } while(choice != '4'); // Continue until user chooses to exit

    return 0;
}
