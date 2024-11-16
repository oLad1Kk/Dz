#pragma once
#include "Publication.h"
#include <vector>
#include <iostream>
#include <string>
using namespace std;

class Magazine :
    public Publication
{
    vector<string> articles;    
public:
    Magazine();

    void addArticle(string article);
    vector<string> getArticles()const;
    void makeDescription();
    void show()const;
};

