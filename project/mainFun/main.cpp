#include <fstream>
#include <string>


using namespace std;

int main()
{
    ifstream fin("input.txt");
    ofstream fout("output.txt");
    string text="", b;
    while(!fin.eof())
    {
        getline(fin, b);
        text+=" " + b;
    }
    text.erase(0, 1);
    return 0;
}
