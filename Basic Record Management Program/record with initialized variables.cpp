/* Implementing a basic record management program */

// Importing Libraries iostream and string
#include <iostream>
#include <string>

using namespace std;

// Starting by defining the function
struct Record
{
    string name;
    int age;
    string id;
};

// Record creation function
Record createRecord(string name, int age, string id)
{
    Record record;
    record.name = name;
    record.age = age;
    record.id = id;
    return record;
}

// This is the function that will display the data entered
void printRecord(const Record &record)
{
    cout << "Name: " << record.name << endl;
    cout << "Age: " << record.age << endl;
    cout << "ID: " << record.id << endl;
}

// The main function
int main()
{
    // Declaring and initializing variables
    string name = "Peter the great";
    int age = 25;
    string id = "W456";

    // Createing a record
    Record person = createRecord(name, age, id);

    // Displaying it
    printRecord(person);

    return 0;
}