#pragma once
#include <string>
#include <vector>
#include "Publication.h"
using namespace std;


class Library
{

	string name;
	vector<Publication*>library;
public:
	void setName(string name);
	string getName()const;

	void showPublication()const;
	void addPublication(Publication* publication);
	void deletePublication(int number);
	void findPublication(string full_name);
};
