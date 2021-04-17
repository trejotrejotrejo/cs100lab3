#ifndef __OP_HPP__
#define __OP_HPP__

#include "base.hpp"
#include <string>
#include <iostream>
#include <iomanip>
#include <sstream>

class Op : public Base {
  private:
	double num;  
  public:
        Op(double value) : Base() { num = value; }
        virtual double evaluate() { return num; } //return value of a node
        virtual std::string stringify() {
		std::stringstream out;
	 	out << num;	
  		return out.str();  
	 } //return a string representation of node

};

#endif //__OP_HPP__
