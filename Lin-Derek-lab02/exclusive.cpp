#include <iostream>
#include <cstdlib>
#include <sstream>

using namespace std;

/**
 * This function finds the nonrepeating integer
 * in an odd list of integers.
 *
 * @return Value 0 if program ends successfully.
 */
int main() {
    string str;
    int x = 0;
    int y;

    /// getting input
    cout << "Enter integers: ";
    getline(cin, str);

    stringstream ss(str);

    /// xor all the values in the string
    while (!ss.eof()) {
        ss >> str;
        stringstream(str) >> y;
        x ^= y;
    }

    cout << "     Exclusive: " << x << endl;

    return EXIT_SUCCESS;
}
