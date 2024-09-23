#include <iostream>

using namespace std;

int main() {
    int N, digit, sum = 0;

    // �������� ����� N � ���������
    cout << "Enter a positive integer N: ";
    cin >> N;

    // ������� ����� �� ����� �� ����������� ���� ����, ������ �� 5
    while (N > 0) {
        digit = N % 10;  // �������� ������� �����
        if (digit > 5) {
            sum += digit;  // ���� ����� ����� 5, ������ �� �� ����
        }
        N /= 10;  // ��������� ������� �����
    }

    // ��������� ����������
    cout << "The sum of digits greater than 5: " << sum << endl;

    return 0;
}
