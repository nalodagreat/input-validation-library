#pragma once

#include <iostream>
#include <string>
#include <limits>
// #include "clsString.h"
#include "Date.h"

class InputValidate
{
public:

    static bool isNumberBetween(short number, short from, short to)
    {
        return number >= from && number <= to;
    }

    static bool isNumberBetween(int number, int from, int to)
    {
        return number >= from && number <= to;
    }

    static bool isNumberBetween(double number, double from, double to)
    {
        return number >= from && number <= to;
    }

    static bool isDateBetween(Date date, Date from, Date to)
    {
        return (
            (Date::isDate1AfterDate2(date, from) || Date::isDate1EqualDate2(date, from)) &&
            (Date::isdate1Beforedate2(date, to)   || Date::isDate1EqualDate2(date, to))
        ) || 
        (
            (Date::isDate1AfterDate2(date, to)   || Date::isDate1EqualDate2(date, to)) &&
            (Date::isdate1Beforedate2(date, from) || Date::isDate1EqualDate2(date, from))
        );
    }
	 // static bool isValidDate(Date date)
    // {
    //     return Date::IsValidDate(date);
    // }

    static std::string readString()
    {
        std::string s;
        std::getline(std::cin >> std::ws, s);
        return s;
    }


};