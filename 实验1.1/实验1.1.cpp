#include <iostream>
#include <vector>
#include <random>

using namespace std;

class Student {
public:
    Student(int n) {
        scores.reserve(n);
        for (int i = 0; i < n; i++) {
            int score;
            cout << "请输入第" << i + 1 << "个学生的分数：" << endl;
            cin >> score;
            if (score > 80) {
                scores.push_back(score);
            }
        }
        if (scores.size() < 2) {
            cout << "80分以上的学生人数不足2人，请重新输入" << endl;
            
        }
    }

    void pickRandomStudent() {
        int idx = rand() % scores.size();
        cout << "随机抽取的学生学号为" << idx + 1 << "，分数为" << scores[idx] << endl;
    }

private:
    vector<int> scores;
};

int main() {
    srand((unsigned)time(NULL));

    int n;
    cout << "请输入学生人数：" << endl;
    cin >> n;
    Student s(n);

    s.pickRandomStudent();

    return 0;
}