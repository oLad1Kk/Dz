#pragma once
#include <string>
using namespace std;

class PublicationException
{
protected:
	string name;
public:
	PublicationException();
	PublicationException(string name);

	void setName(string name);
	string getName()const;
	
	virtual void Message()const = 0;
};