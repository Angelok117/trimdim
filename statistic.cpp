#include <iostream>
#include "mathsolver.h"

using namespace std;

void MathSolver::update_statistic() {
    if (operation == 0) {
        // +
        if (correct) {
            plus_correct += 1;
        } else {
            plus_uncorrect += 1;
        }
    } else if (operation == 1) {
        // -
        if (correct) {
            minus_correct += 1;
        } else {
            minus_uncorrect += 1;
        }
    } else if (operation == 2) {
        // *
        if (correct) {
            multiply_correct += 1;
        } else {
            multiply_uncorrect += 1;
        }
    }
}

void MathSolver::check_answer() {
    if (operation == 0) {
        // +
        if (a + b == user_input) {
            correct = true;
        } else {
            correct = false;
        }
    } else if (operation == 1) {
        // -
        if (a - b == user_input) {
            correct = true;
        } else {
            correct = false;
        }
    } else if (operation == 2) {
        // *
        if (a * b == user_input) {
            correct = true;
        } else {
            correct = false;
        }
    }
}
