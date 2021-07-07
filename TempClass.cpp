
#include "TempClass.hpp"

TempClass::TempClass() {
    _someData.push_back({1, "String 1"});
    _someData.push_back({1, "String 2"});
    _someData.push_back({1, "String 3"});
    _someData.push_back({1, "String 4"});
}

/**
 * If I use "auto" in lamda in .cpp file, compilation process is success
 */
void TempClass::printData() const {
    std::for_each(
        _someData.cbegin(), 
        _someData.cend(),
        [](const auto& data) {
            std::cout << data.first << " - " << data.second << std::endl;
        });
}