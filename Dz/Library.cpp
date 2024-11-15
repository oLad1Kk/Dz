#include "Library.h"

void Library::setName(string name)
{
	this->name = name;
}

string Library::getName() const
{
	return name;
}

void Library::showPublication() const
{
	for (auto item : library)
	{
		item->show();
		cout << "\n";
	}
}

void Library::addPublication(Publication* publication)
{
	library.push_back(publication);
	cout << "Publication added successfully\n";
}

void Library::deletePublication(int number)
{
	auto it = library.begin() + number - 1;
	library.erase(it);
	cout << "Item deleted successfully\n";
}

void Library::findPublication(string full_name)
{
	auto it = find_if(library.begin(), library.end(), [full_name](Publication* e)
		{
			return (e->getName() == full_name);
		});
	if (it != library.end())
	{
		cout << "Publication found\n\n";
		(*it)->show();
	}
	else
	{
		cout << "Publication not found\n\n";
	}
}
