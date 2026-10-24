#include "mathsolver.h"
#include <random>
using namespace std;

MathSolver::MathSolver():
     plus_correct(0),
     plus_uncorrect(0),
     minus_correct(0),
     minus_uncorrect(0),
     multiply_correct(0),
     multiply_uncorrect(0),
     a(0),
     b(0),
     operation(0),
     user_input(0),
     correct(false),
     r(),
     gen(r()) {
}

MathSolver::~MathSolver() {
}

void MathSolver::generate_training_example() {
    uniform_int_distribution<int> number_gen(0, 100);
    uniform_int_distribution<int> operation_gen(0, 2); // 0 +; 1 -; 2 *
    a = number_gen(gen);
    b = number_gen(gen);
    operation = operation_gen(gen);
}
