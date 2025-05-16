#include <iostream>

using namespace std;

void println(string str = "") {
	сout << str << endl;
}

void truthLine(bool firstArg, bool secondArg, string opr) {
	bool res = false;
	if (opr == "||") {
		res = firstArg || secondArg;
		printf("%b %b %b", firstArg, secondArg, res);
	} else if (opr == "&&") {
		res = firstArg && secondArg;
		printf("%b %b %b", firstArg, secondArg, res);
	}
}

int main()
{
    println("Оператор: ||");
    truthLine(true, true, "||");
    truthLine(false, true, "||");
    truthLine(true, false, "||");
    truthLine(false, false, "||");
    
    println();

    println("Оператор: &&");
    truthLine(true, true, "&&");
    truthLine(false, true, "&&");
    truthLine(true, false, "&&");
    truthLine(false, false, "&&");
}