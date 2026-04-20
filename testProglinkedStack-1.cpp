//Program to test the various operations on an
//ordered linked list

#include <iostream>                             //Line 1
#include "derivedLinkedStack.h"                  //Line 2

using namespace std;                            //Line 3

int main()                                      //Line 4
{                                               //Line 5
	linkedStackType<int> stack1, stack2;        //Line 6
	int num;                                    //Line 7

	cout << "Line 8: Enter numbers ending "
			<< "with -999." << endl;               //Line 8
	cin >> num;                                 //Line 9

	while (num != -999)                         //Line 10
	{                                           //Line 11
			cout << "Pushing: " << num << endl;
			stack1.push(num);                      //Line 12
			cin >> num;                             //Line 13
	}                                           //Line 14

	cout << endl;                               //Line 15

	cout << "Line 16: stack1: ";                 //Line 16
	stack1.print();                              //Line 17
	cout << endl;                               //Line 18

	stack2 = stack1; //test the assignment operator Line 19

	cout << "Line 20: stack2: ";                 //Line 20
	stack2.print();                              //Line 21
	cout << endl;                               //Line 22

	cout << "Line 23: popping the top node" << stack2.top() << endl;

	stack2.pop();                      //Line 26

	cout << "Line 27: After Popping "
			<< num << ", stack2: " << endl;         //Line 27
	stack2.print();                              //Line 28
	cout << endl;                               //Line 29
	cout << "Prove that list1 was untouched" << endl;
	stack1.print();

	return 0;                                   //Line 30
}   