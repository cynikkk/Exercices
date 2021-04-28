#ifndef DURATION_H_
#define DURATION_H_
 
class Duration
{
private:
 
    int m_hours;
    int m_minutes;
    int m_seconds;

public:

    Duration();
    Duration(int hours = 0, int minutes = 0, int seconds = 0);

    int getHours() const;
    int getMinutes() const;
    int getSeconds() const;

    bool operator == (Duration const& a);
    bool operator != (Duration const& a);
    bool operator <  (Duration const& a);
    bool operator >  (Duration const& a);
 
};
 
#endif