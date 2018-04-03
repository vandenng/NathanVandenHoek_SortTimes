#include <iostream>
#include "Celebrity.h"

Celebrity::Celebrity(){

}

Celebrity::Celebrity(std::string name, int rate, bool met){
	this->name = name;
	this->rate = rate;
	this->met = met;
}


