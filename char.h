//
// Created by Flanky on 12/21/2022.
//

#ifndef CS101_PROJECT_CHAR_H
#define CS101_PROJECT_CHAR_H

namespace flanky
{
    int length(char* a)
    {
        int length = 0;
        while (*a != '\0')
        {
            length++;
            a++;
        }
        return length;
    }

    void addEql(char* a, char* b)
    {
        while (*a != '\0')
        {
            a++;
        }
        while (*b != '\0')
        {
            *a = *b;
            a++;
            b++;
        }
        *a = '\0';
    }

    char getChar(char* a, int pos)
    {
        if (pos > length(a))
        {
            return '\0';
        }

        while (pos != 0)
        {
            a++;
            pos--;
        }
        return *a;
    }

    void setChar(char* a, int pos, const char& b)
    {
        if (pos > length(a))
        {
            return;
        }

        while (pos != 0)
        {
            a++;
            pos--;
        }
        *a = b;
    }

    bool isEqual(char* a, char* b)
    {
        if (flanky::length(a) != flanky::length(b))
            return false;

        for (int i = 0; i < flanky::length(a); i++)
            if (*a != *b)
                return false;
            else
                a++,b++;

        return true;
    }
}

#endif //CS101_PROJECT_CHAR_H