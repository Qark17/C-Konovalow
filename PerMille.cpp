#include "PerMille.h"
#include "Piquet.h"
#include <iostream>
#include <string>
using namespace std;

int PerMille::getPerMille() const
{
    return perMille;
}

PerMille::PerMille(const int perMille, const Piquet& startPiq, const Piquet& endPiq) :
    perMille(perMille), startPiq(startPiq), endPiq(endPiq)
{
    if (abs(perMille) > 50)
    {
        cerr << "Значение уклона должно быть положительным, но не более 50‰!" << endl;
        exit(1);
    }
    if (endPiq <= startPiq)
    {
        cerr << "Конечный пикет должен быть больше начального!" << endl;
        exit(1);
    }
}

string PerMille::ToString() const
{
    return to_string(perMille) + " + " + startPiq.ToString() + ", " + endPiq.ToString();
}

ostream& operator<<(ostream& os, const PerMille& s)
{
    os << s.ToString();
    return os;
}