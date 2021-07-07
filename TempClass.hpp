
#include <string>
#include <vector>

#include <iostream>
#include <algorithm>

class TempClass {
public:
    TempClass();

    void printData() const;

    /**
     * You can try to uncomment this code, and you got the next error:
     * 
     * TempClass.hpp:16:22: error: use of ‘auto’ in lambda parameter declaration only available with -std=c++14 or -std=gnu++14
     *        [](const auto& data) {
     */
    // void printData() const {
    //     std::for_each(
    //         _someData.cbegin(), 
    //         _someData.cend(),
    //         [](const auto& data) {
    //             std::cout << data.first << " - " << data.second << std::endl;
    //         });
    // }

private:

    using KeyValue = std::pair<int, std::string>;

    std::vector<KeyValue> _someData;

};