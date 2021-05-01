// Дано літерний рядок, який містить послідовність символів s0, ..., sn, ... .
// 1. Вияснити, чи є серед цих символів пара сусідніх букв “no” або “on”.
// 2. Замінити кожну пару сусідніх букв “no” трійкою зірочок “ ***”.
#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <iostream>

using namespace std;

void Change(char* str);

int main()
{
	char str[101];
	cout << "Enter string:" << endl;
	cin.getline(str, 100);
	Change(str);
    cout << endl;
    cout << str << endl;
}


void Change(char* str) {
    int i, j;
    int d;
    char str2[101]; // допоміжний масив

    j = 0; // поточна позиція в масиві str2
    d = strlen(str); // довжина рядка str

    for (i = 0; i < d; i++)
    {
        if (str[i] == 'n' && str[i+1] == 'o') // провірка на символи
        {
            str2[j++] = '*';
            str2[j++] = '*';
            str2[j++] = '*';
            i++; // заміна символів та пересування далі по рядку
        }
        else
        {
            str2[j++] = str[i]; // якщо не проходить умова, то символ записується в масив 
        }
    }

    str2[j] = '\0'; // додає символ кінця рядка
    strcpy(str, str2); // копіює допоміжний масив у вихідний
}