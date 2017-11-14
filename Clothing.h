//Clothing.hpp

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
		void setClothingType(string);
		void setSize(int sizeL, int sizeW);
	
	public:
		Clothing() : item(){};
		
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
#endif //Clothing_h
