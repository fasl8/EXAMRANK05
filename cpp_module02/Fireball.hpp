#ifndef FIREBALL_HPP
#define FIREBALL_HPP
// Create the following two spells, on the same model as Fwoosh:

// * Fireball (Name: "Fireball", Effects: "burnt to a crisp")
// * Polymorph (Name: "Polymorph", Effects: "turned into a critter")

#include <iostream>

class Fireball:
{
	public:
		std::string name = Fireball;
		std::string effects = crisp;
		Fireball();
		~Fireball();
		virtual ASpell *clone() const;

}