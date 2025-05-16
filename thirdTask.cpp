#include <iostream>

void println(string str = "") {
	сout << str << endl;
}

using namespace std;

int main()
{
    string gender = "";
    string zodiak = "";
    int age = 0;

    //condition lambdas
    bool earth_zodiak = [](string zod) {zod == "" || zod == "" || zod == ""};
    bool water_zodiak = [](string zod) {zod == "" || zod == "" || zod == ""};
    bool gender_lambda_w = [](string gen) {gen == "w" || "ж"};
    bool gender_lambda_m = [](string gen) {gen == "m" || "м"};

    cin >> gender;
    cin >> zodiak;
    cin >> age;

    if (gender_lambda_m(gender.toLower()) && water_zodiak(zodiak.toLower()) && age < 40) {
	println("Сегодня очень плодотворный день. Можно добиться того, что прежде казалось почти невозможным.");
    } else if (gender_lambda_w(gender.toLower()) && earth_zodiak(zodiak.toLower()) && (age > 15 && age < 30)) {
	println("Сегодняшний вечер подходит для общения с друзьями, проведения домашних праздников и импровизированных вечеринок.");
	println("Будет не только весело, но и интересно: найдётся дело, которое увлечёт всех.");
    } else {
	println("Гороскоп для вас находится в разработке. Приходите чуточку позже ;)");
    }
}