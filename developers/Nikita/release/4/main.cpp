#include <fstream>
#include <string>
#include <windows.h>

using namespace std;
using namespace std::__cxx11;
/// ///////////////////////////////////////////////////////////////

void chastoe_slovo(string st)
{
    ifstream fin("input.txt");
    ofstream fout("output.txt");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int a = 0, b = 0, c = 0, d = 0;
    string vord, slova = "", s, znak = ",.;-—";
    int k = 0, t = 1;///финальное и текущее коло-во
    st += " ";
    while(st.find_first_of(znak) != string::npos)///удаление знаков
    {
        st.insert(st.find_first_of(znak) + 1, " ");
        st.erase(st.find_first_of(znak), 1);
    }
    while(st.size() > 0)
    {
        while(st[0] == ' ')
            st.erase(0, 1);
        if (st.size() == 0)
            break;
        vord = st.substr(0, st.find(' ') + 1);
        st.erase(0, st.find(' '));
        s = st;
        while(s.find(vord) != string::npos)
        {
            s.erase(0, s.find(vord) + 1);
            t++;
        }
        if (t > k)
        {
            slova = vord;
            k = t;
        }
        else if (t == k && t > 1)
        {
            slova += "/ ";
            slova += vord;
        }
        t = 1;
    }
    fout << "наиболее часто встречающееся слово(слова) - " << slova << endl;
    fout << "в кол-ве - " << k << endl;

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
    chastoe_slovo(st);
    return 0;
}
