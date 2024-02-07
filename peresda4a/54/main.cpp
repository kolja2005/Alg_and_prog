#include <cmath>
class Employee {
public:
    Employee(std::string name, std::string job, int salary) {
        this->name = name;
        this->job = job;
        this->money = salary;
    }
    virtual int bonus(double percent) {
        this->bon = round(money * percent);
        return bon;
    }
    int salary() {
        return money + bonus(bonuses[job]);
    }
    friend std::ostream& operator<<(std::ostream& os, Employee& employee) {
        os << employee.name + " (" + employee.job + "): " << employee.salary();
        return os;
    }
    std::string name, job;
    int money, bon;



};

class Manager :public Employee {
public:
    Manager(std::string name, int money = 16242) :Employee(name, "manager", money) {
    }
    int bonus(double percent) override {
        if (percent * 100 < 10) {
            percent = 0.1;
        }
        this->bon = round(percent * money);
        return bon;
    }
    int bon;
    double percent = bonuses["manager"];
};