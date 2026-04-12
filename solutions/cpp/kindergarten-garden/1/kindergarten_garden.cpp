#include "kindergarten_garden.h"


namespace kindergarten_garden {

    Plants char_to_plants (char c){
        switch (c) {
            case 'G': return Plants::grass;
            case 'C': return Plants::clover;
            case 'R': return Plants::radishes;
            case 'V': return Plants::violets;
            
            default: throw std::invalid_argument("Invalid plant");
        }
    }

    int studentplace (std::string student) {
        if (student ==  "Alice") return 0;
        if (student ==  "Bob")  return 2;
        if (student ==  "Charlie") return 4;
        if (student ==  "David")  return 6;
        if (student ==  "Eve") return 8;
        if (student ==  "Fred") return 10;
        if (student ==  "Ginny") return 12;
        if (student ==  "Harriet")  return 14;
        if (student ==  "Ileana") return 16;
        if (student ==  "Joseph") return 18;
        if (student ==  "Kincaid") return 20;
        if (student ==  "Larry") return 22;
        throw std::invalid_argument("Invalid name");
    }
    
    std::array<Plants, 4> plants (std::string pots, std::string student) {
        std::array<Plants, 4> result;
        int place = studentplace(student);
        result[0] = char_to_plants(pots[place]);
        result[1] = char_to_plants(pots[place+1]);
        int newline = pots.find('\n')+1;
        result[2] = char_to_plants(pots[newline+place]);
        result[3] = char_to_plants(pots[newline+place+1]);
        return result;
    }

}  // namespace kindergarten_garden
