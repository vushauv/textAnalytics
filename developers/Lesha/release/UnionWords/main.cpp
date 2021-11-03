#include <fstream>
#include <string>
#include <windows.h>

using namespace std;

int Cs1(string st)
{
    int n = 0;
    string letters = "абвгдеёжзийклмнопрстуфхцчшщъыьэюяАБВГДЕЁЖЗИЙКЛМНОПРСТУФХЦЧШЩЪЫЬЭЮЯ-";
    string w = "что чего чему чем чём Что Чего Чему Чем Чём",w1 = w;
    while(!st.empty())
    {
        while(letters.find(st[0]) == string::npos)
            st.erase(0,1);
        int i = 0;
        while(letters.find(st[i]) != string::npos)
            i++;
        string x = st.substr(0,i);
        st.erase(0,i+1);
        w = w1;
        while(!w.empty())
        {
            if(w[0] == ' ')
                w.erase(0,1);
            if(w.substr(0,w.find(' ')) == x)
            {
                n++;
            }
            w.erase(0,w.find(' '));
        }
        if (st.length() < 2)
            st.clear();
    }
    return n;
}

int Cs2(string st)
{
    int n = 0;
    string letters = "абвгдеёжзийклмнопрстуфхцчшщъыьэюяАБВГДЕЁЖЗИЙКЛМНОПРСТУФХЦЧШЩЪЫЬЭЮЯ-";
    string w = "кто кому кого кем ком Кто Кому Кого Кем Ком",w1 = w;
    while(!st.empty())
    {
        while(letters.find(st[0]) == string::npos)
            st.erase(0,1);
        int i = 0;
        while(letters.find(st[i]) != string::npos)
            i++;
        string x = st.substr(0,i);
        st.erase(0,i+1);
        w = w1;
        while(!w.empty())
        {
            if(w[0] == ' ')
                w.erase(0,1);
            if(w.substr(0,w.find(' ')) == x)
            {
                n++;
            }
            w.erase(0,w.find(' '));
        }
        if (st.length() < 2)
            st.clear();
    }
    return n;
}

int Cs3(string st)
{
    int n = 0;
    string letters = "абвгдеёжзийклмнопрстуфхцчшщъыьэюяАБВГДЕЁЖЗИЙКЛМНОПРСТУФХЦЧШЩЪЫЬЭЮЯ-";
    string w = "сколько скольких скольким сколькими Сколько Скольких Скольким Сколькими",w1 = w;
    while(!st.empty())
    {
        while(letters.find(st[0]) == string::npos)
            st.erase(0,1);
        int i = 0;
        while(letters.find(st[i]) != string::npos)
            i++;
        string x = st.substr(0,i);
        st.erase(0,i+1);
        w = w1;
        while(!w.empty())
        {
            if(w[0] == ' ')
                w.erase(0,1);
            if(w.substr(0,w.find(' ')) == x)
            {
                n++;
            }
            w.erase(0,w.find(' '));
        }
        if (st.length() < 2)
            st.clear();
    }
    return n;
}

int Cs4(string st)
{
    int n = 0;
    string letters = "абвгдеёжзийклмнопрстуфхцчшщъыьэюяАБВГДЕЁЖЗИЙКЛМНОПРСТУФХЦЧШЩЪЫЬЭЮЯ-";
    string w = "который которое которая которые которого которой которых которому которым которою которыми котором Который Которое Которая Которые Которого Которой Которых Которому Которым Которою Которыми Котором",w1 = w;
    while(!st.empty())
    {
        while(letters.find(st[0]) == string::npos)
            st.erase(0,1);
        int i = 0;
        while(letters.find(st[i]) != string::npos)
            i++;
        string x = st.substr(0,i);
        st.erase(0,i+1);
        w = w1;
        while(!w.empty())
        {
            if(w[0] == ' ')
                w.erase(0,1);
            if(w.substr(0,w.find(' ')) == x)
            {
                n++;
            }
            w.erase(0,w.find(' '));
        }
        if (st.length() < 2)
            st.clear();
    }
    return n;
}

