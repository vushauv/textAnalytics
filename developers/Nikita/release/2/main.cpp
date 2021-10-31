#include <fstream>
#include <string>
#include <windows.h>

using namespace std;
using namespace std::__cxx11;
/// /////////////////////////////////////////////////////////////////////////

void tri_podryad(string st)
{
    ifstream fin("input.txt");
    ofstream fout("output.txt");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int a = 0, b = 0, k = 0;
    string glas = "Єуеыаоэ€ию®”≈џјќЁя»ё";
    string soglas = "йцкнгшщзхъфвпрлджчсмтьб…÷ Ќ√Ўў«’Џ‘¬ѕ–Ћƒ∆„—ћ“№Ѕ";
    string znak = ",.:;-Ч\"'/()*?!%&";
    st += " ";
    for (int i = 0; i < st.size(); i++)///удаление знаков
        if (znak.find(st[i]) != string::npos)
        {
            st.erase(i, 1);
            i--;
        }
    for (int i = 0; i < st.size() - 1; i++)///кол-во слов
        if (st[i] != ' ' && st[i + 1] == ' ')
            k++;
    for (int i = 0; i < st.size() - 2; i++)///подсчЄт
    {
        if (glas.find(st[i]) != string::npos && glas.find(st[i+1]) != string::npos)
            if (glas.find(st[i+2]) != string::npos)
                a++;///√√√
        if (soglas.find(st[i]) != string::npos && soglas.find(st[i+1]) != string::npos)
            if (soglas.find(st[i+2]) != string::npos)
                b++;///———
    }
    fout << endl;
    fout << "всего гласных подр€д - " << a << endl;
    fout << "в среднем на слово - " << double(a) / k << endl;
    fout << "всего согласных подр€д - " << b << endl;
    fout << "в среднем на слово - " << double(b) / k << endl;
}
/// ///////////////////////////////////////////////////////////////

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
    tri_podryad(st);
    return 0;
}
