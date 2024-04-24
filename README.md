Overview
Summarize the project and what problem it was solving: 
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


What did you do particularly well?
A: What I did particularly well was seperating booth clocks into 2 different formats: the 12-hour and 24-hour formats. 

Where could you enhance your code? How would these improvements make your code more efficient, secure, and so on?
A: Where I could improve in the code would be to end the program after the user is shown their desired input. 

Which pieces of the code did you find most challenging to write, and how did you overcome this? What tools or resources are you adding to your support network?
A: The piece of code that I finded most challanging in this project was being able to lay the UI correctly. The challanging aspect was needing to 
write the correct amount of asterisk's for the program to display correctly.  

What skills from this project will be particularly transferable to other projects or course work?
A: The skill that is transferable to other projects is to keep the code maintainable and readable by using comments and breaks within the code so that the next person 
reading can understand the code.

How did you make this program maintainable, readable, and adaptable?
A: The way I made my code maintainable and readable and adaptable was by creating comments within the code to help the reader know what each segment of the code does.
To make the code readable I created separate sections for different functions as well as indenting these areas so that the code can be understood. I also made the 
program adaptable by allowing the use of the iomanip library and the iostream library for future use cases.
