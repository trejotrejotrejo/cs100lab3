#ifndef __OP_HPP__
#define __OP_HPP__

#include "base.hpp"

class Op : public Base {
    private: 
	double num;
    public:
        Op(double value) : Base() { num = value; }
        virtual double evaluate() { return num; }
        virtual std::string stringify() { return ""; }
};

class SevenOpMock : public Base (
    private:
	double num;
    public:
	SevenOpMock(double value) : Base() { num = value; }
	virtual double evaluate() { return 7.5; }
	virtual string stringify() { return "7.5"; )
}

class NegativeOpMock : public Base (
    private:
	double num;
    public:
        NegativeOpMock(double value) : Base() { num = value; } 
        virtual double evaluate() { return -7.5; }
        virtual string stringify() { return "-7.5"; )
}

class ZeroOpMock : public Base (
    private:
	double num;
    public:
        ZeroOpMock(double value) : Base() { num = value; }
        virtual double evaluate() { return 0; }
        virtual string stringify() { return "0"; )
}


#endif //__OP_HPP__
