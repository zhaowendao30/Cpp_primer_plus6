#include "wine.h"

void Wine::GetBottles() 
{
    int y, b;  // year, bottle

    std::cout << "Enter " << Label() << " data for " << years << " year(s)" << std::endl;
    for (int i = 0; i < years; ++i)
    {
        std::cout << "Enter year:";
        std::cin >> y;
        PairArray::first()[i] = y;
        std::cout << "Enter bottles for that year: ";
        std::cin >> b;
        PairArray::second()[i] = b;
    }
}

void Wine::Show() const
{
    std::cout << "Wine: " << Label() << std::endl;
    std::cout << "Year  " << "  Bottles" << std::endl;
    for (int i = 0; i < years; ++i)
    {
        std::cout << PairArray::first()[i] << "    ";
        std::cout << PairArray::second()[i] << std::endl;
    }    
}