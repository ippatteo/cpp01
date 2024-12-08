#include "weapon.hpp"

Weapon::Weapon(std::string caliber) : type(caliber)
{
	std::cout << "stranger STRANGER	this is a fine " << caliber << "weapon" <<std::endl;
}

Weapon::~Weapon()
{
	std::cout << "oh no the " << type << "weapon broke" <<std::endl;
}

void Weapon::setType(std::string caliber)
{
	type = caliber;
}

const std::string& Weapon::getType() const
{
	return type;
}