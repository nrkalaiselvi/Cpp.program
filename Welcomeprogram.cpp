#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> specials = {"Coffee", "Tea", "Sandwich"};

    specials.push_back("Burger");

    for (string item : specials) {
        cout << item << endl;
    }
    return 0;
}