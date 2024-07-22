#include <iostream>
using namespace std;

// 년도를 넘겨받아 윤년/평년을 판단해 윤년이면 True, 평년이면 False를 리턴하는 함수
bool isLeapYear(int year) {
    return year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
}

// 인수로 년, 월을 입력받아 그 달의 마지막 날짜를 리턴하는 함수
int lastDay(int year, int month) {
    int m[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    m[1] = isLeapYear(year) ? 29 : 28;
    return m[month - 1];
}

// 인수로 년, 월, 일을 넘겨받아 요일을 숫자로 리턴하는 함수
int weekDay(int year, int month, int day) {
    // 요일 계산 로직을 구현해주세요.
    // 0: 일요일, 1: 월요일, ..., 6: 토요일
    // 특정 날짜의 요일을 계산하는 방법은 다양하게 있습니다.
    // 여기서는 Zeller's Congruence를 사용하면 됩니다.
    // (참고: https://en.wikipedia.org/wiki/Zeller%27s_congruence)
    // ...
    return 0; // 임시로 일요일(0)을 리턴합니다.
}

int main() {
    int year, month, day;
    cout << "년 월 일을 입력하세요: ";
    cin >> year >> month >> day;

    int dayOfWeek = weekDay(year, month, day);
    cout << "요일: " << dayOfWeek << endl;

    return 0;
}