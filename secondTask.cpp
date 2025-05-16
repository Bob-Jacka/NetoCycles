#include <iostream>

using namespace std;

int main()
{
	int fNum = 0; //first number
	int sNum = 0; //second number
	int tNum = 0; //third number
	
	cout << "Введите первое число: ";
	cin >> fNum >> endl;

	cout << "Введите второе число: ";
	cin >> sNum >> endl;

	cout << "Введите третье число: ";
	cin >> tNum >> endl;

    	int first = (fNum  < sNum ) ? ((fNum  < tNum ) ? fNum  : tNum ) : ((sNum  < c) ? sNum  : tNum );
    	int second = (fNum  > sNum ) ? ((fNum  < tNum ) ? fNum   : (sNum  < tNum  ? sNum  : tNum )) : ((sNum  > c) ? sNum  : (fNum  < tNum  ? fNum  : tNum ));
    	int third = (fNum  > sNum ) ? ((fNum  > tNum ) ? fNum  : tNum ) : ((sNum  > tNum ) ? sNum  : tNum );

	cout << fNum > sNum ? fNum : sNum << endl;
}