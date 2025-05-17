#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void println(string str = "") {
	cout << str << endl;
}

void print(string str) {
	cout << str;
}

int main()
{
    string gender = "";
    string zodiak = "";
    int age = 0;
    
    locale::global(std::locale("ru_RU.UTF-8"));
    
    //Сondition lambdas
    auto earth_zodiak_check = [](string zod) {return zod == "телец" || zod == "дева" || zod == "козерог" || zod == "Телец" || zod == "Дева" || zod == "Козерог";};
    auto water_zodiak_check = [](string zod) {return zod == "рак" || zod == "скорпион"|| zod == "рыба" || zod == "Рак" || zod == "Скорпион" || zod == "Рыба";};
    auto gender_lambda_w = [](string gen) {return gen == "w" || gen == "ж" || gen == "W" || gen == "Ж";};
    auto gender_lambda_m = [](string gen) {return gen == "m" || gen == "м" || gen == "M" || gen == "М";};

    print("Введите пол: ");
    cin >> gender;
    print("Введите знак зодиака: ");
    cin >> zodiak;
    print("Введите возраст: ");
    cin >> age;
    
    println("Ваше предсказание:");
    if (gender_lambda_m(gender) && water_zodiak_check(zodiak) && age < 40) {
	println("Сегодня очень плодотворный день. Можно добиться того, что прежде казалось почти невозможным.");
    } else if (gender_lambda_w(gender) && earth_zodiak_check(zodiak) && (age >= 15 && age <= 30)) {
	println("Сегодняшний вечер подходит для общения с друзьями, проведения домашних праздников и импровизированных вечеринок.");
	println("Будет не только весело, но и интересно: найдётся дело, которое увлечёт всех.");
    } else {
	println("Гороскоп для вас находится в разработке. Приходите чуточку позже ;)");
    }
}
