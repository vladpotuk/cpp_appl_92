#include "date.h"

Date::Date() : day(1), month(1), year(2000) {}

Date::Date(int d, int m, int y) : day(d), month(m), year(y) {}

void Date::increaseDay() {
 
    ++day;
}

Date Date::operator++() {
    increaseDay();
    return *this;
}

bool Date::operator!=(const Date& other) const {
    return (day != other.day || month != other.month || year != other.year);
}

bool Date::operator==(const Date& other) const {
    return (day == other.day && month == other.month && year == other.year);
}

bool Date::operator>(const Date& other) const {
    if (year > other.year)
        return true;
    else if (year == other.year && month > other.month)
        return true;
    else
        return (year == other.year && month == other.month && day > other.day);
}

bool Date::operator<(const Date& other) const {
    return !(*this > other || *this == other);
}

Date& Date::operator=(const Date& other) {
    if (this != &other) {
        day = other.day;
        month = other.month;
        year = other.year;
    }
    return *this;
}

Date Date::operator+=(int days) {
    
    day += days;
    return *this;
}

Date Date::operator+(int days) {
    Date result = *this;
    result.day += days;
    return result;
}

Date Date::operator-=(int days) {
    
  
    day -= days;
    return *this;
}

std::ostream& operator<<(std::ostream& os, const Date& date) {
    os << date.day << '/' << date.month << '/' << date.year;
    return os;
}

std::istream& operator>>(std::istream& is, Date& date) {
    is >> date.day >> date.month >> date.year;
    return is;
}
