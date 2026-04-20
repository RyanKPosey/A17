//Program to test the various operations on an
//ordered linked list

#include <iostream>
#include "derivedLinkedStack.h"

using namespace std;

int main()
{
	linkedStackType<int> stack1, stack2;
	int num;

	cout << "Line 8: Enter numbers ending "
		 << "with -999." << endl;
	cin >> num;

	while (num != -999)
	{
		cout << "Pushing: " << num << endl;
		stack1.push(num);
		cin >> num;
	}

	cout << endl;

	cout << "Line 16: stack1: ";
	stack1.print();
	cout << endl;

	stack2 = stack1; //test the assignment operator Line 19

	cout << "Line 20: stack2: ";
	stack2.print();
	cout << endl;

	cout << "Line 23: popping the top node " << stack2.top() << endl;

	stack2.pop();

	cout << "Line 27: After Popping "
		 << num << ", stack2: " << endl;
	stack2.print();
	cout << endl;
	cout << "Prove that list1 was untouched" << endl;
	stack1.print();

	return 0;
}
 