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
        pos = text.find(".", pos+1);
        if (pos != -1)
            num++;
        else
            break;
    }

     while (pos < n)
    {
        pos = text.find("!", pos+1);
        if (pos != -1)
            num++;
        else
            break;
    }

     while (pos < n)
    {
        pos = text.find("?", pos+1);
        if (pos != -1)
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
        pos = text.find(" ", pos+1);
        if (pos != -1)
            num++;
        else
            break;
    }

    return num + 1;
}

double word_length(string text, double num)
{
    int len_str = text.size();
    double len = 0;


    for (int i = 0; i < len_str; i++)
    {
        if (text[i] != ' ' && text[i] != '.' && text[i] != ',' && text[i] != '?' && text[i] != '!' && text[i] != '-' && text[i] != ':' && text[i] != ';' && text[i] != '"')
            len++;
    }

    double ans = len / num;
    return ans;

}

int main()
{
    setlocale(0, "");

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


    double s_num = sentence_num(text, n);
    double w_num = word_num(text, n);
    double s_length = w_num / s_num;
    double w_length = word_length(text, w_num);

    fout << "number of sentences: " << s_num << endl;
    fout << "average sentence length: " << s_length << endl;
    fout << "number of words: " << w_num << endl;
    fout << "average word length: " << w_length << endl;


    return 0;
}
