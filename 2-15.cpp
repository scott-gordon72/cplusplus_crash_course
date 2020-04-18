/*
 * A program that prints a greeting that depends on the Race selected
 */

#include <cstdio>

enum class Race
{
    Dinan,
    Teklan,
    Ivyn,
    Moiran,
    Camite,
    Julian,
    Aiden
};

int main()
{
    Race race = Race::Ivyn;

    switch (race)
    {
    case Race::Dinan:
    {
        printf("You work hard.");
    }
    break;
    case Race::Teklan:
    {
        printf("You are very strong.");
    }
    break;
    case Race::Ivyn:
    {
        printf("You are a great leader.");
    }
    break;
    case Race::Moiran:
    {
        printf("My, how versatile you are!");
    }
    break;
    case Race::Camite:
    {
        printf("You're incredibly helpful.");
    }
    break;
    case Race::Julian:
    {
        printf("Anything you want!");
    }
    break;
    case Race::Aiden:
    {
        printf("What an enigma.");
    }
    default:
    {
        printf("Error: unknown race!");
    }
    }
}