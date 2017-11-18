//TestClothing.cpp
#include <iostream>
#include<fstream>
#include "Clothing.h"
using namespace std;

int main(int argc, char *argv[]){
	Clothing* c1 = new Clothing();
	/*ofstream outData;
	outData.open("Clothing.dat");*/
	
	c1->setClothingType("T-Shirt");
	
	c1->printInfo();
	cout << "\n";
	
	//displaying info & writing to Clothing.dat
	/*
	c1->printInfo("Shirt", "Adult Male", 32, 36, 1);
	outData << c1->getClothingType() << " ";
	outData << c1->getGender() << " ";
	outData << c1->getSizeL() << " ";
	outData << c1->getSizeW() << " ";
	outData << c1->getQuantity() << "\n";
	outData.close();

	c1->printInfo("Pants", "Adult Male", "L", 1);
	outData.open("Clothing.dat");
	outData << c1->getClothingType() << " ";
	outData << c1->getGender() << " ";
	outData << c1->getSizeL() << " ";
	outData << c1->getSizeW() << " ";
	outData << c1->getQuantity() << "\n";
	outData.close();
	*/
	
	
	
	//reading from CLothing.dat
	ifstream inData;
	string data;
	int counter = 0;
	inData.open("Clothing.dat");
	while (! inData.eof())
	{
		inData >> data;
		counter++;
	}
	inData.close();
	
	
	
	
}
