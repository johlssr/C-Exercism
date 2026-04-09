#pragma once
#include <string>
#include <unordered_set>
#ifndef ALLERGIES
#define ALLERGIES

namespace allergies {

    class allergy_test {
        private:
            int score;

        public:
            allergy_test(int s);
            bool is_allergic_to(const std::string& item) const;
            std::unordered_set<std::string> get_allergies() const;
    };
}
#endif
