#include <fstream>

using namespace std;

int main() {
    /**
     * initializing variables
     */
    int z1 = 2456, a = 113, b = 2, m = 10000;
    int *z = new int[1000];

    /**
     * fill Zi
     */
    z[0] = z1;
    for (int i = 1; i < 1000; ++i) {
        z[i] = (a * z[i - 1] + b) % m;
    }

    /**
     * print final result into output.txt file
     */
    fstream fout;
    fout.open("output.txt", ios::out);
    for (int i = 0; i < 1000; ++i) {
        fout << ((double) z[i] / m) << endl;
    }

    fout.close();
    return 0;
}
