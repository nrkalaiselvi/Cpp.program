#include <iostream>
#include <list>
using namespace std;

int main() {
    list<string> customers = {"Alice", "Bob", "Charlie"};

    customers.push_front("VIP_John");

    for (string name : customers) {
        cout << name << endl;
    }
    return 0;
}