#include <iostream>

class Date{
private:
    double year;
    int month;
    int day;
    int hour;
    int minute;

public:
    void print_info3() {
        std::cout << "year:" << year << " month:" << month << " day:" << day << std::endl;
    }


    void print_info5() {
        std::cout << "year:" << year << " month:" << month << " day:" << day << " hour:" << hour << " minute:" << minute <<std::endl;
    }

    //コンストラクタ
    Date(double year, int month, int day) : year{year}, month{month}, day{day} {}
    
    //コンストラクタ
    Date(double year, int month, int day, int hour, int minute) : year{year}, month{month}, day{day}, hour{hour}, minute{minute} {}

    

};