#include <iostream>
#include <iomanip>
#include <string>

const int MAX = 100;

void addStudent();
void viewStudent();
void searchStudent();
void updateStudent();
void deleteStudent();
void deleteAll();

std::string studentID[MAX];
std::string studentName[MAX];
std::string contact[MAX];
int studentAge[MAX];
int yearLevel[MAX];
float average[MAX];

int studentCount = 0;

int main()
{
    int choice;

    do
    {
        std::cout << "====================================\n";
        std::cout << "       Student Record System\n";
        std::cout << "====================================\n";
        std::cout << "[1] Add Student\n";
        std::cout << "[2] View Students\n";
        std::cout << "[3] Search Student\n";
        std::cout << "[4] Update Student\n";
        std::cout << "[5] Delete Student\n";
        std::cout << "[6] Delete All Students\n";
        std::cout << "[7] Exit\n";

        // USER INPUT
        std::cout << "What would you like to do (1-7): ";
        std::cin >> choice;

        switch(choice)
        {
            case 1:
                addStudent();
                break;

            case 2:
                viewStudent();
                break;

            case 3:
                searchStudent();
                break;

            case 4:
                updateStudent();
                break;

            case 5:
                deleteStudent();
                break;

            case 6:
                deleteAll();
                break;

            case 7:
                std::cout << "Exiting program...\n";
                break;

            default:
                std::cout << "Invalid. Try again.\n";
        }

    } while(choice != 7);

    return 0;
}

void addStudent()
{
    if (studentCount >= MAX)
    {
        std::cout << "Database is full!\n";
        return;
    }

    std::cout << "========== ADD STUDENT ==========\n";
    std::cout << "Enter Student ID (Example: 24-XXXX-XXX): ";
    std::cin >> studentID[studentCount];
    std::cin.ignore();

    std::cout << "Enter Student Name: ";
    std::getline(std::cin, studentName[studentCount]);

    std::cout << "Enter Contact: ";
    std::getline(std::cin, contact[studentCount]);

    std::cout << "Enter Age: ";
    std::cin >> studentAge[studentCount];

    std::cout << "Enter Year Level: ";
    std::cin >> yearLevel[studentCount];

    std::cout << "Enter Average: ";
    std::cin >> average[studentCount];

    studentCount++;

    std::cout << "Student added successfully!\n";
}

void viewStudent()
{
    if (studentCount == 0)
    {
        std::cout << "No student records found.\n";
        return;
    }

    std::cout << "================================================================================\n";
    std::cout << "                            STUDENT RECORDS\n";
    std::cout << "================================================================================\n";

    std::cout << std::left
              << std::setw(15) << "Student ID"
              << std::setw(25) << "Name"
              << std::setw(18) << "Contact"
              << std::setw(8) << "Age"
              << std::setw(8) << "Year"
              << std::setw(10) << "Average"
              << "\n";
    std::cout << "================================================================================\n";

    for (int i = 0; i < studentCount; i++)
    {
        std::cout << std::left
                  << std::setw(15) << studentID[i]
                  << std::setw(25) << studentName[i]
                  << std::setw(18) << contact[i]
                  << std::setw(8) << studentAge[i]
                  << std::setw(8) << yearLevel[i]
                  << std::setw(10) << std::fixed << std::setprecision(2)
                  << average[i]
                  << "\n";
        std::cout << "================================================================================\n";
    }
}

void searchStudent()
{
    std::string id;
    bool found = false;

    std::cout << "Enter Student ID to Search: ";
    std::cin >> id;

    for (int i = 0; i < studentCount; i++)
    {
        if (studentID[i] == id)
        {
            std::cout << "Student Found!\n";
            std::cout << "Student ID : " << studentID[i] << '\n';
            std::cout << "Name       : " << studentName[i] << '\n';
            std::cout << "Contact    : " << contact[i] << '\n';
            std::cout << "Age        : " << studentAge[i] << '\n';
            std::cout << "Year Level : " << yearLevel[i] << '\n';
            std::cout << "Average    : " << std::fixed << std::setprecision(2) << average[i] << '\n';

            found = true;
            break;
        }
    }

    if (!found)
    {
        std::cout << "Student record not found.\n";
    }
}

void updateStudent()
{
    std::string id;
    bool found = false;

    std::cout << "Enter Student ID to Edit: ";
    std::cin >> id;

    for (int i = 0; i < studentCount; i++)
    {
        if (studentID[i] == id)
        {
            std::cout << "Editing Student: " << studentName[i] << '\n';
            std::cin.ignore();

            std::cout << "Enter New Student Name: ";
            std::getline(std::cin, studentName[i]);

            std::cout << "Enter New Contact: ";
            std::getline(std::cin, contact[i]);

            std::cout << "Enter New Age: ";
            std::cin >> studentAge[i];

            std::cout << "Enter New Year Level: ";
            std::cin >> yearLevel[i];

            std::cout << "Enter New Average: ";
            std::cin >> average[i];

            std::cout << "Student updated successfully!\n";

            found = true;
            break;
        }
    }

    if (!found)
    {
        std::cout << "Student not found.\n";
    }
}

void deleteStudent()
{
    std::string id;
    bool found = false;

    std::cout << "Enter Student ID to Delete (Example: 24-XXXX-XXX): ";
    std::cin >> id;

    for(int i = 0; i < studentCount; i++)
    {
        if(studentID[i] == id)
        {
            char confirm;

            std::cout << "Delete Student?\n";
            std::cout << "Student ID   : " << studentID[i] << '\n';
            std::cout << "Name         : " << studentName[i] << '\n';

            std::cout << "Are you sure? (Y/N): ";
            std::cin >> confirm;

            if(confirm == 'Y' || confirm == 'y')
            {
                for(int j = i; j < studentCount - 1; j++)
                {
                    studentID[j] = studentID[j + 1];
                    studentName[j] = studentName[j + 1];
                    contact[j] = contact[j + 1];
                    studentAge[j] = studentAge[j + 1];
                    yearLevel[j] = yearLevel[j + 1];
                    average[j] = average[j + 1];
                }

                studentCount--;

                std::cout << "Student record deleted successfully.\n";
            }
            else
            {
                std::cout << "Deletion cancelled.\n";
            }

            found = true;
            break;
        }
    }

    if(!found)
    {
        std::cout << "Student record not found.\n";
    }
}

void deleteAll()
{
    if (studentCount == 0)
    {
        std::cout << "There are no student records to delete.\n";
        return;
    }

    char confirm;

    std::cout << "WARNING: This will delete ALL student records.\n";
    std::cout << "Are you sure? (Y/N): ";
    std::cin >> confirm;

    if (confirm == 'Y' || confirm == 'y')
    {
        studentCount = 0;
        std::cout << "All student records have been deleted successfully.\n";
    }
    else
    {
        std::cout << "Deletion cancelled.\n";
    }
}