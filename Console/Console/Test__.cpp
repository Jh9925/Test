#include <iostream>
using namespace std;

// �⵵�� �Ѱܹ޾� ����/����� �Ǵ��� �����̸� True, ����̸� False�� �����ϴ� �Լ�
bool isLeapYear(int year) {
    return year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
}

// �μ��� ��, ���� �Է¹޾� �� ���� ������ ��¥�� �����ϴ� �Լ�
int lastDay(int year, int month) {
    int m[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    m[1] = isLeapYear(year) ? 29 : 28;
    return m[month - 1];
}

// �μ��� ��, ��, ���� �Ѱܹ޾� ������ ���ڷ� �����ϴ� �Լ�
int weekDay(int year, int month, int day) {
    // ���� ��� ������ �������ּ���.
    // 0: �Ͽ���, 1: ������, ..., 6: �����
    // Ư�� ��¥�� ������ ����ϴ� ����� �پ��ϰ� �ֽ��ϴ�.
    // ���⼭�� Zeller's Congruence�� ����ϸ� �˴ϴ�.
    // (����: https://en.wikipedia.org/wiki/Zeller%27s_congruence)
    // ...
    return 0; // �ӽ÷� �Ͽ���(0)�� �����մϴ�.
}

int main() {
    int year, month, day;
    cout << "�� �� ���� �Է��ϼ���: ";
    cin >> year >> month >> day;

    int dayOfWeek = weekDay(year, month, day);
    cout << "����: " << dayOfWeek << endl;

    return 0;
}