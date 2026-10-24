#ifndef MATHSOLVER_H
#define MATHSOLVER_H

#include <random>
using namespace std;

class MathSolver {
private:
    int plus_correct, plus_uncorrect;
    int minus_correct, minus_uncorrect;
    int multiply_correct, multiply_uncorrect;
    int a, b, operation;
    int user_input;
    bool correct;
    random_device r;
    mt19937 gen;
public:
    MathSolver();
    ~MathSolver();
    void menu() const;
    void print_statistic() const;
    void print_training_example() const;
    void get_user_input();
    void generate_training_example();
    void check_answer();
    void update_statistic();
};
#endif
