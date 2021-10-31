#include <fstream>
#include <string>
#include <windows.h>

using namespace std;
using namespace std::__cxx11;
/// ///////////////////////////////////////////////////////////////
/// пары слов, где на конце 1-го 2-3 гласные а в начале 2-го 2-3 согласные
void dve_tri_na_koncah(string st)
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
    for (int i = 2; i < st.size() - 2; i++)///подсчЄт 1
        if (st[i] == ' ' && soglas.find(st[i+1]) != string::npos)
            if (soglas.find(st[i+2]) != string::npos && glas.find(st[i-1]) != string::npos)
                if (glas.find(st[i-2]) != string::npos)
                    a++;
    for (int i = 3; i < st.size() - 3; i++)///подсчЄт 2
        if (st[i] == ' ' && soglas.find(st[i+1]) != string::npos && soglas.find(st[i+2]) != string::npos)
            if (soglas.find(st[i+3]) != string::npos && glas.find(st[i-1]) != string::npos)
                if (glas.find(st[i-2]) != string::npos && glas.find(st[i-3]) != string::npos)
                    b++;
    fout << endl;
    fout << "пар, где по 2 буквы на концах - " << a << endl;
    fout << "в среднем на пару слов - " << double(a) / (k - 1) << endl;
    fout << "пар, где по 3 буквы на концах - " << b << endl;
    fout << "в среднем на пару слов - " << double(b) / (k - 1) << endl;
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
    dve_tri_na_koncah(st);
    return 0;
}
