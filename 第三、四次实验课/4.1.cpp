#include <iostream>
using namespace std;

int main() {
    int resultArray[10];             // ���ڴ洢��ͬ���ֵ�����
    int count = 0;               // ��¼resultArray���Ѿ��洢�Ĳ�ͬ���ֵĸ���

    cout << "������10������" << endl;
    for (int i = 0; i < 10; i++) {
        int num;
        cin >> num;

        bool isNew = true;          // �ȼ��������������ֵ
        for (int j = 0; j < count; j++) {
            if (num == resultArray[j]) {
                isNew = false;          // ������Ѵ洢�������ҵ���ͬ�ģ�˵��������ֵ
                break;
            }
        }

        if (isNew) {
            resultArray[count] = num;
            count++;
        }
    }

    cout << "��ͬ����Ϊ��" << endl;
    for (int k = 0; k < count; k++) {
        cout << resultArray[k] << " ";
    }
    cout << endl;

    return 0;
}