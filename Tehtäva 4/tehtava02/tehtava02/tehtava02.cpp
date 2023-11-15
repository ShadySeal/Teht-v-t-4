#include <iostream>
#include <string>
using namespace std;

class Auto {
public:
    Auto(std::string rekisteritunnus, int huippunopeus)
        : rekisteritunnus_(rekisteritunnus), huippunopeus_(huippunopeus), nopeus_(0), matka_(0) {}

    void tulostaTiedot() {
        cout << "Rekisteritunnus: " << rekisteritunnus_ << "\n";
        cout << "Huippunopeus: " << huippunopeus_ << " km/h" << "\n";
        cout << "Nykyinen nopeus: " << nopeus_ << " km/h" << "\n";
        cout << "Kuljettu matka: " << matka_ << " km" << "\n";
    }

    void kiihdyta(int nopeudenMuutos) {
        nopeus_ += nopeudenMuutos;
        nopeus_ = max(0, min(nopeus_, huippunopeus_));
    }

public:
    std::string rekisteritunnus_;
    int huippunopeus_;
    int nopeus_;
    int matka_;
};

int main() {
    Auto auto1("ABC-123", 142);

    cout << "Luodun auton tiedot:" << "\n";
    auto1.tulostaTiedot();

    auto1.kiihdyta(30);
    cout << "Auton nopeus kiihdytyksen jälkeen: " << auto1.nopeus_ << " km/h" << "\n";

    auto1.kiihdyta(70);
    cout << "Auton nopeus kiihdytyksen jälkeen: " << auto1.nopeus_ << " km/h" << "\n";

    auto1.kiihdyta(50);
    cout << "Auton nopeus kiihdytyksen jälkeen: " << auto1.nopeus_ << " km/h" << "\n";

    auto1.kiihdyta(-200);
    cout << "Auton nopeus hätäjarrutuksen jälkeen: " << auto1.nopeus_ << " km/h" << "\n";

    return 0;
}
