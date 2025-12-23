#include "Zombie.hpp"

int main()
{
    int size = 3;
    Zombie* horde = zombieHorde(size, "kleber");
    for(int i = 0; i< size; i++)
    {
        horde[i].announce();
    }
    delete[] horde;
      return (0);
}
