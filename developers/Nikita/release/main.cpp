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
    string glas = "¸ףוûאמ‎ÿט‏¨ÓÅÛÀÎÝ‗ÈÞ";
    string soglas = "יצךםדרשחץתפגןנכהזקסלעüבÉÖÊÍÃØÙÇÕÚÔÂÏÐËÄÆ×ÑÌÒÜÁ";
    st += " ";

    for (int i = 0; i < st.size() - 2; i++)///ןמהסק¸ע
    {
        if (glas.find(st[i]) != string::npos && glas.find(st[i+1]) != string::npos)
            if (glas.find(st[i+2]) != string::npos)
                a++;///ÃÃÃ
        if (soglas.find(st[i]) != string::npos && soglas.find(st[i+1]) != string::npos)
            if (soglas.find(st[i+2]) != string::npos)
                b++;///ÑÑÑ
    }
    for (int i = 0; i < st.size() - 1; i++)///ךמכ-גמ סכמג
        if (st[i] != ' ' && st[i + 1] == ' ')
            k++;
    fout << endl;
    fout << "גסודמ דכאסםûץ ןמהנÿה - " << a << endl;
    fout << "ג סנוהםול םא סכמגמ - " << double(a) / k << endl;
    fout << "גסודמ סמדכאסםûץ ןמהנÿה - " << b << endl;
    fout << "ג סנוהםול םא סכמגמ - " << double(b) / k << endl;
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
