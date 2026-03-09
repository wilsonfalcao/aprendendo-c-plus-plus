#include <string>

namespace log_line {
std::string message(std::string line) {
    // return the message
    size_t post = line.find(":");
    return line.substr(post + 2);
}

std::string log_level(std::string line) {
    // return the log level
    size_t size = line.find("]");
    return line.substr(1, (size - 1));
}

std::string reformat(std::string line) {
    // return the reformatted message
    size_t post = line.find(":");
    std::string text = line.substr(post + 2);
    
    size_t size = line.find("]");
    std::string text2 = line.substr(1, (size -1));
    
    return text + " (" + text2 + ")";
}
}  // namespace log_line
