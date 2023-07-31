#include <iostream>
using namespace std;

class Person {
protected:
    int n1;
public:
    Person(int n) { n1 = n; }
};

class Money : public Person {
private:
    int n2;
public:
    Money(int n, int m) : Person(n), n2(m) {}
    bool operator>(Money& m) {
        return n1 * n2 > m.n1 * m.n2;
    }
    friend ostream& operator<<(ostream& os, Money& m) {
        os << "人数：" << m.n1 << "，平均奖金：" << m.n2 << endl;
        return os;
    }
};

int main() {
    Money m1(100, 2000);
    Money m2(200, 1500);
    if (m1 > m2) {
        cout << "总奖金数多的对象的数据：" << endl;
        cout << m1 << endl;
    }
    else {
        cout << "总奖金数多的对象的数据：" << endl;
        cout << m2 << endl;
    }
    return 0;
}