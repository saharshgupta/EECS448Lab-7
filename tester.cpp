/*
 File Name: tester.cpp
 Author: Saharsh Gupta s510g881@ku.edu
 KUID: 2826224
 Lab Assignment Number: 7
 Description: This is the tester.cpp file where all the testing functions are defined.
 Last edited: 04/26/2019
*/

#include "tester.h"
#include <iostream>
#include "LinkedListOfInts.h"

void tester::runTests(){
	std::cout << "Testing started.\n"<<std::endl;
	std::cout<<"Test 01: isEmpty returns true with empty list: "<<((test01()==1)?"PASSED":"FAILED")<<std::endl;
	std::cout<<"<-------------------------------------->\n";
	std::cout<<"Test 02: isEmpty returns false with 1 add front: "<<((test02()==1)?"PASSED":"FAILED")<<std::endl;
	std::cout<<"<-------------------------------------->\n";
	std::cout<<"Test 03: isEmpty returns false with 1 addBack: "<<((test03()==1)?"PASSED":"FAILED")<<std::endl;
	std::cout<<"<-------------------------------------->\n";
	std::cout<<"Test 04: size of empty list is 0: "<<((test04()==1)?"PASSED":"FAILED")<<std::endl;
	std::cout<<"<-------------------------------------->\n";
	std::cout<<"Test 05: size returns 1 after 1 addFront: "<<((test05()==1)?"PASSED":"FAILED")<<std::endl;
	std::cout<<"<-------------------------------------->\n";
	std::cout<<"Test 06: size returns 1 after 1 addBack: "<<((test06()==1)?"PASSED":"FAILED")<<std::endl;
	std::cout<<"<-------------------------------------->\n";
	std::cout<<"Test 07: size returns correct value after multiple addFronts: "<<((test07()==1)?"PASSED":"FAILED")<<std::endl;
	std::cout<<"<-------------------------------------->\n";
	std::cout<<"Test 08: size returns correct value after multiple addBacks: "<<((test08()==1)?"PASSED":"FAILED")<<std::endl;
	std::cout<<"<-------------------------------------->\n";
	std::cout<<"Test 09: Search returns false on empty list: "<<((test09()==1)?"PASSED":"FAILED")<<std::endl;
	std::cout<<"<-------------------------------------->\n";
	std::cout<<"Test 10: Search returns false when value is not in the list: "<<((test10()==1)?"PASSED":"FAILED")<<std::endl;
	std::cout<<"<-------------------------------------->\n";
	std::cout<<"Test 11: Search returns true when value is in the list: "<<((test11()==1)?"PASSED":"FAILED")<<std::endl;
	std::cout<<"<-------------------------------------->\n";
	std::cout<<"Test 12: toVector returns empty vector for empty list: "<<((test12()==1)?"PASSED":"FAILED")<<std::endl;
	std::cout<<"<-------------------------------------->\n";
	std::cout<<"Test 13: correct value after 1 addFront: "<<((test13()==1)?"PASSED":"FAILED")<<std::endl;
	std::cout<<"<-------------------------------------->\n";
	std::cout<<"Test 14: correct value after 1 addBack: "<<((test14()==1)?"PASSED":"FAILED")<<std::endl;
	std::cout<<"<-------------------------------------->\n";
	std::cout<<"Test 15: correct value after multiple addFronts: "<<((test15()==1)?"PASSED":"FAILED")<<std::endl;
	std::cout<<"<-------------------------------------->\n";
	std::cout<<"Test 16: correct value after multiple addBacks: "<<((test16()==1)?"PASSED":"FAILED")<<std::endl;
	std::cout<<"<-------------------------------------->\n";
	std::cout<<"Test 17: removeBack returns false for empty list: "<<((test17()==1)?"PASSED":"FAILED")<<std::endl;
	std::cout<<"<-------------------------------------->\n";
	std::cout<<"Test 18: removeFront returns false for empty list: "<<((test18()==1)?"PASSED":"FAILED")<<std::endl;
	std::cout<<"<-------------------------------------->\n";
	std::cout<<"Test 19: correct value after multiple addFronts and removeFronts: "<<((test19()==1)?"PASSED":"FAILED")<<std::endl;
	std::cout<<"<-------------------------------------->\n";
	std::cout<<"Test 20: correct value after multiple addBacks and removeBacks: "<<((test20()==1)?"PASSED":"FAILED")<<std::endl;
	std::cout<<"<-------------------------------------->\n";
	std::cout<<"Test 21: removeBack decreases the size of list by 1: "<<((test21()==1)?"PASSED":"FAILED")<<std::endl;
	std::cout<<"<-------------------------------------->\n";
	std::cout<<"Test 22: removeFront decreases the size of list by 1: "<<((test22()==1)?"PASSED":"FAILED")<<std::endl;
	std::cout<<"\nTesting ended."<<std::endl;
}

