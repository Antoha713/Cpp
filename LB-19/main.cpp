#include <iostream>
#include <string>
#include <map>
#include <sstream>

int main()
{
    std::string values1;
    std::getline(std::cin, values1);
    std::string template1;
    std::getline(std::cin, template1);

    std::map<std::string, std::string> values;
    std::stringstream ss(values1);
    std::string pair;

    while (std::getline(ss, pair, ',')) {
        size_t pos = pair.find('=');
        if (pos != std::string::npos) {
            std::string name = pair.substr(0, pos);
            std::string value = pair.substr(pos + 1);
            values[name] = value;
        }
    }

    std::string result;
    for (size_t i = 0; i < template1.length(); ++i) {
        if (template1[i] == '[') {
            size_t end = template1.find(']', i);
            if (end != std::string::npos) {
                std::string key = template1.substr(i + 1, end - i - 1);
                if (values.count(key)) {
                    result += values[key];
                } else {
                    result += "[" + key + "]";
                }
                i = end;
            } else {
                result += template1[i];
            }
        } else {
            result += template1[i];
        }
    }

    std::cout << result << "\n";
}

// int main() {
//     std::string password;
//     std::getline(std::cin, password);
//
//     size_t size = password.length();
//     bool sizeOk = size >= 8;
//     bool UpperOk = false;
//     bool LowerOk = false;
//     bool DigitOk = false;
//     bool SpecialOk = false;
//
//     for (int i = 0; i < size; i++) {
//         if (std::isupper(password[i])) {
//             UpperOk = true;
//         }else if (std::islower(password[i])) {
//             LowerOk = true;
//         }else if (std::isdigit(password[i])) {
//             DigitOk = true;
//         }else if (std::ispunct(password[i])) {
//             SpecialOk = true;
//         }
//     }
//
//     if (sizeOk && UpperOk && LowerOk && DigitOk && SpecialOk) {
//         std::cout << "The password is valid" << std::endl;
//     } else {
//         if (!sizeOk) std::cout << "The password must be 8 characters long" << std::endl;
//         if (!UpperOk) std::cout << "The password must have at least one upper case letter" << std::endl;
//         if (!LowerOk) std::cout << "The password must have at least one lower case letter" << std::endl;
//         if (!DigitOk) std::cout << "The password must have at least one digit" << std::endl;
//         if (!SpecialOk) std::cout << "The password must have at least one special character" << std::endl;
//     }
// }
