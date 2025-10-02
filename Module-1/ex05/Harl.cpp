#include "Harl.hpp"

void Harl::debug( void )
{
    std::cout << "[DEBBUG]" << std::endl
              << "Standard debug complaint" << std::endl;
}

void Harl::info( void )
{
    std::cout << "[INFO]" << std::endl
              << "Standard info complaint" << std::endl;
}

void Harl::warning( void )
{
    std::cout << "[WARNING]" << std::endl
              << "Standard warning complaint" << std::endl;
}

void Harl::error( void )
{
    std::cout << "[ERROR]" << std::endl
              << "Standard erro complaint" << std::endl;
}

void Harl::complain( std::string level )
{
    std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    ptr_func    funcs[] = {&Harl::debug, &Harl::debug, &Harl::warning, &Harl::error};

    for (int ind = 0; ind < 4; ind++)
        if (level == levels[ind])
            (this->*funcs[ind])();
}
