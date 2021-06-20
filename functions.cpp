#include <iostream>
#include <string>
#include <windows.h>
#include <unistd.h>
#include <cstdlib>
#include "soz.h"
void ClearScreen()
    {
   system("cls");
    }
void heart () {
    std::cout <<"\t\t\t\t    *  *     *  *            \n";
    std::cout <<"\t\t\t\t   *      *       *           \n";
    std::cout <<"\t\t\t\t   *              *           \n";
    std::cout <<"\t\t\t\t     *           *            \n";
    std::cout <<"\t\t\t\t      *        *             \n";
    std::cout <<"\t\t\t\t        *     *              \n";
    std::cout <<"\t\t\t\t           *                 \n";
    }
std::string input(std::string name) {
    std::cout<<"input the name please?\n";
    std::getline(std::cin, name);
    return name;
}
void soz (std::string name) {
    int i = 0;
    int length = name.size();
    std::cout<<"\t\t\t\t";
  while (i<length) {
  if (name[i]) {
  std::cout<<name[i];
  i++;
  sleep(1);
  }
}
std::cout<<"\n";
}
