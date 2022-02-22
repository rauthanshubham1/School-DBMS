#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void lowerCaseConverter(string *str)
{
    for (int i = 0; i < str->length(); i++)
    {
        str->at(i) = char(tolower((str->at(i))));
    }
}

bool loginWindow()
{
    string loginUsername;
    int loginPassword;
    cout << "                                    ***************************************************************" << endl;
    cout << "                                    *                      Enter login username:-                 *" << endl;
    cout << "                                                                 ";
    cin >> loginUsername;
    cout << "                                    *                      Enter login password:-                 *" << endl;
    cout << "                                                                 ";
    cin >> loginPassword;
    cout << "                                    ***************************************************************" << endl;
    cout << endl;
    cout << endl;
    if (loginUsername == "shubham" && loginPassword == 12345)
    {
        return true;
    }
    else
    {
        return false;
    }
}

class ParentClassforNew
{
protected:
    string firstName;
    string lastName;
    int age;
    string state;

private:
public:
    void setName();
    void setAge();
    void setState();
};

void ParentClassforNew::setName()
{
    cout << "Enter first name:- ";
    cin >> firstName;
    cout << "Enter last name:- ";
    cin >> lastName;
}
void ParentClassforNew::setAge()
{
    cout << "Enter age:- ";
    cin >> age;
}
void ParentClassforNew::setState()
{
    cout << "Enter State:- ";
    cin >> state;
}

class ParentClassforSearch
{
private:
public:
    string Subject;
    int Age;
};

class Student : public ParentClassforNew
{
protected:
    // string firstName;
    // string lastName;
    // int age;
    // string state;
private:
    int studentId;
    int studyClass;
    char studySection;
    float mathsMarks;
    float scienceMarks;
    float englishMarks;
    float computerMarks;
    float craftMarks;

public:
    //  void setName();
    // void setAge();
    // void setState();
    void setId();
    void setMarks();
    void getDetail();
    void recordFeeder();
    void dataFinder(string str);
};

void Student::setId()
{
    cout << "Enter Student Id:- ";
    cin >> studentId;
    cout << "Enter Student Class and Section:- ";
    cin >> studyClass;
    cin >> studySection;
}
void Student::setMarks()
{
    cout << "Enter Maths Marks:- ";
    cin >> mathsMarks;
    cout << "Enter Science Marks:- ";
    cin >> scienceMarks;
    cout << "Enter English Marks:- ";
    cin >> englishMarks;
    cout << "Enter Computer Marks:- ";
    cin >> computerMarks;
    cout << "Enter Craft Marks:- ";
    cin >> craftMarks;
}
void Student::getDetail()
{
    cout << studentId << "       " << firstName << " " << lastName << "      " << studyClass << "-" << studySection << "         " << age << "       " << state << "         " << mathsMarks << "        " << scienceMarks << "      " << englishMarks << "      " << computerMarks << "        " << craftMarks << endl;
}
void Student::recordFeeder()
{
    ofstream write;
    write.open("studentData.txt", ios::app);
    if (write.is_open())
    {
        write << studentId << "           " << firstName << "" << lastName << "            " << studyClass << "-" << studySection << "              " << age << "        " << state << "           " << mathsMarks << "                " << scienceMarks << "                  " << englishMarks << "                  " << computerMarks << "                 " << craftMarks << endl;
        write.close();
    }
}
void Student::dataFinder(string str1)
{
    string str;
    ifstream read;
    read.open("studentData.txt", ios::in);
    if (read.is_open())
    {
        while (!read.eof())
        {
            getline(read, str);
            if (str.substr(0, 2) == str1)
            {
                cout << str << endl;
            }
        }
        read.close();
    }
}

