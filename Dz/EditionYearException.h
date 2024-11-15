#pragma once
#include "PublicationException.h"

class EditionYearException : public PublicationException
{
private:
    int year;
public:
    EditionYearException();
    EditionYearException(string name, int year);
    
    void setYear(int year);
    int getYear()const;

    virtual void Message() const override;
};