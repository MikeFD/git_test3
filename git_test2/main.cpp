#include "function.h"  // ����ͷ�ļ���Ϊ function.h

int main() {
    int choice;
    ElemType a, b, c;

    while (true) {
        cout << "��ѡ���ܣ�" << endl;
        cout << "1. �����ӷ�" << endl;
        cout << "2. ��������" << endl;
        cout << "3. �����˷�" << endl;
        cout << "4. ��������" << endl;
        cout << "5. �����ӷ�" << endl;
        cout << "6. ��������" << endl;
        cout << "0. �˳�" << endl;
        cout << "������ѡ�";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "����������������";
            cin >> a >> b;
            cout << "�����" << add(a, b) << endl;
            break;
        case 2:
            cout << "����������������";
            cin >> a >> b;
            cout << "�����" << minus(a, b) << endl;
            break;
        case 3:
            cout << "����������������";
            cin >> a >> b;
            cout << "�����" << times(a, b) << endl;
            break;
        case 4:
            cout << "����������������";
            cin >> a >> b;
            if (b == 0) {
                cout << "��������Ϊ0��" << endl;
            }
            else {
                cout << "�����" << divide(a, b) << endl;
            }
            break;
        case 5:
            cout << "����������������";
            cin >> a >> b >> c;
            cout << "�����" << triple_add(a, b, c) << endl;
            break;
        case 6:
            cout << "����������������";
            cin >> a >> b >> c;
            cout << "�����" << triple_minus(a, b, c) << endl;
            break;
        case 0:
            cout << "�˳�����" << endl;
            return 0;
        default:
            cout << "��Чѡ����������롣" << endl;
            break;
        }
    }

    return 0;
}