#ifndef HUMAN_B_HPP
#define HUMAN_B_HPP

#include <string>
#include "weapon.hpp"

class HumanB {
    private:
        std::string _name;
        Weapon *_weapon;
    public:
        HumanB(std::string name);
        ~HumanB();
        void attack();
        void setWeapon(Weapon &weapon);
};
#endif