//isEmpty returns true with empty list
bool tester::test01(){
	bool passed = false;
	LinkedListOfInts* list = new LinkedListOfInts();
	if(list->isEmpty() && list->size()==0){
	passed = true;
	}
	delete list;
	return passed;
}

//isEmpty returns false with 1 addFront
bool tester::test02(){
	bool passed = false;
	LinkedListOfInts* list = new LinkedListOfInts();
	list->addFront(1);
	if(!list->isEmpty()){
	passed = true;
	}
	delete list;
	return passed;
}

//isEmpty returns false with 1 addBack
bool tester::test03(){
	bool passed = false;
	LinkedListOfInts* list = new LinkedListOfInts();
	list->addBack(1);
	if(!list->isEmpty()){
	passed = true;
	}
	delete list;
	return passed;
}

//size of empty list is 0
bool tester::test04(){
	bool passed = false;
	LinkedListOfInts* list = new LinkedListOfInts();
	if(list->size()==0){
	passed = true;
	}
	delete list;
	return passed;
}

//size returns 1 after 1 addFront
bool tester::test05(){
	bool passed = false;
	LinkedListOfInts* list = new LinkedListOfInts();
	list->addFront(1);
	if(list->size()==1){
	passed = true;
	}
	delete list;
	return passed;
}

//size returns 1 after 1 addBack
bool tester::test06(){
	bool passed = false;
	LinkedListOfInts* list = new LinkedListOfInts();
	list->addBack(1);
	if(list->size()==1){
	passed = true;
	}
	delete list;
	return passed;
}

//size returns correct value after multiple addFronts
bool tester::test07(){
	bool passed = false;
	LinkedListOfInts* list = new LinkedListOfInts();
	for(int i = 0; i<10; i++){
		list->addFront(i);
	}
	passed = (list->size() == 10);
	delete list;
	return passed;
}

//size returns correct value after multiple addBacks
bool tester::test08(){
	bool passed = false;
	LinkedListOfInts* list = new LinkedListOfInts();
	for(int i = 0; i<10; i++){
		list->addBack(i);
	}
	passed = (list->size() == 10);
	delete list;
	return passed;
}

//Search returns false on empty list
bool tester::test09(){
	bool passed = false;
	LinkedListOfInts* list = new LinkedListOfInts();
	if(!list->search(1)){
	passed = true;
	}
	delete list;
	return passed;
}

// Search returns false when value is not in the list
bool tester::test10(){
	bool passed = false;
	LinkedListOfInts* list = new LinkedListOfInts();
	list->addFront(1);
	if(!list->search(10)){
	passed = true;
	}
	delete list;
	return passed;
}

// Search returns true when value is in the list
bool tester::test11(){
	bool passed = false;
	LinkedListOfInts* list = new LinkedListOfInts();
	list->addFront(1);
	if(list->search(1)){
	passed = true;
	}
	delete list;
	return passed;
}

//toVector returns empty vector for empty list
bool tester::test12(){
	bool passed = false;
	std::vector<int> vec = {};
	LinkedListOfInts* list = new LinkedListOfInts();
	passed = (list->toVector() == vec);
	delete list;
	return passed;
}

//correct value after 1 addFront
bool tester::test13(){
	bool passed = false;
	std::vector<int> vec = {1};
	LinkedListOfInts* list = new LinkedListOfInts();
	list->addFront(1);
	passed = (list->toVector() == vec);
	delete list;
	return passed;
}

//correct value after 1 addBack
bool tester::test14(){
	bool passed = false;
	LinkedListOfInts* list = new LinkedListOfInts();
	list->addBack(1);
	std::vector<int> vec = {1};
	passed = (list->toVector() == vec);
	delete list;
	return passed;
}

