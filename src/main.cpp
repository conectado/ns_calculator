#include "ns_solver.h"
#include <vector>
#include <iostream>

int main() {
  ns_solver<std::vector<std::vector<double>>> ns;
  std::cout << ns(0,0); 
}
