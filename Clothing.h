//Clothing.h

#include<iostream>
using namespace std;

class Clothing
{
	private:
		string type; // pants, shirts, sleepwear
		string gender; // man, women
		int sizeL; //length
		int sizeW; //width
		int quantity;
	
	public:
		Clothing();
		void setClothingType(string);
		
};

Clothing::Clothing();
{
		string type = ""; 
		string gender = "";
		int sizeL = "";
		int sizeW = "";
		int quantity;
}
