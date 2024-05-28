#include <iostream>
#include "test3.h"

int main() {

    char answer;
    double year;
    int month, day, hour, minute;
    std::cout << "input year month day" << std::endl;
    std::cin >> year >> month >> day;
    std::cout << "more argument? Y or N" << std::endl;
    std::cin >> answer;
    
    if(answer == 'N') {
        Date date(year, month, day, hour, minute);
        date.print_info3();

    } else if(answer == 'Y') {
        std::cout <<"input hour minute" << std::endl;
        std::cin >> hour >> minute;
        Date date(year, month, day, hour, minute);
        date.print_info5();

    }

    return 0;
}