#include "rotational_cipher.h"

namespace rotational_cipher {

    std::string rotate(std::string input, int x) {
        std::string output = "";
        x = x % 26;
        for (char c : input) {
            if (std::islower(c)) {
                output += 'a' + (c - 'a' + x) % 26;
            }
            else if (std::isupper(c)) {
                output += 'A' + (c - 'A' + x) % 26;
            }
            else {
                output += c;
            }
        }
        return output;
    }
}
