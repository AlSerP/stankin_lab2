#include <iostream>
#include "Stack.h"

using namespace std;

int main() {
	// Создание
	cout << "Creation\n";
	Stack stack(1);
	stack.push(2);
	stack.push(3);
	stack.push(4);
	stack.push(5);

	stack.show();

	// Математические выражения
	// +=
	cout << "+= 6\n";
	stack += 6;
	stack.show();
	
	// -=
	cout << "-= first element\n";
	element* el =  stack.get_element(0);
	stack -= el;
	stack.show();

	
	// +
	cout << "+ 7\n";
	stack.show();
	Stack stack_2 = stack + 7;
	stack_2.show();

	// *
	cout << "* 3\n";
	stack.show();
	Stack stack_3 = stack * 3;
	stack_3.show();
	

	// -
	cout << "- first element\n";
	stack.show();
	element* el2 = stack.get_element(0);
	Stack stack_4 = stack - el2;
	stack_4.show();
	
	// Копирование и сравнение
	cout << "Copy and comparison:\n";
	Stack stack_5 = stack;
	stack.show();
	stack_5.show();
	
	cout << (stack == stack_5) << '\n';
	cout << (stack == stack_2) << '\n';
}
