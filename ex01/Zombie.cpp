#include "Zombie.hpp"

void Zombie::announce() {
  std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string newName) { name = newName; }
Zombie::Zombie() {}

Zombie::~Zombie() { std::cout << name << " xau..." << std::endl; }
