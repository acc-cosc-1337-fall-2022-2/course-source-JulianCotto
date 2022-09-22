#include "default.h"


int get_weekly_pay(int salary)
{
    return salary / 52;
}

int get_weekly_pay(int hours, int rate)
{
    return hours * rate;
}

double get_total(double hours, double rate = .08)
{
    return hours * rate;
}