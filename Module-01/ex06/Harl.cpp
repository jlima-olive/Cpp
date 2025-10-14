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
    int                 ind = -1;
    const std::string   levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    ptr_func            funcs[] = {&Harl::debug, &Harl::debug, &Harl::warning, &Harl::error};

    while (++ind < 5)
        if (level == levels[ind])
            break ;
    switch (ind)
    {
    case (5):
        std::cout << "stop complaining about nothing" << std::endl;
        break;
    case (0):
        (this->*funcs[0])();
        /* fall through */
    case (1):
        (this->*funcs[1])();
        /* fall through */
    case (2):
        (this->*funcs[2])();
        /* fall through */
    case (3):
        (this->*funcs[3])();
        break;
    }
}
