#include "raindrops.h"

namespace raindrops {

// TODO: add your solution here
    std::string convert (int number) {
        std::string result = "";
        if (number%3 == 0) 
            result = result + "Pling";
        if (number%5 == 0)
            result = result + "Plang";
        if (number%7 == 0)
            result = result + "Plong";
        if (result == "")
            result = std::to_string(number);
        return result;
    }

}  // namespace raindrops


        
