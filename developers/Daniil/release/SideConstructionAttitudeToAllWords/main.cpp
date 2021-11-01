#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>
#include <algorithm>

using namespace std;

ifstream sides("sides.txt");
ifstream fin("input.txt");
ofstream fout("output.txt");



string ParsFileToString(){
    string s = "", sub;
    while(!fin.eof())
    {
        getline(fin, sub);
        s+=" " + sub;
    }
    s.erase(0, 1);

    return s;
}

string ToLowerString(string s){
    for(int i = 0;i < s.length();i++){
        char x = s[i];
        int res = s[i];
        if(res >= -64 && res <= -33)
            res += 32;
        s[i] = res;
    }

    return s;
}

double WordCount(string s, string punctuationMarks){
    double wordNumber = 0;
    s = " " + s;
    for (int i = 0; i < s.length()-1; i++) {
        if (punctuationMarks.find(s[i]) != string::npos && punctuationMarks.find(s[i+1]) == string::npos)
            wordNumber++;
    }

    return wordNumber;
}

string* ParsFileToArray(){
    string sub;
    int sidesArrayLength = 397;
    string* sidesArray = new string[sidesArrayLength];
    for(int i = 0; i < sidesArrayLength; i++){
        getline(sides, sub);
        sidesArray[i] = sub;
    }

    return sidesArray;
}

double SideCount(string s, string* sideArray){
    double result = 0;
    for (int i = 0; i < 397; i++) {
        string side = sideArray[i];
        int startPos = 0;
        string sub = s.substr(startPos);
        int sideLen = side.length();

        while (sub.find(side) != string::npos) {
            int pos = sub.find(side);
            startPos = pos + sideLen;
            sub = sub.substr(startPos);
            result++;
        }
    }

    return result;
}

void SideConstructionAttitudeToAllWords(string s){
    string punctuationMarks = ". !;:ї,?-Ч";
    punctuationMarks += char(34);//кавычка
    double wordNumber = WordCount(s, punctuationMarks);
    int sidesArrayLength = 397;
    string* sidesArray = ParsFileToArray();
    double sideNumber = SideCount(s, sidesArray);
    double result = sideNumber / wordNumber;

    fout << "Side construction number = " << sideNumber << "; Attitude = " << result << ";";
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    string str = ParsFileToString();
    str = ToLowerString(str);
    SideConstructionAttitudeToAllWords(str);

    return 0;
}
