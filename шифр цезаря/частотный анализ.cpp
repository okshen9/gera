//
//  частотный анализ.cpp
//  шифр цезаря
//
//  Created by Артём Нешко on 25/11/2019.
//  Copyright © 2019 Артём Нешко. All rights reserved.
//

#include <iostream>
#include <string>
#include <fstream>
#include <wchar.h>

using namespace std;

#define _CRT_SECURE_NO_WARNINGS

int main() {
/*#ifdef _DEBUG
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif */
    
    setlocale(LC_ALL, "ru_RU.utf8");
    string s, str;

    ifstream in("input.txt");
    while (getline(in, s))
        str += s;
    in.close();
    int f = 0;
    for (wchar_t i = L'а'; i <= L'я'; i++)
    {
        int count = 0;
        for (int k = 0; k < str.length(); k++)
        {
            if (str[k] == i || str[k] == i - L'32')
                count++;
            f++;
        }

        cout << i << " встречается " << count << " раз(а)" << endl;
    }

    system("pause");
    return 0;
}
