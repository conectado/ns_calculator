#include "ns_solver.h"

template <class matrix>
ns_solver<matrix>::ns_solver() {
}

template<class matrix>
ns_solver<matrix>::ns_solver(double initial, double del, double size) {
}

template<class matrix>
ns_solver<matrix>::ns_solver(double initial, double delX, double sizeX, double delY, double sizeY) {
}

template<class matrix>
void ns_solver<matrix>::evolve() {
}

template<class matrix>
void ns_solver<matrix>::evolve(double dt) {
}

template<class matrix>
double& ns_solver<matrix>::operator()(const int i, const int j) {
  return 0;
}

template<class matrix>
double ns_solver<matrix>::operator()(const int i, const int j) const {
  return 0;
}

template<class matrix>
ns_solver<matrix>::~ns_solver() {
}
