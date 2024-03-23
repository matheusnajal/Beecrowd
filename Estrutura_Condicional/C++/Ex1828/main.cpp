#include <iostream>
#include <map>

int main() {
    std::map<std::string, std::map<std::string, std::string>> regras;
    regras["tesoura"]["papel"] = "Bazinga!";
    regras["papel"]["pedra"] = "Bazinga!";
    regras["pedra"]["lagarto"] = "Bazinga!";
    regras["lagarto"]["Spock"] = "Bazinga!";
    regras["Spock"]["tesoura"] = "Bazinga!";
    regras["tesoura"]["lagarto"] = "Bazinga!";
    regras["lagarto"]["papel"] = "Bazinga!";
    regras["papel"]["Spock"] = "Bazinga!";
    regras["Spock"]["pedra"] = "Bazinga!";
    regras["pedra"]["tesoura"] = "Bazinga!";

    int T;
    std::cin >> T;
    for(int t = 1; t <= T; ++t) {
        std::string sheldon, raj;
        std::cin >> sheldon >> raj;
        std::cout << "Caso #" << t << ": ";
        if(sheldon == raj) {
            std::cout << "De novo!\n";
        } else if(regras[sheldon][raj] == "Bazinga!") {
            std::cout << "Bazinga!\n";
        } else {
            std::cout << "Raj trapaceou!\n";
        }
    }
    return 0;
}
