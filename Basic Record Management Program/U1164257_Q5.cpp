#include <iostream>
#include <string>
/* basic record management program-Using array to manage many entries */
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
    cout << "Please enter full student names: ";
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
    cout << record.name << endl;
    cout << record.age << endl;
    cout << record.id << endl;
    cout << record.program << endl;
}
// The main function
int main()
{
    Record records[3];

    for (int i = 0; i < 3; i++)
    {
        string name = getName();
        int age = getAge();
        string id = getID();
        string program = getProgram();

        records[i] = createRecord(name, age, id, program);

        cout << endl;
        printRecord(records[i]);
        cout << endl;
    }

    cout << "All records stored:" << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << records[i].name << ", "
             << records[i].age << ", "
             << records[i].id << ", "
             << records[i].program << endl;
    }

    return 0;
}