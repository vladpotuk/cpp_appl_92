#include "date.h"

int main() {
    Date myDate(31, 12, 2022);

    std::cout << "Initial Date: " << myDate << std::endl;

    ++myDate; 
    std::cout << "Date after increment: " << myDate << std::endl;

    Date otherDate(1, 1, 2023);
    if (myDate != otherDate)
        std::cout << "Dates are not equal." << std::endl;

    if (myDate > otherDate)
        std::cout << "myDate is later than otherDate." << std::endl;

    Date newDate = myDate + 5;  
    std::cout << "Date after adding 5 days: " << newDate << std::endl;

    return 0;
}
