#ifndef MATHSOLVER_H
#define MATHSOLVER_H
class MathSolver {
private:
    int plus_correct, plus_uncorrect;
    int minus_correct, minus_uncorrect;
    int multiply_correct, multiply_uncorrect;
    int a, b, operation;
    bool correct;
public:
    MathSolver();
    ~MathSolver();
    void print_statistic() const;
    void generate_training_example();
    void update_statistic();
    void check_answer(int user_answer);
};
#endif
