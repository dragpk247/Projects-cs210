Overview
This is a C++ application that allows users to manipulate time in both 12-hour and 24-hour formats. Users can input an initial time and choose to add hours, minutes, or seconds to the time. The application displays the updated time in both 12-hour and 24-hour formats.
Features
Input initial time in 12-hour or 24-hour format
Choose to add hours, minutes, or seconds to the time
Display updated time in both 12-hour and 24-hour formats
Validate user input for clock type and time limits
Exit the program when user chooses to or when time limit is exceeded
Functions
displayTime12Hour: Displays time in 12-hour format with AM or PM
displayTime24Hour: Displays time in 24-hour format
convertToMeridiem: Converts clock 1 time to AM or PM
addHours, addMinutes, addSeconds: Add hours, minutes, or seconds to the time
Usage
Run the application
Input the initial time (hour, minute, second) and clock type (1 for 12-hour, 2 for 24-hour)
Choose to add hours, minutes, or seconds to the time
The updated time will be displayed in both 12-hour and 24-hour formats
Repeat steps 3-4 until you choose to exit the program
Note
The application validates user input for clock type and time limits. If the input is invalid or the time limit is exceeded, the program will exit.
The 12-hour clock format displays time in AM or PM, while the 24-hour clock format displays time in hours and minutes only.
