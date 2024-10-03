#ifndef ATARGET_HPP
#define ATARGET_HPP

#include <iostream>

class ATarget
{
    protected:
        std::string _type;
    public:
        // Now you will create an ATarget abstract class, in Coplien's form. It has a type
        // attribute, which is a string, and its associated getter, getType, that return a
        // reference to constant string.
        std::string getType() const;
        // All these functions can be called on a constant object.
        // In much the same way as ASpell, it has a clone() pure method.
        virtual ATarget* clone() const = 0;
        virtual ~ATarget();
        // It has a constructor that takes its type.
        ATarget(std::string type);


        // Now, add to your ATarget a getHitBySpell function that takes a reference to constant ASpell.
        void    getHitBySpell(ASpell const & spell) const;

}
#endif



	public :
		ATarget & operator=(ATarget const & rhs);
		ATarget(ATarget const & obj);
