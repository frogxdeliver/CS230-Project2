//TestClothing.cpp
#include <iostream>
#include<fstream>
#include "Clothing.h"
using namespace std;

int main(int argc, char *argv[]){
	Clothing* c1 = new Clothing();
	ofstream outData;
	outData.open("Clothing.dat");
	
	c1->setClothingType("T-Shirt");
	
	c1->printInfo();
	cout << "\n";
	
	//displaying info
	c1->printInfo("Shirt", "Adult Male", 32, 36, 1);
	
	//writing to Clothing.dat
	outData << "Type of Clothing: " << c1->getClothingType() << "\n";
	outData << "For: " << c1->getGender() << "\n";
	outData << "Length: " << c1->getSizeL() << "\n";
	outData << "Width: " << c1->getSizeW() << "\n";
	outData << "Quantity: " << c1->getQuantity() << "\n";
	outData.close();
	
	
	
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
