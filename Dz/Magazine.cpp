#include "Magazine.h"
#include "BookException.h"

Magazine::Magazine()
{
    
}

void Magazine::addArticle(string article)
{
    if (article == "") throw new BookException("Article", "The article string is empty");
    else
    {
        articles.push_back(article);
        cout << "Article added successfully\n";
    }
}

vector<string> Magazine::getArticles() const
{
    return articles;
}

void Magazine::makeDescription()
{
    cout << "Making description: \n";
    while (true)
    {
        cout << "---------------------------\n";
        cout << "| 1 - add article          |\n";
        cout << "| 2 - finish description   |\n";
        cout << "---------------------------\n";
        short choice;
        cout << "Enter action: ";
        cin >> choice;
        bool isExit = false;
        switch (choice)
        {
            case (1) :
            {
                string article;
                cout << "Enter Article: \n"; cin.ignore(); getline(cin, article);
                if (article == "") throw new BookException("Article", "The article string is empty");
                else
                {
                    articles.push_back(article);
                    cout << "Article added successfully\n";
                }
                break;
            }
            case (2) :
            {
                cout << "Magazine description created successfully\n\n";
                isExit = true;
                break;
            }
        default:
            cout << "Error\n";
            break;
        }
        if (isExit) break;
    }
}

void Magazine::show() const
{
    for (int i = 0; i < articles.size(); i++)
    {
        cout << "Article #" << i + 1 << endl;
        cout << articles[i];
        cout << "\n\n";
    }
}
