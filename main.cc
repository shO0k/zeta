#include "/public/read.h"
#include <boost/multiprecision/miller_rabin.hpp>
#include <boost/multiprecision/cpp_int.hpp>
#include <iostream>
#include <iomanip>
#include <cmath>
// To-do:
// faster computing for numbers greater than i
// compile with optimizer g++ -O3 main.cc
using namespace std;
using namespace boost::multiprecision;
void die() {
    cout << "BAD INPUT!" << endl;
    exit(1);
}
const array<cpp_int, 21> cache = {
    0, 4, 25, 168, 1'229, 9'592, 78'498, 664'579, 5'761'455, 50'847'534, 455'052'511, 4'118'054'813,
    37'607'912'018,346'065'536'839, 3'204'941'750'802, 29'844'570'422'669, 279'238'341'033'925,
    2'623'557'157'654'233, 24'739'954'287'740'860, 234'057'667'276'344'607, 2'220'819'602'560'918'840,
};
cpp_int pi(cpp_int i, cpp_int j) {
    cpp_int pi = 0;
    cpp_int total = 0;
    cpp_int k = i;
    int z = 0;
    for (int v = 20; v >= 0; v--) {
        if (i >= cpp_int(pow(10, v))) {
            pi = cache[v];
            z = v;
            break;
        }
    }
    cpp_int bound = cpp_int(pow(10, z));
    if (i != bound) {
        for (cpp_int h = 0; h < i - bound; h++) {
            if (miller_rabin_test(h + bound + 1, 25)) pi++;
        }
    }
    total += pi;
    if (j - i <= 10) {
        cout << "pi(" << k << ") = " << pi << endl;
        k++;
    }
    for (cpp_int x = 0; x < j - i; x++) {
        if (miller_rabin_test((x + i + 1), 25)) {
            pi++;
        }
        total += pi;
        if (j - i <= 10) {
            cout << "pi(" << k << ") = " << pi << endl;
            k++;
        }
    }
    return total;
}
int main() {
cout << "Welcome to Zeta World!\nWe will compute the sum of all pi(x) from x = i to j\n";
    //If you've never used readlib before, the following line is basically: int i; cin >> i;
    cpp_int i = read("Please enter i:\n");
    cpp_int j = read("Please enter j:\n");
    if (i < 2 or j < 2) die();
    if (!(j >= i)) die();
    cpp_int sum = 0; //Hmm... is an int big enough?
    sum = pi(i, j);
    cout << "The answer is: " << sum << endl;
    return 0;
}
