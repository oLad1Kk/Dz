#include "Publication.h"

Publication::Publication()
{
    this->name = "undefined";
    this->author = "undefined";
    this->publicationYear = 0;
}

Publication::Publication(string name, string author, int publicatonYear)
{
    this->name = name;
    this->author = author;
    this->publicationYear = publicatonYear;
}

Publication::~Publication()
{
}

void Publication::setName(string name)
{
    this->name = name;
}

void Publication::setAuthor(string author)
{
    this->author = author;
}

void Publication::setPublicationYear(int publicationYear)
{
    this->publicationYear = publicationYear;
}

string Publication::getName() const
{
    return name;
}

string Publication::getAuthor() const
{
    return author;
}

int Publication::getPublicationYear() const
{
    return publicationYear;
}
