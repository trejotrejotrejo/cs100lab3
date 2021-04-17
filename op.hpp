#ifndef __OP_HPP__
#define __OP_HPP__
   
#include "base.hpp"
#include <string>
#include <iostream>
#include <iomanip>
#include <sstream>
<<<<<<< HEAD

class Op : public Base {
    private:
	double num;
    public:
        Op(double value) : Base() { num = value; }
        virtual double evaluate() { return num; }
        virtual std::string stringify() { 
              std::stringstream out;
              out << num;
              return out.str();        
        }
};

#endif //__OP_HPP__
=======
   
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
>>>>>>> e78529d3e11530af27b1f2f8b6be0c12b6427add
