#include <iostream>
#include <string>
using namespace std;
class Student
{
private:
    string name;
    int rollNumber;
    string className;
    int division;
    string dateOfBirth;
    string bloodGroup;
    string contactAddress;
    string telephoneNumber;
    string drivingLicenseNumber;

public:
    void addStudent()
    {
        cout << "\nEnter the student information:\n";
        cin.ignore();
        cout << "Name: ";
        getline(cin, name);
        cout << "Roll Number: ";
        cin >> rollNumber;
        cin.ignore();
        cout << "Class: ";
        getline(cin, className);
        cout << "Division: ";
        cin >> division;
        cin.ignore();
        cout << "Date of Birth: ";
        getline(cin, dateOfBirth);
        cout << "Blood Group: ";
        getline(cin, bloodGroup);
        cout << "Contact Address: ";
        getline(cin, contactAddress);
        cout << "Telephone Number: ";
        getline(cin, telephoneNumber);
        cout << "Driving License Number: ";
        getline(cin, drivingLicenseNumber);
    }

    Student(string name = "",
            int rollNumber = 0,
            string className = "",
            int division = 0,
            string dateOfBirth = "",
            string bloodGroup = "",
            string contactAddress = "",
            string telephoneNumber = "",
            string drivingLicenseNumber = "")
    {
        this->name = name;
        this->rollNumber = rollNumber;
        this->className = className;
        this->division = division;
        this->dateOfBirth = dateOfBirth;
        this->bloodGroup = bloodGroup;
        this->contactAddress = contactAddress;
        this->telephoneNumber = telephoneNumber;
        this->drivingLicenseNumber = drivingLicenseNumber;
    }

    void display()
    {
        cout << "\n-----------------------------------";
        cout << "\nName: " << name;
        cout << "\nRoll Number: " << rollNumber;
        cout << "\nClass: " << className;
        cout << "\nDivision: " << division;
        cout << "\nDate of Birth: " << dateOfBirth;
        cout << "\nBlood Group: " << bloodGroup;
        cout << "\nContact Address: " << contactAddress;
        cout << "\nTelephone Number: " << telephoneNumber;
        cout << "\nDriving License Number: " << drivingLicenseNumber;
        cout << "\n------------------------------------";
    }

    friend class Faculty;
};

class Faculty
{
private:
    int ID;

public:
    Faculty(int ID = 0)
    {
        this->ID = ID;
    }

    void displayFaculty(Student &student, int f_d)
    {
        try
        {
            if (student.division == f_d)
            {
                student.display();
            }
            else
            {
                throw(student.division);
            }
        }
        catch (const std::exception &e)
        {
            cout << "Error : " << endl;
        }
    }
};

int main()
{
    Student student[5];
    Faculty faculty;

    int choice = 0, count = 0;

    while (true)
    {
        cout << "\n\n*** Student Information System ***\n";
        cout << "1. Add Data\n2. Display Data\n3. Exit\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            if (count < 5)
            {
                student[count].addStudent();
                count++;
            }
            else
            {
                cout << "\nDatabase is full!";
            }
            break;

        case 2:
            if (count > 0)
            {
                for (int i = 0; i < count; i++)
                {
                    student[i].display();
                }
            }
            else
            {
                cout << "\nDatabase is empty!";
            }
            break;

        case 3:
            exit(0);

        default:
            cout << "\nInvalid Choice!";
        }
    }

    return 0;
}
