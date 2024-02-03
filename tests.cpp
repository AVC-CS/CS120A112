// Test definitions. Do NOT edit this file!
#define CATCH_CONFIG_MAIN // defines main() automatically
#include <iostream>
#include "catch.hpp"
#include "main.hpp"
// tests for exercise 1

TEST_CASE("Ex1 ", "[example]")
{
	vector<Person> person;
	int length;

	makePerson(person);

	REQUIRE(person.size() == 100);
	printPerson(person);
	cout << "--------------------------------------------------\n";
}

TEST_CASE("Ex2 ", "[example]")
{
	vector<Person> person;
	int length;
	fstream ifs;
	Person p;
	unsigned long offset;
	Person *ptr;

	makePerson(person);
	writeFile(person);
	/****************************************************/
	ptr = getRecord(20);
	REQUIRE(ptr->no == 20);

	/****************************************************/
	ifs.open("Person.bin", ios::binary | ios::in);
	REQUIRE(!(ifs) == false);

	ifs.read((char *)&p, sizeof(Person));
	printOnePerson(p);
	REQUIRE(p.no == 1);
	/****************************************************/
	offset = sizeof(Person) * (50 - 1);
	ifs.seekg(offset, ios::beg);
	cout << sizeof(Person) << endl;
	cout << ifs.tellg() << endl;
	ifs.read((char *)&p, sizeof(Person));
	printOnePerson(p);
	REQUIRE(p.no == 50);
	/****************************************************/
	offset = sizeof(Person) * (27 - 1);
	ifs.seekg(offset, ios::beg);
	// cout << ifs.tellg() << endl;
	ifs.read((char *)&p, sizeof(Person));
	cout << p.email << "Email " << endl;
	printOnePerson(p);
	REQUIRE(p.name.first == "Louis");
	cout << "--------------------------------------------------\n";
	/****************************************************/
	ifs.close();
}
