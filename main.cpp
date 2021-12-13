#include <iostream>

using namespace std;


int main() {
    enum Stanowisko{
        smieciarz, szefc, mysliwy, rolnik
    }zawod;
    cout << zawod;
    zawod=rolnik;
    cout << zawod;
    return 0;
}