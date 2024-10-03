#ifndef ASPELL_HPP
#define ASPELL_hpp

#include <iostream>

class ASpell
{
    protected:
    // Create an abstract class called ASpell, in Coplien's form, that has the
    // following protected attributes:
    // * name (string)
    // * effects (string)
        std::string _name;
        std::string _effect;

    public:
        ASpell();
        // Both will have getters (getName and getEffects) that return strings.
        // Also add a clone pure method that returns a pointer to ASpell.
        // All these functions can be called on a constant object.
        std::string getName() const;
        std::string getEffects() const;
        virtual ASpell* clone() const = 0;
        virtual ~ASpell();
        // ASpell has a constructor that takes its name and its effects, in that order.
        ASpell 
    
}

#endif
