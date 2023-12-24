#ifndef DATE_H
#define DATE_H

#include <iostream>

class Date {
private:
    int day;
    int month;
    int year;

public:
    Date();
    Date(int d, int m, int y);

    void increaseDay();

    
    Date operator++();  
    bool operator!=(const Date& other) const;
    bool operator==(const Date& other) const;
    bool operator>(const Date& other) const;
    bool operator<(const Date& other) const;
    Date& operator=(const Date& other);
    Date operator+=(int days);
    Date operator+(int days);  
    Date operator-=(int days);

    
    friend std::ostream& operator<<(std::ostream& os, const Date& date);
    friend std::istream& operator>>(std::istream& is, Date& date);
};

#endif 
