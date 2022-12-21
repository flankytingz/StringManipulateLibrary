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
        if (pos > flanky::length(a))
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
}

#endif //CS101_PROJECT_CHAR_H