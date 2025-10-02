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
    int         ind = -1;
    std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    ptr_func    funcs[] = {&Harl::debug, &Harl::debug, &Harl::warning, &Harl::error};

    while (++ind < 4)
        if (level == levels[ind])
            break ;
    while (ind < 4)
    {
        (this->*funcs[ind])();
        ind++;
    }
}
