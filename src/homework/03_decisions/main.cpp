#include "decisions.h"

int main()
{
    int selx;

    selx = menu();
    menu_switch_functions(selx);
    outro();

    return 0;
}
