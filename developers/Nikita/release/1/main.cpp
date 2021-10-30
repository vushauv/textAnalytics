#include <fstream>
#include <string>
#include <windows.h>

using namespace std;
using namespace std::__cxx11;
/// /////////////////////////////////////////////////////////////////////////

void krajnie_bukvi(string st)
{
    ifstream fin("input.txt");
    ofstream fout("output.txt");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int a = 0, b = 0, c = 0, d = 0;
    string vord, znak = ",.;-Ч", glas = "Єуеыаоэ€ию®”≈џјќЁя»ё";
    st += " ";
    while(st.find_first_of(znak) != string::npos)///удаление знаков
    {
        st.insert(st.find_first_of(znak) + 1, " ");
        st.erase(st.find_first_of(znak), 1);
    }
    while(st.size() > 0)
    {
        while(st[0] == ' ')///удаление пробелов
            st.erase(0, 1);
        if (st.size() == 0)
            break;
        vord = st.substr(0, st.find(' '));
        st.erase(0, st.find(' '));
        int len = vord.size() - 1;
            ///проверка букв
        if (glas.find(vord[0]) != string::npos && glas.find(vord[len]) != string::npos)
            a++; ///√√
        else if (glas.find(vord[0]) != string::npos && glas.find(vord[len]) == string::npos)
            b++; ///√—
        else if (glas.find(vord[0]) == string::npos && glas.find(vord[len]) != string::npos)
            c++; ///—√
        else if (glas.find(vord[0]) == string::npos && glas.find(vord[len]) == string::npos)
            d++; ///——
    }
    fout << "слов, где обе гласные - " << a << endl;
    fout << "слов, где гласна€-согласна€ - " << b << endl;
    fout << "слов, где согласна€-гласна€ - " << c << endl;
    fout << "слов, где обе согласные - " << d << endl;
}
/// //////////////////////////////////////////////////////////////////

int main()
{
    ifstream fin("input.txt");
    ofstream fout("output.txt");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    string st = "", s;
    while (!fin.eof())
    {
        getline(fin, s);
        s += " ";
        st += s;
    }
    krajnie_bukvi(st);
    return 0;
}
