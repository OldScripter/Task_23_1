#include <iostream>

#define WEEKDAY(a) WEEKDAY_##a

#define WEEKDAY_1 "MONDAY"
#define WEEKDAY_2 "TUESDAY"
#define WEEKDAY_3 "WEDNESDAY"
#define WEEKDAY_4 "THURSDAY"
#define WEEKDAY_5 "FRIDAY"
#define WEEKDAY_6 "SATURDAY"
#define WEEKDAY_7 "SUNDAY"
#define WEEKDAY_N "Strange day..."

#define GET_WEEKDAY(a) \
if (a == 1) (std::cout << WEEKDAY(1)); \
else if (a == 2) (std::cout << WEEKDAY(2)); \
else if (a == 3) (std::cout << WEEKDAY(3)); \
else if (a == 4) (std::cout << WEEKDAY(4)); \
else if (a == 5) (std::cout << WEEKDAY(5)); \
else if (a == 6) (std::cout << WEEKDAY(6)); \
else if (a == 7) (std::cout << WEEKDAY(7)); \
else (std::cerr << WEEKDAY(N));

int main() {

    std::cout << "Please enter the day number from 1 to 7:\n";
    int a;
    std::cin >> a;

    GET_WEEKDAY(a);

    return 0;
}
