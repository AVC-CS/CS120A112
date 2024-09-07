#include "main.hpp"

int main()
{
	vector<Person> person;
	int number;
	Person *p;

	makePerson(person);
	cout << "The number of record is " << person.size() << endl;
	printPerson(person);
	writeFile(person);

	/* Binary File Test */
	number = 90;
	p = getRecord(number);
	printOnePerson(*p);

	/* Binary File Test */
	number = 90;
	p = getRecord(number);
	printOnePerson(*p);
	/* Binary File Test */
	number = 27;
	p = getRecord(number);
	printOnePerson(*p);
	if (strcmp(p->name.first, "Louis") != 0)
		cout << "The record is not found" << endl;
}
