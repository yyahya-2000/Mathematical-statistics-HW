#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int getOrder(double a, double b, double c) {
    if (a >= b && b >= c)
        return 123;
    else if (a >= c && c >= b)
        return 132;
    else if (b >= a && a >= c)
        return 213;
    else if (b >= c && c >= a)
        return 231;
    else if (c >= a && a >= b)
        return 312;
    else if (c >= b && b >= a)
        return 321;
}

int main() {
    ifstream fin;
    fstream fout;
    double a, b, c;
    string temp;

    fin.open("input.txt");
    fout.open("output.txt", ios::out);

    for (int i = 0; i < 333; ++i) {
        fin >>a>>b>>c;
        fout << getOrder(a, b, c) << "\n";
    }

    fin.close();
    fout.close();

    return 0;
}
