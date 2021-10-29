#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int sentence_num(string text, int n)
{
    int num = 0;
    int pos = 0;

    while (pos < n)
    {
        pos = text.find(".", pos);
        if (pos != 0)
            num++;
        else
            break;
    }

     while (pos < n)
    {
        pos = text.find("!", pos);
        if (pos != 0)
            num++;
        else
            break;
    }

     while (pos < n)
    {
        pos = text.find("?", pos);
        if (pos != 0)
            num++;
        else
            break;
    }

    return num;

}

int word_num(string text, int n)
{
    int num = 0;
    int pos = 0;

    while (pos < n)
    {
        pos = text.find(" ", pos);
        if (pos != 0)
            num++;
        else
            break;
    }

    return num + 1;
}

double word_length(string text, int num);
{
    len_str = text.size();
    len = 0;


    for (int i = 0, i < len, i++)
    {
        ///анализ по коду из кодовой таблицы
    }


}
int main()
{
    ifstream fin("input.txt");
    ofstream fout("output.txt");
    string text="", b;
    while(!fin.eof())
    {
        getline(fin, b);
        text+=" " + b;
    }
    text.erase(0, 1);


    int n = text.size();

    int words[n];
    int sentences[n];

    for (int i = 0; i < n; i++)
    {
        words[i] = 0;
        sentences[i] = 0;
    }

    int s_num = sentence_num(text, n);
    int w_num = word_num(text, n);
    double s_length = sentence_length(text);
    double w_length = word_length(text, w_num);

    fout << "number of sentences: " << s_num << endl;
    fout << "average sentence length: " << s_length << endl;
    fout << "number of words: " << w_num << endl;
    fout << "average word length: " << w_length << endl;


    return 0;
}
