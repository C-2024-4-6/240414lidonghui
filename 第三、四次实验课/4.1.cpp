#include <iostream>
using namespace std;

int main() {
    int resultArray[10];             // 用于存储不同数字的数组
    int count = 0;               // 记录resultArray中已经存储的不同数字的个数

    cout << "请输入10个数：" << endl;
    for (int i = 0; i < 10; i++) {
        int num;
        cin >> num;

        bool isNew = true;          // 先假设输入的数是新值
        for (int j = 0; j < count; j++) {
            if (num == resultArray[j]) {
                isNew = false;          // 如果在已存储的数中找到相同的，说明不是新值
                break;
            }
        }

        if (isNew) {
            resultArray[count] = num;
            count++;
        }
    }

    cout << "不同的数为：" << endl;
    for (int k = 0; k < count; k++) {
        cout << resultArray[k] << " ";
    }
    cout << endl;

    return 0;
}