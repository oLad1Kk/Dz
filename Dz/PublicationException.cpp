#include "PublicationException.h"

PublicationException::PublicationException()
{
	name = "undefined";
}

PublicationException::PublicationException(string name)
{
	this->name = name;
}

void PublicationException::setName(string name)
{
	this->name = name;
}

string PublicationException::getName() const
{
	return name;
}