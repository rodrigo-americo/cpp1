#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {
private:
  std::string name;

public:
  void announce();
  Zombie();
  ~Zombie();
  void setName(std::string newName);
};

Zombie* zombieHorde(int n, std::string name);

#endif