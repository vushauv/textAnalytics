#include <fstream>
#include <string>
#include <windows.h>

using namespace std;

int NumOfBigLetters(string st)
{
    int s = 0;
    string BigLetters = "ÀÁÂÃÄÅ¨ÆÇÈÉÊËÌÍÎÏÐÑÒÓÔÕÖ×ØÙÚÛÜÝÞß";
    while (!st.empty())
    {
        if(BigLetters.find(st[0]) != string::npos)
            s++;
        st.erase(0,1);
    }
    return s;
}

int NumOfSen(string st)
{
    int s = 0;
    while (!st.empty())
    {
        if(st[0] == '.' || st[0] == '!' || st[0] == '?' || st[0] == '…')
        {
            s++;
            if(st.length() > 2 && st.substr(0,3) == "...")
                st.erase(0,2);
            if(st.length() > 2 && st.substr(0,3) == "..,")
            {
                st.erase(0,2);
                s--;
            }
            if(st.length() > 2 && st.substr(0,3) == "? -")
                s--;
        }
        if(st.length() > 2 && st.substr(0,3) == ": «")
            s++;
        st.erase(0,1);
    }
    return s;
}

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    string st;
    int s = 0;
    ifstream fin("input.txt");
    ofstream fout("output.txt");
    while(!fin.eof())
    {
        getline(fin,st);
        s += NumOfBigLetters(st);
        s -= NumOfSen(st);
    }
    fout << "Êîëè÷åñòâî áîëüøèõ áóêâ íå â íà÷àëå ïðåäëîæåíèÿ: " << s << endl;
    return 0;
}
