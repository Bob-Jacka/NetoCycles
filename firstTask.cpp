#include <iostream>

using namespace std;

void println(string str = "") {
	cout << str << endl;
}

void truthLine(bool firstArg, bool secondArg, string opr) {
	bool res;
	auto convLambda = [](bool inputVal) {return inputVal ? "true" : "false";};
	if (opr == "||") {
		res = firstArg || secondArg;
		printf("%s %s %s\n", convLambda(firstArg), convLambda(secondArg), convLambda(res));
	} else if (opr == "&&") {
		res = firstArg && secondArg;
		printf("%s %s %s\n", convLambda(firstArg), convLambda(secondArg), convLambda(res));
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
