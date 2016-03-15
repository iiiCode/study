#include <stdlib.h>
#include <iostream>
#include <string.h>
#include "String.h"

namespace stu {
    String::String()
    {
        mPtr = (char *)malloc(SIZE);
        strcpy(mPtr, "I'm String.");
    }

    String::String(String& other)
    {
        this->mPtr = (char *)malloc(strlen(other.mPtr));
        strcpy(this->mPtr, other.mPtr);
    }

    String::~String()
    {
        free(mPtr);
        mPtr = NULL;
    }

    void String::dump() const 
    {
        std::cout << mPtr << std::endl;
    }

    String& String::operator=(String& other)
    {
        free(this->mPtr);

        this->mPtr = (char *)malloc(strlen(other.mPtr));
        strcpy(this->mPtr, other.mPtr);

        return *this;
    }
} //namespace stu
