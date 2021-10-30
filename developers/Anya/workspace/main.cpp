#include <iostream>
#include <string>
#include <ctype.h>
#include <windows.h>


using namespace std;


int main()
{
    setlocale(0, "");

    string text;
    getline(cin, text);
    for(int i = 0; text[i]; i++)
    {
        text[i] = tolower(text[i]);
    }

    cout << text;
    return 0;
}
