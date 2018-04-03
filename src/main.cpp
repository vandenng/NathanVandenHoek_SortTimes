#include <iostream>
#include <vector>
#include <cstdlib>
#include "Celebrity.h"
#include "sorts.h"

int main(int argc, char** argv){
	std::vector<Celebrity> list;
	std::string names;
	int rates;
	int choose;

	for (int i = 0; i < 1000000; ++i){
		names = "";
		for(int j = 0; j < 8; ++j){
			names += (rand() % 25) + 97;
		}
	
		rates = (rand() % 10) + 1;
		choose = rand() % 2;

		if( choose == 0 )
			list.push_back(Celebrity(names, rates, false));	
		else
			list.push_back(Celebrity(names, rates, true));
	}
	//bubble_sort(list);
	//selection_sort(list);
	insertion_sort(list);
	//mergeSort(list);
	//quicksort(list);

	return EXIT_SUCCESS;
}
