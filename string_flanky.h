#ifndef CS101_PROJECT_STRING_FLANKY_H
#define CS101_PROJECT_STRING_FLANKY_H

namespace flanky
{
    int length(char* str)
    {
        int length = 0;
        while (*str != '\0')
        {
            length++;
            str++;
        }
        return length;
    }

    char* add(char* str1, char* str2)
    {
        const int length_s1 = flanky::length(str1);
        const int length_s2 = flanky::length(str2);

        char* str = reinterpret_cast<char*>(malloc((sizeof(char) * (length_s1+length_s2 + 1))));

        for (int i = 0; i < length_s1; i++)
        {
            str[i] = str1[i];
        }

        for (int i = 0; i < length_s2; i++)
        {
            str[i + length_s1] = str2[i];
        }

        str[length_s1 + length_s2] = '\0';

        return str;
    }

    void addEql(char* str1, char* str2)
    {
        while (*str1 != '\0')
        {
            str1++;
        }
        while (*str2 != '\0')
        {
            *str1 = *str2;
            str1++;
            str2++;
        }
        *str1 = '\0';
    }

    char getChar(char* str, int pos)
    {
        if (pos > length(str))
        {
            return '\0';
        }

        return str[pos];
    }

    void setChar(char* str, int pos, const char& letter)
    {
        if (pos > flanky::length(str))
        {
            return;
        }

        str[pos] = letter;
    }

    bool isEqual(char* str1, char* str2)
    {
        if (flanky::length(str1) != flanky::length(str2))
            return false;

        for (int i = 0; i < flanky::length(str1); i++)
            if (*str1 != *str2)
                return false;
            else
                str1++,str2++;

        return true;
    }

    bool isGreater(char* str1, char* str2)
    {
        return (flanky::length(str1) > flanky::length(str2));
    }

    bool isSmaller(char* str1, char* str2)
    {
        return (flanky::length(str1) < flanky::length(str2));
    }

    char* getSubstring(char* str, const int pos, const int n)
    {
        if (pos > n) return nullptr;
        if (n > flanky::length(str)) return nullptr;
        if (n < 1) return nullptr;

        char* sub_str = reinterpret_cast<char*>(malloc((sizeof(char) * (n + 1))));

        for (int i = pos; i < n; i++) {
            sub_str[i - pos] = str[i];
            str[i] = '\0';
        }

        sub_str[n] = '\0';

        return sub_str;
    }

    char* shiftLeft(char* str, const int n = 1)
    {
        if (n > flanky::length(str)) return nullptr;
        if (n < 1) return nullptr;

        char* sub_str = reinterpret_cast<char*>(malloc((sizeof(char) * (n + 1))));

        for (int i = 0; i < n; i++)
        {
            sub_str[i] = str[i];
            str[i] = '\0';
        }

        sub_str[n] = '\0';

        return sub_str;
    }

    char* shiftRight(char* str, const int n = 1)
    {
        const int length_str = flanky::length(str);
        if (n > length_str) return nullptr;
        if (n < 1) return nullptr;

        char* sub_str = reinterpret_cast<char*>(malloc((sizeof(char) * (n + 1))));

        for (int i = 0; i < n; i++)
        {
            sub_str[i] = str[(length_str - 1) - i];
            str[(length_str - 1) - i] = '\0';
        }

        sub_str[n] = '\0';

        return sub_str;
    }
}

#endif //CS101_PROJECT_STRING_FLANKY_H