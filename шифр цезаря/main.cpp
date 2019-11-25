//
//  main.cpp
//  шифр цезаря
//
//  Created by Артём Нешко on 25/11/2019.
//  Copyright © 2019 Артём Нешко. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    string str;
    string str1;
    int key;
    
    cout << "Введите сдвиг:" << endl;
    cin >> key;
    cout << "Введите строку:" << endl;
    cin >> str;
    str1 = str;
    
    for (int i = 0; i < str1.size(); i++)
    {
        if (str1[i] >= 'A' && str1[i] <= 'Z')
        {
            str1[i] += key;
            if (int(str1[i]) > 90)
                str1[i] = 65 + str1[i] - 90 - 1;
        }
        else if (str1[i] >= 'a' && str1[i] <= 'z')
        {
            str1[i] += key;
            if (int(str1[i]) > 122)
                str1[i] = 97 + str1[i] - 122 - 1;

        }
        else if (str1[i] >= -32 && str1[i] <= -1)
        {
            str1[i] += key;
            if (int(str1[i]) > -1)
                str[i] = -32 + str[i];
        }
        else if (str1[i] >= -64 && str1[i] <= -33)
        {
            str1[i] += key;
            if (int(str1[i]) > -33)
                str1[i] = -33 + str1[i] + 1;
        }
    }

    str = str1;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] -= key;
            if (int(str[i]) < 65)
                str[i] = 90 - (65 - str[i]);
        }
        else if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -= key;
            if (int(str[i]) < 97)
                str[i] = 122 - (97 - str[i]);
        }
        else if (str[i] >= -32 && str[i] <= -1)
        {
            str[i] -= key;
            if (int(str[i]) < -32)
                str[i] = str[i] + 32;
        }
        else if (str[i] >= -64 && str[i] <= -33)
        {
            str[i] -= key;
            if (int(str[i]) < -64)
                str[i] = str[i] + 64 - 32;
        }
    }
        cout << "Зашифрованное сообщение:" << endl;
        cout << str1 << endl;
    cout << "Дешифрованное сообщение:" << endl;
    cout << str << endl;
    
    return 0;
}
