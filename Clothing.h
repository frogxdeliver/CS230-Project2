//Clothing.h

#ifndef Clothing_h
#define Clothing_h
#include<iostream>
#include "Item.h"
using namespace std;

class Clothing: public item
{
	private:
		string type; // pants, shirts, sleepwear, accessories
		string gender; // man, women
		int sizeL; //length
		int sizeW; //width
		int quantity;
	
	public:
		Clothing() : item(){};
		void print();
		void setClothingType(string newClothing);
		void setGender(string newG);
		void setSize(int newL, int newW);
		void setQuantity(int newQ);
		void printInfo();
		void printInfo(string newClothing, string newG, int newL, int newW, int newQ);
		string getClothingType();
		string getGender();
		int getSizeL();
		int getSizeW();
		int getQuantity();
		
};

//setters
void Clothing::setClothingType(string newClothing){
	type = newClothing;
}
void Clothing::setGender(string newG){
	gender = newG;
}
void Clothing::setSize(int newL, int newW){
	sizeL = newL;
	sizeW = newW;
}
void Clothing::setQuantity(int newQ){
	quantity = newQ;
}

//getters
string Clothing::getClothingType(){
	return type;
}
string Clothing::getGender(){
	return gender;
}
int Clothing::getSizeL(){
	return sizeL;
}
int Clothing::getSizeW(){
	return sizeW;
}
int Clothing::getQuantity(){
	return quantity;
}

//print
void Clothing::printInfo(){
	cout << "Type of clothing: " << type << "\n"
		 << "For: " << gender << "\n"
		 << "Quantity: " << quantity << "\n";
}
void Clothing::printInfo(string newClothing, string newG, int newL, int newW, int newQ){
	Clothing::setClothingType(newClothing);
	Clothing::setSize(newL, newW);
	Clothing::setGender(newG);
	Clothing::setQuantity(newQ);
	
	cout << "Type of Clothing: " << type << "\n"
		 << "For: " << gender << "\n"
		 << "Length: " << sizeL << "\n"
		 << "Width: " << sizeW << "\n"
		 << "Quantity: " << quantity << "\n";
		 
}
	
#endif //Clothing_h
