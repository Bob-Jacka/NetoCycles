#include <iostream>

using namespace std;
typedef const string con_string;

string toNumeral(unsigned long Number, bool Thousands) { 
	string units[] =  {"один","два","три","четыре","пять","шесть", "семь","восемь","девять"}; 
  string tens[] = {"десять","двадцать","тридцать","сорок","пятьдесят","шестьдесят", "семьдесят", "восемьдесят","девяносто"}; 
  string secondten[] = {"одиннадцать","двенадцать","тринадцать","четырнадцать","пятнадцать", "шестнадцать","семнадцать","восемнадцать","девятнадцать"}; 
  string Women[2]= {"одна","две"};    
  string result("");                                // пустая строка-результат
  typedef unsigned char byte;   
  byte digits[3] = {0};                 // - цифры числа
  unsigned long n = Number;
  digits[0] = n % 10;               //--младшая цифра
  digits[1] = (n / 10) % 10;            //--средняя цифра
  digits[2] = n / 100;                  //--старшая цифра
  if (digits[2]>0) result +=(hundreds[digits[2]-1]+" "); 
  if (digits[1]>0) { 
	if ((digits[1]==1) && (digits[0]!=0)) { 
		result +=(secondten[digits[0]-1]+" "); 
		return result; 
	}
    else 
	{ 
		result +=(tens[digits[1]-1]+" ");
	}
  }
  if (digits[0]>0) { 
	if (((digits[0]>2)&&(digits[1]!=1))||(!Thousands)) {
		result +=(units[digits[0]-1]+" ");
	}
    else {
		result +=(Women[digits[0]-1]+" ");
	}
  }
  return result;
}

void println(string str = "") {
	сout << str << endl;
}

int main()
{
	int num1 = 0;
	int num2 = 0;
	con_string lessThat = "меньше чем";
	con_string moreThat = "больше чем";
	con_string equal = "равно";

	println("Введите целое число: ");
	cin >> num1;

	println("Введите целое число: ");
	cin >> num2;
}