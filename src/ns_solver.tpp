#include "ns_solver.h"
#include "utility"

template <class matrix>
ns_solver<matrix>::ns_solver(): v(100), p(100) { // TODO Change this too specific for vector<vector<double>>. (Create a new interface with init for n-dimensional) 
  u = init(std::move(matrix(100))); 
}

template <class matrix>
matrix ns_solver<matrix>::init(matrix mat) {
  for (int i=0; i < 100; i++) {
    mat[i].resize(100);
  } 

  return mat;
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
  return u[i][j];
}

template<class matrix>
double ns_solver<matrix>::operator()(const int i, const int j) const {
  return u[i][j];
}

template<class matrix>
ns_solver<matrix>::~ns_solver() {
}
