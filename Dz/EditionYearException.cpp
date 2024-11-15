#include "EditionYearException.h"

EditionYearException::EditionYearException()
{
	year = 0;
}

EditionYearException::EditionYearException(string name, int year)
	: PublicationException(name)
{
	this->year = year;
}

void EditionYearException::setYear(int year)
{
	this->year = year;
}

int EditionYearException::getYear() const
{
	return year;
}

void EditionYearException::Message() const
{
	cout << "Name: " << name << endl;
	cout << "Year: " << year << endl;
}
