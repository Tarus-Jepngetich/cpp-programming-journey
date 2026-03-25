#include <iostream>
#include <string>
/* basic record management program-User Interraction*/
using namespace std;

// Starting by defining the function
struct Record
{
    string name;
    int age;
    string id;
    string program;
};

// we get inputs from the user
string getName()
{
    string name;
    cout << "Please enter student name: ";
    getline(cin, name);
    return name;
}

int getAge()
{
    int age;
    cout << "Please enter student age numerical and should be positive number: ";
    cin >> age;
    cin.ignore();
    return age;
}

string getID()
{
    string id;
    cout << "Please enter student ID: ";
    getline(cin, id);
    return id;
}

string getProgram()
{
    string program;
    cout << "Please enter student program: ";
    getline(cin, program);
    return program;
}
// creating the record
Record createRecord(string name, int age, string id, string program)
{
    Record record;
    record.name = name;
    record.age = age;
    record.id = id;
    record.program = program;
    return record;
}
// Here we show what the user had input
void printRecord(const Record &record)
{
    cout << "Name: " << record.name << endl;
    cout << "Age: " << record.age << endl;
    cout << "ID: " << record.id << endl;
    cout << "Program: " << record.program << endl;
}
// The main function
int main()
{
    string name = getName();
    int age = getAge();
    string id = getID();
    string program = getProgram();

    Record student = createRecord(name, age, id, program);

    printRecord(student);

    return 0;
}