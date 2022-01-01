#include "main.h"

int dz()
{
    int num;

    Interface(&num);
    system("cls");

    if (num == 1)
    {
        First();
    }
    else if (num == 2)
    {
        Second();
    }
    else if (num == 3)
    {
        Info();
    }
    else if (num == 0)
    {
        EndMenu();
    }
    else 
    {
        system("cls");
        dz();
    }

    InterfaceEnd();

    return 0;
}