#include "EditionYearException.h"
#include "BookException.h"
#include "Library.h"
#include "Magazine.h"
#include "Book.h"



void errorFunciton1()
{
	Publication* publication1 = new Book("", "J.K.Roaling", 1989, "Very good book");
}
void errorFunciton2()
{
	Publication* publication1 = new Book("HArry Potter", "", 1989, "Very good book");
}
void errorFunciton3()
{
	Publication* publication1 = new Book("HArry Potter", "Roaling", -1, "Very good book");
}
void errorFunciton4()
{
	Publication* publication1 = new Book("HArry Potter", "Roaling", 1989, "");
}

int main()
{
	try
	{

		Publication* publication1 = new Book("Harry Potter", "J.K.Roaling", 1989, "Very good book");
		Publication* publication2 = new Book("Harry Potter 2", "J.K.Roaling", 1990, "Excelent book");
		Publication* publication3 = new Book("Harry Potter 3", "J.K.Roaling", 1991, "Pretty good book");
		Library library;
		library.addPublication(publication1);
		library.addPublication(publication2);
		library.addPublication(publication3);
		library.deletePublication(2);
		cout << "\n";
		library.showPublication();
		library.findPublication("Harry Potter");
		Magazine magazine;
		magazine.addArticle("Solar panels turn sunlight into electricity through photovoltaic cells. They generate clean, renewable energy. Even on cloudy days, they still produce some power.");
		magazine.addArticle("Plan your code before writing. Keep it clean and well-commented. Use tools like Git to manage your progress.");
		magazine.makeDescription();
		magazine.show();

	}
	catch (PublicationException* exception)
	{
		cout << "Exception\n";
		exception->Message();
		cout << "\n";
	}

	try
	{
		errorFunciton1();
	}
	catch (PublicationException* exception)
	{
		cout << "Exception\n";
		exception->Message();
		cout << "\n";
	}

	try
	{
		errorFunciton2();
	}
	catch (PublicationException* exception)
	{
		cout << "Exception\n";
		exception->Message();
		cout << "\n";
	}

	try
	{
		errorFunciton3();
	}
	catch (PublicationException* exception)
	{
		cout << "Exception\n";
		exception->Message();
		cout << "\n";
	}

	try
	{
		errorFunciton4();
	}
	catch (PublicationException* exception)
	{
		cout << "Exception\n";
		exception->Message();
		cout << "\n";
	}
}