//correct value after multiple addFronts
bool tester::test15(){
	bool passed = false;
	std::vector<int> vec = {4,3,2,1,0};
	LinkedListOfInts* list = new LinkedListOfInts();
	for(int i = 0; i<5; i++){
		list->addFront(i);
	}
	std::vector<int> list2vec = list->toVector();
	passed = (list2vec == vec);
	std::cout<<"Expected Vector: [";
	for(unsigned int i =0; i<list2vec.size();i++){
		std::cout<<vec[i]<<((i<list2vec.size()-1)?", ":"");
	}
	std::cout<<"]";
	std::cout<<"\nList to Vector: [";
	for(unsigned int i =0; i<list2vec.size();i++){
		std::cout<<list2vec[i]<<((i<list2vec.size()-1)?", ":"");
	}
	std::cout<<"]\n";
	delete list;
	return passed;
}

//correct value after multiple addBacks
bool tester::test16(){
	bool passed = false;
	std::vector<int> vec = {0,1,2,3,4};
	LinkedListOfInts* list = new LinkedListOfInts();
	for(int i = 0; i<5; i++){
		list->addBack(i);
	}
	std::vector<int> list2vec = list->toVector();
	passed = (list2vec == vec);
	std::cout<<"Expected Vector: [";
	for(unsigned int i =0; i<list2vec.size();i++){
		std::cout<<vec[i]<<((i<list2vec.size()-1)?", ":"");
	}
	std::cout<<"]\n";
	std::cout<<"List to Vector: [";
	for(unsigned int i =0; i<list2vec.size();i++){
		std::cout<<list2vec[i]<<((i<list2vec.size()-1)?", ":"");
	}
	std::cout<<"]\n";
	delete list;
	return passed;
}

//removeBack returns false for empty list
bool tester::test17(){
	bool passed = false;
	LinkedListOfInts* list = new LinkedListOfInts();	
	passed = !list->removeBack();
	delete list;
	return passed;
}

//removeFront returns false for empty list
bool tester::test18(){
	bool passed = false;
	LinkedListOfInts* list = new LinkedListOfInts();	
	passed = !list->removeFront();
	delete list;
	return passed;
}

//correct value after multiple addFronts and removeFronts
bool tester::test19(){
	bool passed = false;
	LinkedListOfInts* list = new LinkedListOfInts();
	for(int i = 0; i<10; i++){
		list->addFront(i);
	}
	for(int i = 0; i<10; i++){
		list->removeFront();
	}
	passed = (list->size() == 0);
	std::vector<int> list2vec = list->toVector();
	std::cout<<"List to Vector: [";
	for(unsigned int i =0; i<list2vec.size();i++){
		std::cout<<list2vec[i]<<((i<list2vec.size()-1)?", ":"");
	}
	std::cout<<"]\n";
	std::cout<<"Expected Vector: []\n";
	delete list;
	return passed;
}

//correct value after multiple addBacks and removeBacks
bool tester::test20(){
	bool passed = false;
	LinkedListOfInts* list = new LinkedListOfInts();
	for(int i = 0; i<10; i++){
		list->addBack(i);
	}
	for(int i = 0; i<10; i++){
		list->removeBack();
	}
	passed = (list->size() == 0);
	std::vector<int> list2vec = list->toVector();
	std::cout<<"List to Vector: [";
	for(unsigned int i =0; i<list2vec.size();i++){
		std::cout<<list2vec[i]<<((i<list2vec.size()-1)?", ":"");
	}
	std::cout<<"]\n";
	std::cout<<"Expected Vector: []\n";
	delete list;
	return passed;
}

//removeBack decreases the size of list by 1.
bool tester::test21(){
	bool passed = false;
	std::vector<int> expVec = {0};
	LinkedListOfInts* list = new LinkedListOfInts();
	for(int i = 0; i<2;i++){
		list->addBack(i);
	}	
	list->removeBack();
	std::vector<int> list2vec = list->toVector();
	passed = ((list2vec == expVec ) && (list->size()==1));
	delete list;
	return passed;
}

//removeFront decreases the size of list by 1.
bool tester::test22(){
	bool passed = false;
	std::vector<int> expVec = {1};
	LinkedListOfInts* list = new LinkedListOfInts();
	for(int i = 0; i<2;i++){
		list->addBack(i);
	}	
	list->removeFront();
	std::vector<int> list2vec = list->toVector();
	passed = ((list2vec == expVec ) && (list->size()==1));
	delete list;
	return passed;
}