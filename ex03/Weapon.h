#ifndef WEAPON_H
# define WEAPON_H

#include <string>

class Weapon {
private:
   std::string type; // store weapon type

public:
    Weapon(const std::string& type); // constructor
    ~Weapon(); // dont really need it in this case, just including for good habits
    const std::string& getType() const; // read-only access
    void setType(const std::string& type);
};

#endif
