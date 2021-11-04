#include <iostream>
#include <string>
#include <windows.h>
#include <fstream>

using namespace std;

string BWordsAmount(string str)
{

    int bWordsAmount = 0;
    string str1 = str;
    int wordsAmount = 0;



    ifstream fin("message.txt");
    int n;
    fin >> n;
    fin.ignore();
    string endings[n];

    for (int i = 0; i < n; i++)
    {
        string st;
        getline(fin, st);
        endings[i] = st;
    }


    while (str1.length() != 0)
    {
        while (str1.length() != 0 && str1[0] == ' ')  ///удаление разделителя
        {
            str1.erase(0, 1);
        }

		string x;
		x = str1.substr(0, str1.find(' '));           ///формирование слова

		str1.erase(0, str1.find(' '));                ///удаление слова из исходной строки

        if(x.find_first_of(",.!?") != string::npos)
            x.erase(x.find_first_of(",.!?"), 1);
        if(x[0] < -32)
            x[0] = x[0]+32;
        for(int i = 0; i < n; i++)
        {
            if(endings[i][0] < -32)
                endings[i][0] = endings[i][0]+32;
            if(x == endings[i])
            {
                bWordsAmount++;
                break;
            }
        }
        wordsAmount++;
    }

    return "Количество заимствованных слов: "+ to_string(bWordsAmount) +"\n% соотношение заимствованных слов ко всем словам: " + to_string(1.0*bWordsAmount/wordsAmount*100.0) + "%";
}


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    ifstream fin("input.txt");
    ofstream fout("output.txt");
    string text="", b;
    while(!fin.eof())
    {
        getline(fin, b);
        text+=" " + b;
    }
    text.erase(0, 1);
    fout<< BWordsAmount(text);

    return 0;
}
