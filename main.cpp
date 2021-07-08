#include <iostream>

#define WEEKDAY(a) \
if (a == 1) (std::cout << "MONDAY"); \
else if (a == 2) (std::cout << "TUESDAY"); \
else if (a == 3) (std::cout << "WEDNESDAY"); \
else if (a == 4) (std::cout << "THURSDAY"); \
else if (a == 5) (std::cout << "FRIDAY"); \
else if (a == 6) (std::cout << "SATURDAY"); \
else if (a == 7) (std::cout << "SUNDAY"); \
else std::cerr << "Strange day... Please enter from 1 to 7."; \

int main() {
    std::cout << "Please enter the day number from 1 to 7:\n";
    int day;
    std::cin >> day;
    WEEKDAY(day);
    return 0;
}
