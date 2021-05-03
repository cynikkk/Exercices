#include "Duration.h"

Duration::Duration() : m_hours(0), m_minutes(0), m_seconds(0) {}
Duration::Duration(int hours, int minutes, int seconds) : m_hours(hours), m_minutes(minutes), m_seconds(seconds) {}

int Duration::getHours()   const { return m_hours;   }
int Duration::getMinutes() const { return m_minutes; }
int Duration::getSeconds() const { return m_seconds; }

bool Duration::operator == (Duration const& a)
{
    return (m_hours == a.m_hours && m_minutes == a.m_minutes && m_seconds == a.m_seconds);
}

bool Duration::operator != (Duration const& a)
{
    return (m_hours != a.m_hours || m_minutes == a.m_minutes || m_seconds != a.m_seconds);
}

bool Duration::operator < (Duration const& a)
{
    if (m_hours < a.m_hours)
        return true;
    else if (m_hours == a.m_hours && m_minutes < a.m_minutes)
        return true;
    else if (m_hours == a.m_hours && m_minutes == a.m_minutes && m_seconds < a.m_seconds)
        return true;
    else 
        return false; 
}

bool Duration::operator > (Duration const& a)
{
    if (m_hours > a.m_hours)
        return true;
    else if (m_hours == a.m_hours && m_minutes > a.m_minutes)
        return true;
    else if (m_hours == a.m_hours && m_minutes == a.m_minutes && m_seconds > a.m_seconds)
        return true;
    else 
        return false; 
}