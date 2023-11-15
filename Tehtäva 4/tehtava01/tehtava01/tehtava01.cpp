#include <iostream>
#include <string>
using namespace std;

class Auto {
public:
    Auto(string rekisteritunnus, int huippunopeus)
        : rekisteritunnus_(rekisteritunnus), huippunopeus_(huippunopeus), nopeus_(0), matka_(0) {}

    void tulostaTiedot() {
        cout << "Rekisteritunnus: " << rekisteritunnus_ << "\n";
        cout << "Huippunopeus: " << huippunopeus_ << " km/h" << "\n";
        cout << "Nykyinen nopeus: " << nopeus_ << " km/h" << "\n";
        cout << "Kuljettu matka: " << matka_ << " km" << "\n";
    }

private:
    string rekisteritunnus_;
    int huippunopeus_;
    int nopeus_;
    int matka_;
};

int main() {
    Auto auto1("ABC-123", 142);

    cout << "Luodun auton tiedot:" << "\n";
    auto1.tulostaTiedot();

    return 0;
}
