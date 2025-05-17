#include <iostream>
#include <cmath>

#define MAX_NUMBER 100
#define MIN_NUMBER -100
#define LESSTHAT "меньше чем"
#define MORETHAT "больше чем"
#define EQUAL "равно"

using namespace std;

string toNumeral(unsigned long Number, bool Thousands = false) {
    string units[] = {"один", "два", "три", "четыре", "пять", "шесть", "семь", "восемь", "девять"};
    string tens[] = {"десять", "двадцать", "тридцать", "сорок", "пятьдесят", "шестьдесят", "семьдесят", "восемьдесят",
                     "девяносто"};
    string secondten[] = {"одиннадцать", "двенадцать", "тринадцать", "четырнадцать", "пятнадцать", "шестнадцать",
                          "семнадцать", "восемнадцать", "девятнадцать"};
    string women[2] = {"одна", "две"};
    string result("");
    typedef unsigned char byte;
    byte digits[3] = {0};
    unsigned long n = Number;
    digits[0] = n % 10;
    digits[1] = (n / 10) % 10;
    digits[2] = n / 100;
    if (digits[1] > 0) {
        if ((digits[1] == 1) && (digits[0] != 0)) {
            result += (secondten[digits[0] - 1] + " ");
            return result;
        } else {
            result += (tens[digits[1] - 1] + " ");
        }
    }
    if (digits[0] > 0) {
        if (((digits[0] > 2) && (digits[1] != 1)) || (!Thousands))
            result += (units[digits[0] - 1] + " ");
        else result += (women[digits[0] - 1] + " ");
    }
    return result;
}

void println(string str = "") {
	cout << str << endl;
}

void print(string str) {
	cout << str;
}

int main() {
    int num1 = 0;
    int num2 = 0;

    print("Введите целое число: ");
    cin >> num1;

    print("Введите целое число: ");
    cin >> num2;

    if ((num1 < MAX_NUMBER && num1 > MIN_NUMBER) && (num2 < MAX_NUMBER && num2 > MIN_NUMBER)) {
        string expression = "";
        if (num1 < num2) {
            expression = LESSTHAT;
        } else if (num1 > num2) {
            expression = MORETHAT;
        } else if (num1 == num2) {
            expression = EQUAL;
        }
        string fStr = num1 < 0 ? "минус " + toNumeral(abs(num1)) : toNumeral(num1);
        string sStr = num2 < 0 ? "минус " + toNumeral(abs(num2)) : toNumeral(num2);
        println(fStr + expression + " " + sStr);
    } else {
        println("Ошибка! Одно из чисел вне диапазона!");
    }
}
