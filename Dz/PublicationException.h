#pragma once
#include <string>
#include <iostream>
using namespace std;

class PublicationException
{
protected:
	string name;
public:
	PublicationException();
	PublicationException(string name);
	virtual ~PublicationException(){}

	void setName(string name);
	string getName()const;
	
	virtual void Message()const = 0;
};


