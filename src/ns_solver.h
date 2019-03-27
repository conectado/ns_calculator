#ifndef __NS_SOLVER_H_INCLUDED__
#define __NS_SOLVER_H_INCLUDED__
template <class matrix>
class ns_solver {
  private:
    int itermax;

    double delX, delY;
    int imax, jmax;
    matrix u, v, p, F, G;

  public:
    ns_solver ();
    ns_solver (double initial, double del, double size);
    ns_solver (double initial, double delX, double sizeX, double delY, double sizeY);

    void evolve();
    void evolve(double dt);

    // TODO make N-dimension available
    double& operator()(const int i, const int j);
    double operator()(const int i, const int j) const;

    ~ns_solver();
}; 

#include "ns_solver.tpp"
#endif
