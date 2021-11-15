#include<iostream>
#include<fstream>
#include "sll.cpp"
using namespace std;
int main()
{
    string* a;
    ifstream file;
    file.open("IMDB_Top5000-SEECS.csv");
    while(file.good())
    {
        file.getline(file,a);
        cout<<a;
    }
}