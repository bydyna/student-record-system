# Student Record System
Student Record System is a C++ console-based student record management application designed to help users organize and manage student information. The system allows users to add new student records, view all stored students, search for a specific student by their ID, update existing student information, and delete student records. It provides a simple menu-driven interface for managing student records efficiently.

# Technologies Used
- C++
- Visual Studio Code
- C++ Standard Library (iostream, iomanip, string)

# Concepts Used
- Arrays - Used one-dimensional arrays to store student IDs, names, contact information, ages, year levels, and averages.
- Strings - Used strings to store student IDs, names, and contact information.
- Functions - Organized each student record operation into separate functions such as adding, viewing, searching, updating, and deleting students.
- Loops - Used for loops to display students, search records, and shift data after deleting a student.
- Switch Statements - Used a switch statement to process the user's selected menu option.
- Conditional Statements - Used if and else statements to check database capacity, search results, and deletion confirmations.
- User Input and Output - Accepted user input using cin and getline and displayed information using cout.
- Formatting - Used iomanip with fixed, setprecision(), and setw() to format student averages and display records in a table.

# The Process
- Displayed the main menu with seven options: Add Student, View Students, Search Student, Update Student, Delete Student, Delete All Students, and Exit.
- Accepted the user's menu selection.
- Allowed users to enter student details including Student ID, Name, Contact, Age, Year Level, and Average.
- Stored student information using one-dimensional arrays.
- Displayed all saved student records in a formatted table.
- Searched for students using their Student ID.
- Allowed users to update existing student information.
- Asked for confirmation before deleting a student.
- Shifted remaining records after deletion to maintain the student record list.
- Allowed users to delete all student records with confirmation.
- Allowed users to continue managing student records until they chose to exit the program.

# What I Learned
- How to use one-dimensional arrays to store and manage multiple student records.
- How to use strings for text-based information such as student IDs and names.
- How to organize program logic into separate and reusable functions.
- How to search and update records using loops and conditional statements.
- How to delete array elements by shifting remaining data.
- How to display formatted tables using iomanip.
- How to use switch statements to create a menu-driven program.
- How to build a complete CRUD (Create, Read, Update, Delete) application in C++.

# How It Could Be Improved
- Replace multiple arrays with structures (struct) or classes for better data organization.
- Save and load student records using text or CSV files.
- Add input validation to prevent duplicate Student IDs and invalid values.
- Automatically calculate the student's average from subject grades.
- Sort students by name, Student ID, year level, or average.
- Add student sections, courses, or program information.
- Add student performance reports.
- Implement user login and administrator access.
- Replace arrays with vectors for dynamic storage.

# How to Run the Project
- Step 1: Open the project in Visual Studio Code or any C++ IDE.
- Step 2: Compile the program using a C++ compiler.
- Step 3: Run the program.
- Step 4: Choose an option from the menu.
- Step 5: Enter the required student information when prompted.
- Step 6: Continue managing the student records or select Exit to close the program.

# Sample Output
![image alt](https://github.com/bydyna/student-record-system/blob/f2cf9249b95361177a2fdae486fcf915a3dc8e5b/Screenshot%202026-08-17%20202513.png)
