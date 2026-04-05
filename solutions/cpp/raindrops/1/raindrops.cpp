#include "raindrops.h"

namespace raindrops {

// TODO: add your solution here
    std::string convert(const int& numeric){
        std::string value{""};
        
        if((numeric % 3) == 0) value += "Pling";
        if((numeric % 5) == 0) value += "Plang";
        if((numeric % 7) == 0) value += "Plong";
        
        return value.empty() ? std::to_string(numeric) : value;
    }
    
}  // namespace raindrops
