#pragma once
#include <array>
#include <string>
#include <stdexcept>

namespace kindergarten_garden {

    enum class Plants {
        grass,
        clover,
        radishes,
        violets,
    };
    
    std::array<Plants, 4> plants (std::string pots, std::string student);

}  // namespace kindergarten_garden
