#include <iostream>
#include <vector>
#include <locale>
#include <fstream>

using namespace std;


int main()
{
    setlocale(LC_ALL, "Rus");

    float a, b, c; 
    float x, y;
    ifstream fin("input1.txt");

    fin >> a;
    fin >> b;
    fin >> c;

    ifstream fin2("input2.txt");

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

