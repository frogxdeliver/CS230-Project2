//TestClothing.cpp
#include <iostream>
#include "Clothing.h"
using namespace std;

int main(int argc, char *argv[]){
	Clothing* c1 = new Clothing();
	
	c1->setClothingType("T-Shirt");
	
	c1->printInfo();
	cout << "\n";
	
	c1->printInfo("Shirt", 32, 36);
	
	//c1->printInfo("T-Shirt", 32, 36);
	
}
