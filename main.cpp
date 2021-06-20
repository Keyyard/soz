#include <iostream>
#include <string>
#include <windows.h>
#include <unistd.h>
#include <cstdlib>
#include "soz.h"
int main () {
    input();
    ClearScreen();
    soz(name);
    heart();
    return 0;
}
