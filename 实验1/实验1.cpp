#include <iostream>
#include <cstdlib>  
#include<time.h>
using namespace std;

// 学生类
class Student {
public:
    // 构造函数
    Student(int n) {
        head = new Node;
        head->next = NULL;
        Node* p = head;
        for (int i = 1; i <= n; i++) {
            int  score;
            string id;
            cout << "请输入第" << i << "个学生的学号和分数：";
            cin >> id >> score;
            if (score > 80) {
                count++;
            }
            if (score > 80) {
                Node* q = new Node;
                q->id =id;
                q->score = score;
                q->next = NULL;
                p->next = q;
                p = q; // 更新末尾节点指针
            }
        }
    }


    // 随机选择一个学生并输出其信息
    void randomSelect() {
        if (count < 2) {
            cout << "80分以上的学生不足2！" << endl;
            return;
        }
         srand(time(0));
        int k = rand() % count + 1; // 生成一个随机数k，k表示要选择的学生在链表中的位置
        
        Node* s = head->next;
        
        for (int i = 1; i < k; i++) {
            s = s->next;
            cout << k;
        }
        cout << "随机选择的学生是：" << endl;
        cout << "学号：" << s->id << " 分数：" << s->score << endl;
    }


private:
    
    struct Node {
        string id;
        int score;
        Node* next;
    };
    Node* head;
    
    int count = 0; 
    // 记录80分以上的学生数
};

int main() {
    int n;
    
    cout << "请输入学生人数：";
    cin >> n;
    Student stu(n);
    stu.randomSelect();
    return 0;
}