int Cs5(string st)
{
    int n = 0;
    string letters = "абвгдеёжзийклмнопрстуфхцчшщъыьэюяАБВГДЕЁЖЗИЙКЛМНОПРСТУФХЦЧШЩЪЫЬЭЮЯ-";
    string w = "какой какое какая какие какого каких какому каким какую какою какими каком Какой Какое Какая Какие Какого Каких Какому Каким Какую Какою Какими Каком",w1 = w;
    while(!st.empty())
    {
        while(letters.find(st[0]) == string::npos)
            st.erase(0,1);
        int i = 0;
        while(letters.find(st[i]) != string::npos)
            i++;
        string x = st.substr(0,i);
        st.erase(0,i+1);
        w = w1;
        while(!w.empty())
        {
            if(w[0] == ' ')
                w.erase(0,1);
            if(w.substr(0,w.find(' ')) == x)
            {
                n++;
            }
            w.erase(0,w.find(' '));
        }
        if (st.length() < 2)
            st.clear();
    }
    return n;
}

int Cs6(string st)
{
    int n = 0;
    string letters = "абвгдеёжзийклмнопрстуфхцчшщъыьэюяАБВГДЕЁЖЗИЙКЛМНОПРСТУФХЦЧШЩЪЫЬЭЮЯ-";
    string w = "как Как",w1 = w;
    while(!st.empty())
    {
        while(letters.find(st[0]) == string::npos)
            st.erase(0,1);
        int i = 0;
        while(letters.find(st[i]) != string::npos)
            i++;
        string x = st.substr(0,i);
        st.erase(0,i+1);
        w = w1;
        while(!w.empty())
        {
            if(w[0] == ' ')
                w.erase(0,1);
            if(w.substr(0,w.find(' ')) == x)
            {
                n++;
            }
            w.erase(0,w.find(' '));
        }
        if (st.length() < 2)
            st.clear();
    }
    return n;
}

int Cs7(string st)
{
    int n = 0;
    string letters = "абвгдеёжзийклмнопрстуфхцчшщъыьэюяАБВГДЕЁЖЗИЙКЛМНОПРСТУФХЦЧШЩЪЫЬЭЮЯ-";
    string w = "где Где",w1 = w;
    while(!st.empty())
    {
        while(letters.find(st[0]) == string::npos)
            st.erase(0,1);
        int i = 0;
        while(letters.find(st[i]) != string::npos)
            i++;
        string x = st.substr(0,i);
        st.erase(0,i+1);
        w = w1;
        while(!w.empty())
        {
            if(w[0] == ' ')
                w.erase(0,1);
            if(w.substr(0,w.find(' ')) == x)
            {
                n++;
            }
            w.erase(0,w.find(' '));
        }
        if (st.length() < 2)
            st.clear();
    }
    return n;
}

int Cs8(string st)
{
    int n = 0;
    string letters = "абвгдеёжзийклмнопрстуфхцчшщъыьэюяАБВГДЕЁЖЗИЙКЛМНОПРСТУФХЦЧШЩЪЫЬЭЮЯ-";
    string w = "зачем Зачем",w1 = w;
    while(!st.empty())
    {
        while(letters.find(st[0]) == string::npos)
            st.erase(0,1);
        int i = 0;
        while(letters.find(st[i]) != string::npos)
            i++;
        string x = st.substr(0,i);
        st.erase(0,i+1);
        w = w1;
        while(!w.empty())
        {
            if(w[0] == ' ')
                w.erase(0,1);
            if(w.substr(0,w.find(' ')) == x)
            {
                n++;
            }
            w.erase(0,w.find(' '));
        }
        if (st.length() < 2)
            st.clear();
    }
    return n;
}

int Cs9(string st)
{
    int n = 0;
    string letters = "абвгдеёжзийклмнопрстуфхцчшщъыьэюяАБВГДЕЁЖЗИЙКЛМНОПРСТУФХЦЧШЩЪЫЬЭЮЯ-";
    string w = "когда Когда",w1 = w;
    while(!st.empty())
    {
        while(letters.find(st[0]) == string::npos)
            st.erase(0,1);
        int i = 0;
        while(letters.find(st[i]) != string::npos)
            i++;
        string x = st.substr(0,i);
        st.erase(0,i+1);
        w = w1;
        while(!w.empty())
        {
            if(w[0] == ' ')
                w.erase(0,1);
            if(w.substr(0,w.find(' ')) == x)
            {
                n++;
            }
            w.erase(0,w.find(' '));
        }
        if (st.length() < 2)
            st.clear();
    }
    return n;
}

