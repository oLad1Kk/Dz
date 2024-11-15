#pragma once
#include <string>
#include "Publication.h"
class Book : public Publication
{
protected:
	string resume;
public:
	Book();
	Book(string name, string author, int publicatonYear, string resume);

	string getResume()const;
	void setResume(string resume);

	virtual void show()const override;
	virtual void makeDescription()override;
};

