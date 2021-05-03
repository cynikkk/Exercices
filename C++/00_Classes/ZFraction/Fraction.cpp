#include "Fraction.h"

int pgcd(int a, int b)
{
    while (b != 0)
    {
        const int t = b;
        b = a % b;
        a = t;
    }
    return a;
}

/* Constructors */
Fraction::Fraction()                               : m_numerator(0), m_denominator(1) {}
Fraction::Fraction(int numerator)                  : m_numerator(numerator), m_denominator(1) {}
Fraction::Fraction(int numerator, int denominator) : m_numerator(numerator), m_denominator(denominator) { simplify(); }

/* Operator overloads */
bool Fraction::operator == (Fraction const& fraction)
{
    return (m_numerator == fraction.m_numerator && m_denominator == fraction.m_denominator);
}

bool Fraction::operator != (Fraction const& fraction)
{
    return !(this == &fraction);
}

bool Fraction::operator < (Fraction const& fraction)
{
    if (m_numerator < fraction.m_numerator)
        return true;
    if (m_numerator == fraction.m_numerator && m_denominator < fraction.m_denominator)
        return true;
    else
        return false;
}

bool Fraction::operator > (Fraction const& fraction)
{
    return !(this < &fraction);
}

Fraction& Fraction::operator += (Fraction const& fraction)
{
    m_numerator = m_numerator * fraction.m_denominator + m_denominator * fraction.m_numerator;
    m_denominator = m_denominator * fraction.m_denominator;
    simplify();
    return *this;
}

Fraction& Fraction::operator -= (Fraction const& fraction)
{
    m_numerator -= fraction.m_numerator;
    m_denominator -= fraction.m_denominator;
    simplify();
    return *this;
}

Fraction& Fraction::operator *= (Fraction const& fraction)
{
    m_numerator *= fraction.m_numerator;
    m_denominator *= fraction.m_denominator;
    simplify();
    return *this;
}

Fraction& Fraction::operator /= (Fraction const& fraction)
{
    m_numerator /= fraction.m_numerator;
    m_denominator /= fraction.m_denominator;
    simplify();
    return *this;
}

Fraction Fraction::operator + (Fraction const& fraction)
{
    Fraction tmp(*this);
    tmp += fraction;
    return tmp;
}

Fraction Fraction::operator - (Fraction const& fraction)
{
    Fraction tmp(*this);
    tmp -= fraction;
    return tmp;
}

Fraction Fraction::operator * (Fraction const& fraction)
{
    Fraction tmp(*this);
    tmp *= fraction;
    return tmp;
}

Fraction Fraction::operator / (Fraction const& fraction)
{
    Fraction tmp(*this);
    tmp /= fraction;
    return tmp;
}

std::ostream& operator << (std::ostream& flux, Fraction const& fraction)
{
    if (fraction.m_numerator == 0)
        flux << 0;
    else if (fraction.m_numerator == fraction.m_denominator)
        flux << 1;
    else
        flux << fraction.m_numerator << '/' << fraction.m_denominator;
    return flux;
}

/*
std::istream& Fraction::operator >> (std::istream& flux) const
{

}
*/

/* Methods */
void Fraction::simplify()
{
    int nbr = pgcd(m_numerator, m_denominator);
    m_numerator /= nbr;
    m_denominator /= nbr;
}

int Fraction::getNumerator()
{
    return m_numerator;
}

int Fraction::getDenominator()
{
    return m_denominator;
}