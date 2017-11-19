//
//  ClothingList.hpp
//  Project 2: Inheritance and Polymorphism
//
//  Created by william wright on 11/14/17.
//  Copyright © 2017 SilverTap. All rights reserved.
//

#ifndef ClothingList_hpp
#define ClothingList_hpp
#include"Clothing.hpp"
#include <stdio.h>

class ClothingList{
private:
    Clothing* ptrhead;
    Clothing* ptrend;
    Clothing* ptr;
public:
    ClothingList();
    void createClothing(string n,double p,string u,string t,string g,string s,int l,int w,int q);
	void displayClothing();
    Clothing* searchname(string);
    Clothing* searchupc(string);
    Clothing* searchprice(double);
};
ClothingList::ClothingList(){
    ptrhead = NULL;
    ptrend = NULL;
}
void ClothingList::createClothing(string n,double p,string u,string t,string g,string s,int l,int w,int q){
    Clothing *temp= new Clothing(n,p,u,t,g,s,l,w,q);
    temp->setname(n);
    temp->setprice(p);
    temp->setupc(up);
    temp->setClothingType(t);
    temp->setGender(g);
    temp->setSize(l, w);
    temp->setQuantity(q);
    if(ptrhead==NULL)
    {
        ptrhead=temp;
        ptrend=temp;
        temp=NULL;
    }
    else
    {
        ptrend->setNextGroceries(temp);
        ptrend=temp;
    }
}
void ClothingList::displayClothing(){
    Clothing *temp = new Clothing;
    temp = ptrhead;
    cout<<endl;
    cout<<"-----Clothing list-----";
    cout<<endl;
    int x =1;
    while(temp!=NULL)
    {
        
        cout <<x<<": ";
        temp->getinfo();
        cout<<endl;
        temp = temp->getNextClothing();
        x++;
    }
    
}
Clothing * ClothingList::searchname(string name){
    {
        while (ptrhead != NULL)
        {
            if (ptrhead->getname() == name)
            {
                
                return ptrhead;
            }
            ptrhead = ptrhead->getNextClothing();
        }
        
    }
    return NULL;
}
Clothing* ClothingList::searchupc(string name){
    {
        while (ptrhead != NULL)
        {
            if (ptrhead->getupc() == name)
            {
                return ptrhead;
            }
            ptrhead = ptrhead->getNextClothing();
        }
    }
    return NULL;
}
Clothing* ClothingList::searchprice(double name){
    {
        while (ptrhead != NULL)
        {
            if (ptrhead->getprice() == name)
            {
                return ptrhead;
            }
            ptrhead = ptrhead->getNextClothing();
        }
    return NULL;
}
#endif // ClothingList_hpp 
