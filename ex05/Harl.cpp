#include "Harl.hpp"

#include <iostream>

void Harl::debug(void)
{
    std::cout << "Eu amo ter bacon extra para o meu hambúrguer 7XL-duplo-queijo-triplopicles-ketchup-especial."
              << "Eu realmente amo!" << std::endl;
}

void Harl::info(void)
{
    std::cout << "Eu não acredito que adicionar bacon extra custa mais dinheiro. "
              << "Vocês não colocaram bacon suficiente no meu hambúrguer! "
              << "Se vocês tivessem colocado, eu não estaria pedindo por mais!" 
              << std::endl;
}

void Harl::warning(void)
{
    std::cout << "Eu acho que mereço ter um pouco de bacon extra grátis. "
              << "Eu venho aqui há anos e vocês só começaram trabalhar aqui desde o mês passado." << std::endl;
}

void Harl::error(void)
{
    std::cout << "Isso é inaceitável! Quero falar com o gerente agora." << std::endl;
}

void Harl::complain(std::string level)
{
    void (Harl::*functions[4])(void) = {
        &Harl::debug,
        &Harl::info,
        &Harl::warning,
        &Harl::error
    };
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    for (int i = 0; i < 4; i++)
    {
        if (level == levels[i])
        {
            (this->*functions[i])();
            return ;
        }
    }
}
