/*
 File Name: main.cpp
 Author: Saharsh Gupta s510g881@ku.edu
 KUID: 2826224
 Lab Assignment Number: 7
 Description: In this lab we created a testing class for the given code to find the bugs. This is where the tester function is called from.
 Last edited: 04/26/2019
*/

#include <iostream>
#include "LinkedListOfInts.h"
#include "tester.h"

int main(int argc, char** argv)
{
	//Example of declaring a LinkedListOfInts
	LinkedListOfInts testableList;

	//You won't do all the tests in main; that's what your Test class will be for

	tester myTester;
	myTester.runTests();
	
	return (0);

}

