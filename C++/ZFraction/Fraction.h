#ifndef FRACTION_H_
#define FRACTION_H_

#include <istream>
#include <ostream>

class Fraction
{
private:
    /* Members */
    int m_numerator;
    int m_denominator;

    /* Methods */
    void simplify();

public:

    /* Constructors */
    Fraction();
    Fraction(int numerator);
    Fraction(int numerator, int denominator);

    /* Operator overloads */
    bool          operator == (Fraction const& fraction);
    bool          operator != (Fraction const& fraction);
    bool          operator <  (Fraction const& fraction);
    bool          operator >  (Fraction const& fraction);
    Fraction&     operator += (Fraction const& fraction);
    Fraction&     operator -= (Fraction const& fraction);
    Fraction&     operator *= (Fraction const& fraction);
    Fraction&     operator /= (Fraction const& fraction);
    Fraction      operator +  (Fraction const& fraction);
    Fraction      operator -  (Fraction const& fraction);
    Fraction      operator *  (Fraction const& fraction);
    Fraction      operator /  (Fraction const& fraction);
    friend std::ostream& operator << (std::ostream& flux, Fraction const& fraction);
    //std::istream& operator >> (std::istream& flux) const;

    /* Methods */
    int getNumerator();
    int getDenominator();
};

#endif