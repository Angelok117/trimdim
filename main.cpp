#include <iostream> 
#include "mathsolver.h"
using namespace std;

int main(){
    MathSolver math_solver;
    while (true) {
math_solver.generate_training_example();
math_solver.print_training_example();
math_solver.get_user_input();
math_solver.check_answer();
math_solver.update_statistic();
math_solver.menu();
    }
}
