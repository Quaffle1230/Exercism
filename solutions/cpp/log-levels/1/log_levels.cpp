#include <string>
#include <iostream>

namespace log_line {
std::string message(std::string line) {
    const int start = line.find(": ");
    std::string message = line.substr(start+2);
    std::cout << message;
    return message;
    // return the message
}

std::string log_level(std::string line) {
    const int end = line.find("]");
    std::string level = line.substr(1,end -1);
    std::cout << level;
    return level;
    // return the log level
}

std::string reformat(std::string line) {
    // return the reformatted message
    std::string message = log_line::message(line);
    std::string level = log_line::log_level(line);
    std::string format = message + " (" + level + ")";
    std::cout << format;
    return format;
}
}  // namespace log_line
