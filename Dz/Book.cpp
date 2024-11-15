#include "Book.h"

Book::Book()
{
	resume = "undefined";
}

Book::Book(string name, string author, int publicatonYear, string resume):Publication(name, author, publicatonYear)
{
	if (resume == "")
		throw new BookException("Resume: ", "absent");
	this->resume = resume;
}

string Book::getResume() const
{
	return resume;
}

void Book::setResume(string resume)
{
	if (resume == "")
		throw new BookException("Resume: ", "absent");
	this->resume = resume;
}

void Book::show() const
{
	cout << "Name: " << Publication::getName() << endl;
	cout << "Author: " << Publication::getAuthor() << endl;
	cout << "Publicaton Year: " << Publication::getPublicationYear() << endl; 
	cout << "Resume: " << resume << endl;
}

void Book::makeDescription()
{
	string name, author, resume;
	int publicatonYear;
	cout << endl << "Name: ";
	cin >> name;
	setName(name);
	cout <<endl<< "Author: ";
	cin >> author;
	setAuthor(author);
	cout << endl << "Publicaton Year: ";
	cin >> publicatonYear;
	setPublicationYear(publicatonYear);
	cout << endl << "Resume: ";
	cin >> resume;
	setResume(resume);
}
