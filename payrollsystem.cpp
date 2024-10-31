#include <iostream>

class Employee {
public:
    double baseSalary;

    void input() {
        std::cout << "Enter the base salary: ";
        std::cin >> baseSalary;
    }
};

class Principle : public Employee {
public:
    double calculate() {
        return baseSalary * 1.5;  // Assuming 50% bonus for principles
    }
};

class Teacher : public Employee {
public:
    double calculate1() {
        return baseSalary * 1.2;  // Assuming 20% bonus for teachers
    }
};

class Peon : public Employee {
public:
    double calculate2() {
        return baseSalary * 1.1;  // Assuming 10% bonus for peons
    }
};

int main() {
    Employee e;
    Principle p;
    Teacher t;
    Peon g;
    int num;

    std::cout << "Enter 1 for principle,\n2 for teacher, and \n3 for peon\n";
    std::cin >> num;

    // Input base salary once for reuse
    e.input();

    if (num == 1) {
        p.baseSalary = e.baseSalary;
        std::cout << "\nAfter calculating, the salary is:\n" << p.calculate() << std::endl;
    }
    else if (num == 2) {
        t.baseSalary = e.baseSalary;
        std::cout << "\nSalary is:\n" << t.calculate1() << std::endl;
    }
    else if (num == 3) {
        g.baseSalary = e.baseSalary;
        std::cout << "\nAfter calculating, the salary is:\n" << g.calculate2() << std::endl;
    }
    else {
        std::cout << "Invalid choice!" << std::endl;
    }

    return 0;
}