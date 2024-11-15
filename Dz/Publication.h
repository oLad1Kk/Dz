#pragma once
#include <iostream>
using namespace std;

class Publication
{
	string name;
	string author;
	int publicationYear;
public:
	Publication();
	Publication(string name, string author, int publicatonYear);
	virtual ~Publication();

	void setName(string name);
	void setAuthor(string author);
	void setPublicationYear(int publicationYear);

	string getName()const;
	string getAuthor()const;
	int getPublicationYear()const;

	virtual void show()const = 0;
	virtual void makeDescription() = 0;
};

I am trying to change Vladyslav




