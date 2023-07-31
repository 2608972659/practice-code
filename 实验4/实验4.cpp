// 实验4.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#include <iostream>
using namespace std;

int main()
{
    string s, m;
    int num = 0;
    cin >> s;
    
    for (int j = 0; j < s.length(); j++)
    {
        if (s[j] >= '0' && s[j] <= '9')
        {
            m.push_back(s[j]);
        }
    }
    
    for (int p = 0; p < m.length(); p++)
    {
        num = num * 10 + m[p] - '0';
        
    }
    num += 100;
    cout << num;
}