class Teacher : public ParentClassforNew
{
protected:
    // string firstName;
    // string lastName;
    // int age;
    // string state;

private:
    int teacherId;
    int salary;
    string subjectSpecialised;
    int experience;
    string education;
    int teacherOfClass;
    char teacherOfSection;

public:
    // void enterName();
    // void enterAge();
    // void enterState();
    void setId();
    void setSalary();
    void setSubjectSpecialised();
    void setExperience();
    void setEducation();
    void setTeacherOfClass();
    void setTeacherOfSection();

    void getDetail();
    void recordFeeder();
    void dataFinder(string str1);
};

void Teacher::setId()
{
    cout << "Enter teacher id:- ";
    cin >> teacherId;
}
void Teacher::setSalary()
{
    cout << "Enter teacher salary:- ";
    cin >> salary;
}
void Teacher::setSubjectSpecialised()
{
    cout << "Enter teacher's subject specialised in:- ";
    cin >> subjectSpecialised;
}
void Teacher::setExperience()
{
    cout << "Enter teacher's experience:- ";
    cin >> experience;
}
void Teacher::setEducation()
{
    cout << "Enter teacher's education:- ";
    cin >> education;
}
void Teacher::setTeacherOfClass()
{
    cout << "Teacher of class:- ";
    cin >> teacherOfClass;
}
void Teacher::setTeacherOfSection()
{
    cout << "Teacher of section:- ";
    cin >> teacherOfSection;
}
void Teacher::getDetail()
{
    cout << teacherId << "               " << firstName << " " << lastName << "                    " << age << "                     " << salary << "                    " << subjectSpecialised << "                   " << experience << "                    " << education << "                " << teacherOfClass << "-" << teacherOfSection << endl;
}
void Teacher::recordFeeder()
{
    ofstream write;
    write.open("teacherData.txt", ios::app);
    if (write.is_open())
    {
        write << teacherId << "               " << firstName << " " << lastName << "                    " << age << "                     " << salary << "                    " << subjectSpecialised << "                   " << experience << "                    " << education << "                " << teacherOfClass << "-" << teacherOfSection << endl;
        ;
        write.close();
    }
}
void Teacher::dataFinder(string str1)
{
    string str;
    ifstream read;
    read.open("teacherData.txt", ios::in);
    if (read.is_open())
    {
        while (!read.eof())
        {
            getline(read, str);
            if (str.substr(0, 2) == str1)
            {
                cout << str << endl;
            }
        }
        read.close();
    }
}

