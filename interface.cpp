#include "mathsolver.h"
#include <iostream>

using namespace std;

void MathSolver::print_statistic() const {
    cout << "plus_correct " << plus_correct << " / plus_uncorrect " << plus_uncorrect << endl;
    cout << "minus_correct " << minus_correct << " / minus_uncorrect " << minus_uncorrect << endl;
    cout << "multiply_correct " << multiply_correct << " / multiply_uncorrect " << multiply_uncorrect << endl;
}

void MathSolver::print_training_example() const {
    cout << "solve this example:" << endl;
    if (operation == 0) {
        cout << a << " + " << b << " = ?" << endl;
    } else if (operation == 1) {
        cout << a << " - " << b << " = ?" << endl;
    } else if (operation == 2) {
        cout << a << " * " << b << " = ?" << endl;
    }
}

void MathSolver::menu() const {
    while (true) {
        cout << "1 - continue" << endl;
        cout << "2 - print_statistic" << endl;
        cout << "3 - exit" << endl;
        int choice = 0;
        cin >> choice;
        if (choice == 1) {
            break; // следующий пример
        } else if (choice == 2) {
            print_statistic(); // напечатать статистику
        } else if (choice == 3) {
            exit(0); // выход
        } else {
            cout << "please enter correct number" << endl; // повторно попросить ввести
            cin.clear();
            cin.ignore(256,'\n');
        }
    }
}

void MathSolver::get_user_input() {
    while (true) {
        cin >> user_input;
        if (cin) {
            break;
        } else {
            cout << "please enter correct number" << endl;
            cin.clear();
            cin.ignore(256,'\n');
        }
    }
}
