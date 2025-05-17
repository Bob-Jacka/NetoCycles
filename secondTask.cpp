#include <iostream>

using namespace std;

int main()
{
	int fNum = 0; //first number
	int sNum = 0; //second number
	int tNum = 0; //third number
	
	cout << "Введите первое число: ";
	cin >> fNum;

	cout << "Введите второе число: ";
	cin >> sNum;

	cout << "Введите третье число: ";
	cin >> tNum;
	
	int first = (fNum > sNum) ? ((fNum > tNum) ? fNum : tNum) : ((sNum > tNum) ? sNum : tNum );
	int second = (fNum > sNum) ? ((fNum < tNum) ? fNum : (sNum < tNum ? sNum : tNum)) : ((sNum  > tNum) ? sNum  : (fNum < tNum  ? fNum : tNum));
    	int third = (fNum < sNum) ? ((fNum < tNum) ? fNum : tNum) : ((sNum < tNum) ? sNum : tNum);

	cout << "Результат: " << first << " " << second << " " << third << " " << endl;
}
