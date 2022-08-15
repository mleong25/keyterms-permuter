#include <iostream>

#include "Executive.h"

int main(int argc, char** argv) {
  std::cout << "\n\n============================================================================="
    << "\n\n\t\t\t    Keyterm Generator!\n\n"
    << "\n\t1. Start by setting up a base of words, terms"
    << " \n\t   or phrases to generate combinations."
    << "\n\t2. Type in your string and hit enter to input the"
    << " \n\t   next set of strings."
    << "\n\t3. When satisfied, hit enter on an empty line to complete."
    << "\n\n=============================================================================\n\n\n";
  Executive exec;
  exec.init();
  return(0);
}