#ifndef CELEBRITY_H
#define CELEBRITY_H

#include<iostream>

class Celebrity{
	public:
	
	Celebrity();
	Celebrity(std::string name, int rate, bool met);	
	
	bool operator< (const Celebrity& cel) const{
		if( this->rate < cel.rate )
			return true;
		if( !this->met && cel.met )
			return true;
		else{
			for(unsigned int i = 0; i < this->name.size() && i < cel.name.size(); ++i){
				if(this->name.at(i) < cel.name.at(i)){
					return true;
				}
			}
		}
		return false;
	}

	bool operator<= (const Celebrity& cel) const{
		if( this->rate == cel.rate || this->met == cel.met || this->name.compare(cel.name))
			return true;
		return *this < cel;
	}
	private:
		std::string name;
		int rate;
		std::string profession;
		bool met;
};

#endif
