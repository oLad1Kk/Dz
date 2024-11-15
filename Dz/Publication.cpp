#include "Publication.h"

Publication::Publication()
{
    this->name = "undefined";
    this->author = "undefined";
    this->publicationYear = 0;
}

Publication::Publication(string name, string author, int publicatonYear)
{
    if (name == "")
        throw new BookException("Name: ","absent");
    this->name = name;

    if (author == "")
        throw new BookException("Author: ", "absent");
    this->author = author;

    if (publicatonYear<=0)
        throw new BookException("Publicaton Year: ", to_string(getPublicationYear()));
    this->publicationYear = publicatonYear;
}

Publication::~Publication()
{
}

void Publication::setName(string name)
{
    if (name == "")
        throw new BookException("Name: ", "absent");
    this->name = name;
}

void Publication::setAuthor(string author)
{
    if (author == "")
        throw new BookException("Author: ", "absent");
    this->author = author;
}

void Publication::setPublicationYear(int publicationYear)
{
    if (publicationYear <= 0)
        throw new BookException("Publicaton Year: ", to_string(getPublicationYear()));
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
