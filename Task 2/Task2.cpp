#include <iostream>
#include <vector>
#include <locale>
#include <fstream>
#include <string>

using namespace std;


int main()
{
    setlocale(LC_ALL, "Rus");

    string file1;
    string file2;

    cout << "Введите имя 1 файла :";
    cin >> file1;

    cout << "Введите имя 2 файла :";
    cin >> file2;

    float a, b, c; 
    float x, y;
    ifstream fin(file1 + ".txt");

    fin >> a;
    fin >> b;
    fin >> c;

    ifstream fin2( file2 + ".txt");

    while (!fin2.eof())
    {

        fin2 >> x;
        fin2 >> y;

        if ((x - a)*2 + (y - b) == c*2 )
        {
            cout << 0 << endl;
        }

        if ((x - a) * 2 + (y - b) < c * 2)
        {
            cout << 1 << endl;
        }

        if ((x - a) * 2 + (y - b) > c * 2)
        {
            cout << 2 << endl;
        }
    }
    

}

