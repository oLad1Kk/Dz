#include "BookException.h"

BookException::BookException()
{
	message = "undefined";
}

BookException::BookException(string name, string message)
	: PublicationException(name)
{
	this->message = message;
}

void BookException::setMessage(string message)
{
	this->message = message;
}

string BookException::getMessage() const
{
	return message;
}

void BookException::Message() const
{
	cout << "Name: " << name;
	cout << "Message: " << message;
}