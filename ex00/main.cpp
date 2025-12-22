#include "Zombie.hpp"

int main() {
  // Stack Zombie
  // Created normally, exists only in this scope
  Zombie stackOriginal("OriginalStackZ");
  stackOriginal.announce();

  // Heap Zombie
  // Manually allocated, must be manually deleted
  Zombie *heapZ = newZombie("HeapZ");
  heapZ->announce();
  delete heapZ;

  // Random Chump
  // Created on stack in a helper function, announces itself, then dies
  randomChump("ChumpZ");

  return (0);
}
