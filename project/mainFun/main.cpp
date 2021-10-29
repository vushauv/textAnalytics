#include <fstream>
#include <string>


using namespace std;

int main()
{
    ifstream fin("input.txt");
    ofstream fout("output.txt");
    string a="", b;
    while(!fin.eof())
    {
        getline(fin, b);
        a+=" " + b;
    }
    a.erase(0, 1);
    fout<<a;
    return 0;
}
