#include "allergies.h"

namespace allergies {
        allergy_test::allergy_test(int s) : score(s) {}
        bool allergy_test::is_allergic_to(const std::string& item) const {
            if (item == "eggs") return (score & 1);
            if (item == "peanuts") return (score & 2);
            if (item == "shellfish") return (score & 4);
            if (item == "strawberries") return (score & 8);
            if (item == "tomatoes") return (score & 16);
            if (item == "chocolate") return (score & 32);
            if (item == "pollen") return (score & 64);
            if (item == "cats") return (score & 128);
            return false;
        }

        std::unordered_set<std::string> allergy_test::get_allergies() const {
            std::unordered_set<std::string> result;
            if (score & 1) result.emplace("eggs");
            if (score & 2) result.emplace("peanuts");
            if (score & 4) result.emplace("shellfish");
            if (score & 8) result.emplace("strawberries");
            if (score & 16) result.emplace("tomatoes");
            if (score & 32) result.emplace("chocolate");
            if (score & 64) result.emplace("pollen");
            if (score & 128) result.emplace("cats");
            return result;
        }
    }

