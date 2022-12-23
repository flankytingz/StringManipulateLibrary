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

    char* add(char* s1, char* s2)
    {
        int length_s1 = flanky::length(s1);
        int length_s2 = flanky::length(s2);

        char* str = reinterpret_cast<char*>(malloc((sizeof(char) * (length_s1+length_s2 + 1))));

        for (int i = 0; i < length_s1; i++)
        {
            str[i] = s1[i];
        }

        for (int i = 0; i < length_s2; i++)
        {
            str[i + length_s1] = s2[i];
        }

        str[length_s1 + length_s2] = '\0';

        return str;
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

        return a[pos];
    }

    void setChar(char* a, int pos, const char& b)
    {
        if (pos > flanky::length(a))
        {
            return;
        }

        a[pos] = b;
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

    bool isGreater(char* a, char* b)
    {
        return (flanky::length(a) > flanky::length(b));
    }

    bool isSmaller(char* a, char* b)
    {
        return (flanky::length(a) < flanky::length(b));
    }
}

#endif //CS101_PROJECT_CHAR_H