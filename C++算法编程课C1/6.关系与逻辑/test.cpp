#include <iostream>

bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int main() {
    int year;
    std::cout << "请输入年份: ";
    std::cin >> year;

    if (isLeapYear(year))
        std::cout << year << "是闰年" << std::endl;
    else
        std::cout << year << "是平年" << std::endl;

    return 0;
}
