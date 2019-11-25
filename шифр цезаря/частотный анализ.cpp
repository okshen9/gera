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

using namespace std;

#define _CRT_SECURE_NO_WARNINGS

int main() {
/*#ifdef _DEBUG
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif */
    string s, str;

    ifstream in("input.txt");
    while (getline(in, s))
        str += s;
    in.close();
    int f = 0;
    for (char i = 'а'; i <= 'я'; i++)
    {
        int count = 0;
        for (int k = 0; k < str.length(); k++)
        {
            if (str[k] == i || str[k] == i - '32')
                count++;
            f++;
        }

        cout << i << " встречается " << count << " раз(а)" << endl;
    }

    system("pause");
    return 0;
}
