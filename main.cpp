#include <iostream>
#include <string>

#include "main.h"

using namespace styling;

void styling::txtred(std::string s) {
    std::cout << "\033[1;31m" << s << "\033[0m" << std::endl;
}

void styling::txtgreen(std::string s) {
    std::cout << "\033[1;32m" << s << "\033[0m" << std::endl;
}

void styling::txtblue(std::string s) {
    std::cout << "\033[1;34m" << s << "\033[0m" << std::endl;
}

void styling::txtyellow(std::string s) {
    std::cout << "\033[1;33m" << s << "\033[0m" << std::endl;
}

void styling::txtcyan(std::string s) {
    std::cout << "\033[1;36m" << s << "\033[0m" << std::endl;
}

void styling::txtwhite(std::string s) {
    std::cout << "\033[1;37m" << s << "\033[0m" << std::endl;
}

void styling::txtblack(std::string s) {
    std::cout << "\033[1;30m" << s << "\033[0m" << std::endl;
}

// void styling::txtpurple(std::string s) {
//     std::cout << "\033[1;35m" << s << "\033[0m" << std::endl;
// }

// void styling::txtbrown(std::string s) {
//     std::cout << "\033[1;33m" << s << "\033[0m" << std::endl;
// }

// void styling::txtorange(std::string s) {
//     std::cout << "\033[1;33m" << s << "\033[0m" << std::endl;
// }

// void styling::txtamber(std::string s) {
//     std::cout << "\033[1;33m" << s << "\033[0m" << std::endl;
// }

// void styling::txtpink(std::string s) {
//     std::cout << "\033[1;33m" << s << "\033[0m" << std::endl;
// }

// void styling::txtindigo(std::string s) {
//     std::cout << "\033[1;33m" << s << "\033[0m" << std::endl;
// }

// void styling::txtviolet(std::string s) {
//     std::cout << "\033[1;33m" << s << "\033[0m" << std::endl;
// }

// void styling::txtlightblue(std::string s) {
//     std::cout << "\033[1;33m" << s << "\033[0m" << std::endl;
// }

// void  styling::txtlightgreen(std::string s) {
//     std::cout << "\033[1;33m" << s << "\033[0m" << std::endl;
// }

// void styling::txtlightcyan(std::string s) {
//     std::cout << "\033[1;33m" << s << "\033[0m" << std::endl;
// }

// void styling::txtlightred(std::string s) {
//     std::cout << "\033[1;33m" << s << "\033[0m" << std::endl;
// }

// void styling::txtlightpurple(std::string s) {
//     std::cout << "\033[1;33m" << s << "\033[0m" << std::endl;
// }


void styling::txtbold(std::string s) {
    std::cout << "\033[1m" << s << "\033[0m" << std::endl;
}

void styling::txtunderline(std::string s) {
    std::cout << "\033[4m" << s << "\033[0m" << std::endl;
}

void styling::txtblink(std::string s) {
    std::cout << "\033[5m" << s << "\033[0m" << std::endl;
}

void styling::txtlinethrough(std::string s) {
    std::cout << "\033[9m" << s << "\033[0m" << std::endl;
}

void styling::txtitalic(std::string s) {
    std::cout << "\033[3m" << s << "\033[0m" << std::endl;
}

void styling::bgred(std::string s) {
    std::cout << "\033[41m" << s << "\033[0m" << std::endl;
}

void styling::bggreen(std::string s) {
    std::cout << "\033[42m" << s << "\033[0m" << std::endl;
}

void styling::bgblue(std::string s) {
    std::cout << "\033[44m" << s << "\033[0m" << std::endl;
}

void styling::bgyellow(std::string s) {
    std::cout << "\033[43m" << s << "\033[0m" << std::endl;
}

void styling::bgcyan(std::string s) {
    std::cout << "\033[46m" << s << "\033[0m" << std::endl;
}

void styling::bgwhite(std::string s) {
    std::cout << "\033[47m" << s << "\033[0m" << std::endl;
}

void styling::bgblack(std::string s) {
    std::cout << "\033[40m" << s << "\033[0m" << std::endl;
}

void styling::bgmagenta(std::string s) {
    std::cout << "\033[45m" << s << "\033[0m" << std::endl;
}

void styling::bggrey(std::string s) {
    std::cout << "\033[100m" << s << "\033[0m" << std::endl;
}

int main() {
    txtred("Hello World!");
    txtgreen("Hello World!");
    txtblue("Hello World!");
    txtyellow("Hello World!");
    txtcyan("Hello World!");
    txtwhite("Hello World!");
    txtblack("Hello World!");
    // txtpurple("Hello World!");
    // txtbrown("Hello World!");
    // txtorange("Hello World!");
    // txtamber("Hello World!");
    // txtpink("Hello World!");
    // txtindigo("Hello World!");
    // txtviolet("Hello World!");
    // txtlightblue("Hello World!");
    // txtlightgreen("Hello World!");
    // txtlightcyan("Hello World!");
    // txtlightred("Hello World!");
    // txtlightpurple("Hello World!");
    txtbold("Hello World!");
    txtunderline("Hello World!");
    txtblink("Hello World!");
    txtlinethrough("Hello World!");
    txtitalic("Hello World!");

    bgred("Hello World!");
    bggreen("Hello World!");
    bgblue("Hello World!");
    bgyellow("Hello World!");
    bgcyan("Hello World!");
    bgwhite("Hello World!");
    bgblack("Hello World!");
    bgmagenta("Hello World!");
    bggrey("Hello World!");

    return 0;
}