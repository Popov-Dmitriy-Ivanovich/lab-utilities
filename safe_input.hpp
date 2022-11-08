/*
 * safe_input.hpp
 *
 *  Created on: Nov 8, 2022
 *      Author: dmitriy
 */

#ifndef SAFE_INPUT_HPP_
#define SAFE_INPUT_HPP_
#include <iostream>
#include <set>
template <typename T>
T safe_scan(std::string mes){
	T out;
	while (!(std::cin>>out)){
		std::cout<<mes<<std::endl;
		std::cin.clear();
		std::cin.ignore(1e8,'\n');
	}
	return out;
}
template <typename T>
T safe_scan(std::string mes,T low_limit, T high_limit){
	T out;
	while(!(std::cin>>out)||out<low_limit||out>high_limit){
		std::cout<<mes;
		std::cin.clear();
		std::cin.ignore(1e8,'\n');
	}
	return out;
}
template <typename T>
T safe_scan(std::string mes, const std::set <T> avaliable){
	T out;
	while(!(std::cin>>out)||avaliable.find(out)==avaliable.end()){
		std::cin.clear();
		std::cin.ignore(1e8,'\n');
		std::cout<<mes;
	}
	return out;
}





#endif /* SAFE_INPUT_HPP_ */
