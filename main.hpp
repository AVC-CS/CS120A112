#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <sstream>
#include <vector>
using namespace std;
struct Name
{
    char first[15];
    char last[15];
};
struct Bdate
{
    int year;
    int month;
    int day;
};
struct Person
{
    int no;
    char ID[20];
    Name name;
    char email[35];
    char gender[10];
    char phone[20];
    Bdate bdate;
    char jobtitle[50];
};

void makePerson(vector<Person> &);
void printPerson(vector<Person>);
void printOnePerson(Person person);
void writeFile(vector<Person>);
Person *getRecord(int);

void makePerson(vector<Person> &person)
{
    /*
    This function is used to make the person vector.
    */
}
void printPerson(vector<Person> person)
{
    vector<Person>::iterator it;
    printf("NO\tID\t\tName\t\t\tEmail\t\tPhone\t\t\tBirthday\t\t\t\tJobtitle\n");
    for (it = person.begin(); it != person.end(); it++)
    {
        cout << it->no << "\t";
        cout << it->ID << "\t";
        cout << it->name.first << " "
             << it->name.last << "\t";
        cout << it->email << "\t";
        cout << it->phone << "\t";
        cout << it->bdate.year << "\t"
             << it->bdate.month << "\t"
             << it->bdate.day << "\t";
        cout << it->jobtitle << endl;
    }
    cout << "**************************************************\n";
}
void printOnePerson(Person person)
{
    printf("NO\tID\t\tName\t\t\tEmail\t\tPhone\t\t\tBirthday\t\t\t\tJobtitle\n");
    cout << person.no << "\t";
    cout << person.ID << "\t";
    cout << person.name.first << "\t"
         << person.name.last << "\t";
    cout << person.email << "\t";
    cout << person.phone << "\t";
    cout << person.bdate.year << "\t"
         << person.bdate.month << "\t"
         << person.bdate.day << "\t";
    cout << person.jobtitle << endl;
    cout << "**************************************************\n";
}
void writeFile(vector<Person> person)
{
    /*
    This function is used to write the person vector to the binary file.
    The file name is "Person.bin".
    */
}
Person *getRecord(int number)
{
    /*
    This function is used to get the record of the person vector.
    */
    Person *p;

    p = (Person *)malloc(sizeof(Person));

    return p;
}
/*******************************
 * Code your program here
 *******************************/