int main()
{
    string data;
    string user;    //  for teacher or student
    string purpose; // for new or search
    string confirm;

    cout << "_______________________________________________________________________________________________________________________________________" << endl;
    cout << "|                                                                                                                                     |" << endl;
    cout << "|                                                                                                                                     |" << endl;
    cout << "|                                                        WELCOME TO DTU SCHOOL"
         << "                                                        |" << endl;
    cout << "|                                                                                                                                     |" << endl;
    cout << "|                               \"LOGIN AS TEACHER\"                                  \"LOGIN AS STUDENT\"                                |" << endl;
    cout << "|                                                                                                                                     |" << endl;
    cout << "|_____________________________________________________________________________________________________________________________________|" << endl;
    cout << endl;
    cout << endl;
    cout << "\t \t \t \t \t \t \tPlease enter type of user:-" << endl;
    cin >> user;
    lowerCaseConverter(&user);
    cout << endl;
    cout << endl;

    if (user == "teacher")
    {
        if (loginWindow())
        {
            cout << "***************************************************************************************************************************************" << endl;
            cout << endl;
            cout << endl;
            cout << "                                                    WELCOME TO TEACHER DASHBOARD" << endl;
            cout << endl;
            cout << "                                      \"NEW TEACHER\"                              \"SEARCH TEACHER\"                               " << endl;
            cout << endl;
            cout << "***************************************************************************************************************************************" << endl;
            cout << endl;
            cout << endl;
            cout << "\t \t \t \t \t \t \tPlease enter type of purpose:-" << endl;
            cin >> purpose;
            lowerCaseConverter(&purpose);

            if (purpose == "new" || purpose == "new teacher")
            {
            teacherLabel:
                Teacher *ptr = new Teacher;
                ptr->setName();
                ptr->setId();
                ptr->setAge();
                ptr->setState();
                ptr->setEducation();
                ptr->setSalary();
                ptr->setSubjectSpecialised();
                ptr->setExperience();
                ptr->setTeacherOfClass();
                ptr->setTeacherOfSection();
                ptr->getDetail();
                ;
                cout << endl;
                cout << endl;
                cout << "Do you want to save?" << endl;
                cin >> confirm;
                lowerCaseConverter(&confirm);
                if (confirm == "yes")
                {
                    ptr->recordFeeder();
                    cout << "Do yu want to add more new teachers?";
                    cin >> confirm;
                    lowerCaseConverter(&confirm);
                    if (confirm == "yes")
                    {
                        goto teacherLabel;
                    }
                    else if (confirm == "no")
                    {
                        cout << "Thank You!!" << endl;
                        delete ptr;
                        return 0;
                    }
                }
                else if (confirm == "no")
                {
                    delete ptr;
                    cout << "Please enter student info again" << endl;
                    goto teacherLabel;
                }
            }
            else if (purpose == "search" || purpose == "search student")
            {
                Teacher *ptr = new Teacher;
                string idOfTeacher;
                cout << "Please enter the id of teacher you want to find:- ";
                cin >> idOfTeacher;
                ptr->dataFinder(idOfTeacher);
            }
            else
            {
                cout << "Invalid input";
                return 0;
            }
        }
        else
        {
            cout << "Login credentials are incorrect !!" << endl;
            return 0;
        }
    }

    else if (user == "student")
    {
        if (loginWindow())
        {
            cout << "***************************************************************************************************************************************" << endl;
            cout << endl;
            cout << endl;
            cout << "                                                       WELCOME TO STUDENT DASHBOARD" << endl;
            cout << endl;
            cout << "                                       \"NEW STUDENT\"                                  \"SEARCH STUDENT\"                               " << endl;
            cout << endl;
            cout << "***************************************************************************************************************************************" << endl;
            cout << endl;
            cout << endl;
            cout << "\t \t \t \t \t \t \tPlease enter type of purpose:-" << endl;
            cin >> purpose;
            lowerCaseConverter(&purpose);
            if (purpose == "new" || purpose == "new student")
            {
            studentLabel:
                Student *ptr = new Student;
                ptr->setName();
                ptr->setId();
                ptr->setAge();
                ptr->setState();
                ptr->setMarks();
                cout << endl;
                ptr->getDetail();
                cout << endl;
                cout << "Do you want to save?" << endl;
                cin >> confirm;
                lowerCaseConverter(&confirm);
                if (confirm == "yes")
                {
                    ptr->recordFeeder();
                    cout << "Do yu want to add more new students? ";
                    cin >> confirm;
                    lowerCaseConverter(&confirm);
                    if (confirm == "yes")
                    {
                        goto studentLabel;
                    }
                    else if (confirm == "no")
                    {
                        cout << "Thank You!!" << endl;
                        delete ptr;
                        return 0;
                    }
                }
                else if (confirm == "no")
                {
                    delete ptr;
                    cout << "Please enter student info again" << endl;
                    goto studentLabel;
                }
            }
            else if (purpose == "search" || purpose == "search student")
            {
                Student *ptr = new Student;
                string idOfStudent;
                cout << "Please enter the id of student you want to find:- ";
                cin >> idOfStudent;
                ptr->dataFinder(idOfStudent);
            }
            else
            {
                cout << "Invalid input";
                return 0;
            }
        }
        else
        {
            cout << "Login credentials are incorrect !!" << endl;
            return 0;
        }
    }

    else
    {
        cout << "INVALID USER" << endl;
        return 0;
    }

    return 0;
}