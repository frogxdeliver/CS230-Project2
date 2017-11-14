//Clothing.h

#ifndef Clothing_h
#define Clothing_h
#include<iostream>
#include "Item.h"
using namespace std;

class Clothing: public item
{
	private:
		string type; // pants, shirts, sleepwear
		string gender; // man, women
		int sizeL; //length
		int sizeW; //width
		int quantity;
	
	public:
		Clothing() : item(){};
		void print();
		void setClothingType(string);
		void setSize(int sizeL, int sizeW);
		void printInfo();
		void printInfo(string newClothing, int newL, int newW);
		
};

/*Clothing::Clothing()
{
		string type = ""; 
		string gender = "";
		int sizeL = "";
		int sizeW = "";
		int quantity;
}*/

void Clothing::setClothingType(string newClothing){
	type = newClothing;
}

void Clothing::setSize(int newL, int newW){
	sizeL = newL;
	sizeW = newW;
}
void Clothing::printInfo(){
	cout << type << "\n"
		 << sizeL << "\n"
		 << sizeW << "\n";
}
void Clothing::printInfo(string newClothing, int newL, int newW){
	Clothing::setClothingType(newClothing);
	Clothing::setSize(newL, newW);
	
	cout << type << "\n"
		 << sizeL << "\n"
		 << sizeW << "\n";
}
	
#endif //Clothing_h
