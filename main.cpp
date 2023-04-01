#include <iostream>
#include <string>

#define PRINT(a) ((a == "1") ? "Mon" : ((a == "2") ? "Tue" : (a == "3" ? "Wed" : (a == "4" ? "Thu" : (a == "5" ? "Fri" : (a == "6" ? "Sat" : (a == "7" ? "Sun" : "Только от 1-7!")))))))

int main() {
    std::string input;
    std::cout << "Введите порядковый номер день недели(1-7): ";
    std::cin >> input;
    std::cout << PRINT(input);
}