int Cs10(string st)
{
    int n = 0;
    string letters = "абвгдеёжзийклмнопрстуфхцчшщъыьэюяАБВГДЕЁЖЗИЙКЛМНОПРСТУФХЦЧШЩЪЫЬЭЮЯ-";
    string w = "почему Почему",w1 = w;
    while(!st.empty())
    {
        while(letters.find(st[0]) == string::npos)
            st.erase(0,1);
        int i = 0;
        while(letters.find(st[i]) != string::npos)
            i++;
        string x = st.substr(0,i);
        st.erase(0,i+1);
        w = w1;
        while(!w.empty())
        {
            if(w[0] == ' ')
                w.erase(0,1);
            if(w.substr(0,w.find(' ')) == x)
            {
                n++;
            }
            w.erase(0,w.find(' '));
        }
        if (st.length() < 2)
            st.clear();
    }
    return n;
}

int Cs11(string st)
{
    int n = 0;
    string letters = "абвгдеёжзийклмнопрстуфхцчшщъыьэюяАБВГДЕЁЖЗИЙКЛМНОПРСТУФХЦЧШЩЪЫЬЭЮЯ-";
    string w = "куда Куда",w1 = w;
    while(!st.empty())
    {
        while(letters.find(st[0]) == string::npos)
            st.erase(0,1);
        int i = 0;
        while(letters.find(st[i]) != string::npos)
            i++;
        string x = st.substr(0,i);
        st.erase(0,i+1);
        w = w1;
        while(!w.empty())
        {
            if(w[0] == ' ')
                w.erase(0,1);
            if(w.substr(0,w.find(' ')) == x)
            {
                n++;
            }
            w.erase(0,w.find(' '));
        }
        if (st.length() < 2)
            st.clear();
    }
    return n;
}

int Cs12(string st)
{
    int n = 0;
    string letters = "абвгдеёжзийклмнопрстуфхцчшщъыьэюяАБВГДЕЁЖЗИЙКЛМНОПРСТУФХЦЧШЩЪЫЬЭЮЯ-";
    string w = "откуда Откуда",w1 = w;
    while(!st.empty())
    {
        while(letters.find(st[0]) == string::npos)
            st.erase(0,1);
        int i = 0;
        while(letters.find(st[i]) != string::npos)
            i++;
        string x = st.substr(0,i);
        st.erase(0,i+1);
        w = w1;
        while(!w.empty())
        {
            if(w[0] == ' ')
                w.erase(0,1);
            if(w.substr(0,w.find(' ')) == x)
            {
                n++;
            }
            w.erase(0,w.find(' '));
        }
        if (st.length() < 2)
            st.clear();
    }
    return n;
}

int main()
{
    int s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, s8 = 0, s9 = 0, s10 = 0, s11 = 0, s12 = 0;
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    ifstream fin("input.txt");
    ofstream fout("output.txt");
    while (!fin.eof())
    {
        string st;
        getline(fin,st);
        s1 += Cs1(st);
        s2 += Cs2(st);
        s3 += Cs3(st);
        s4 += Cs4(st);
        s5 += Cs5(st);
        s6 += Cs6(st);
        s7 += Cs7(st);
        s8 += Cs8(st);
        s9 += Cs9(st);
        s10 += Cs10(st);
        s11 += Cs11(st);
        s12 += Cs12(st);
    }
    fout << "Количество союзных слов \"Что\" во всех формах: " << s1 << endl;
    fout << "Количество союзных слов \"Кто\" во всех формах: " << s2 << endl;
    fout << "Количество союзных слов \"Сколько\" во всех формах: " << s3 << endl;
    fout << "Количество союзных слов \"Который\" во всех формах: " << s4 << endl;
    fout << "Количество союзных слов \"Какой\" во всех формах: " << s5 << endl;
    fout << "Количество союзных слов \"Как\" во всех формах: " << s6 << endl;
    fout << "Количество союзных слов \"Где\" во всех формах: " << s7 << endl;
    fout << "Количество союзных слов \"Зачем\" во всех формах: " << s8 << endl;
    fout << "Количество союзных слов \"Когда\" во всех формах: " << s9 << endl;
    fout << "Количество союзных слов \"Почему\" во всех формах: " << s10 << endl;
    fout << "Количество союзных слов \"Куда\" во всех формах: " << s11 << endl;
    fout << "Количество союзных слов \"Откуда\" во всех формах: " << s12 << endl;
}
