#include "function.h"  // 假设头文件名为 function.h

int main() {
    int choice;
    ElemType a, b, c;

    while (true) {
        cout << "请选择功能：" << endl;
        cout << "1. 两数加法" << endl;
        cout << "2. 两数减法" << endl;
        cout << "3. 两数乘法" << endl;
        cout << "4. 两数除法" << endl;
        cout << "5. 三数加法" << endl;
        cout << "6. 三数减法" << endl;
        cout << "0. 退出" << endl;
        cout << "请输入选项：";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "请输入两个整数：";
            cin >> a >> b;
            cout << "结果：" << add(a, b) << endl;
            break;
        case 2:
            cout << "请输入两个整数：";
            cin >> a >> b;
            cout << "结果：" << minus(a, b) << endl;
            break;
        case 3:
            cout << "请输入两个整数：";
            cin >> a >> b;
            cout << "结果：" << times(a, b) << endl;
            break;
        case 4:
            cout << "请输入两个整数：";
            cin >> a >> b;
            if (b == 0) {
                cout << "除数不能为0！" << endl;
            }
            else {
                cout << "结果：" << divide(a, b) << endl;
            }
            break;
        case 5:
            cout << "请输入三个整数：";
            cin >> a >> b >> c;
            cout << "结果：" << triple_add(a, b, c) << endl;
            break;
        case 6:
            cout << "请输入三个整数：";
            cin >> a >> b >> c;
            cout << "结果：" << triple_minus(a, b, c) << endl;
            break;
        case 0:
            cout << "退出程序。" << endl;
            return 0;
        default:
            cout << "无效选项，请重新输入。" << endl;
            break;
        }
    }

    return 0;
}