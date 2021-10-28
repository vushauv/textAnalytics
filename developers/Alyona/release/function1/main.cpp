#include <iostream>
#include <fstream>
#include <string>

using namespace std;
ifstream fin("input.txt");
ofstream fout("output.txt");
void f1(string st)
{
    string z(" абвгдеёжзийклмнопрстуфхцчшщъыьэюя,.;:!?—");
    int k[50];
    double m=0;
    for (int i=0;i<z.length();i++)
    k[i]=0;
    for (int i=0;i<st.length();i++)
    {
    if(st[i]>='А'&&st[i]<='Я')
    {
        st[i]+=32;
    }
    if (z.find(st[i])!=string::npos)
    {
        k[z.find(st[i])]++;
        m++;
    }
    }
    fout<<"Кол-во символов в тексте"<<endl;
    for (int i=0;i<z.length();i++)
        fout<<z[i]<<" - "<<k[i]<<endl;
    fout<<"В процентах:"<<endl;
    for (int i=0;i<z.length();i++)
        fout<<z[i]<<" - "<<k[i]/m<<endl;
}
int main()
{
    string s;
    getline(fin, s);
    f1(s);
    return 0;
}
