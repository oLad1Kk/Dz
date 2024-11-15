#pragma once
#include "PublicationException.h"

class BookException : public PublicationException
{
private:
    string message;
public:
    BookException();
    BookException(string name, string message);

    void setMessage(string message);
    string getMessage()const;

    virtual void Message() const override;
};