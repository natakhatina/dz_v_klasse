#include <iostream>

class BaseA{
private:

public:
   virtual float getA()=0;
};


class BaseB{
private:

public:
    virtual float getB()=0;
};


class core{
    BaseA* a;
    BaseB* b;
public:
    core(BaseA*_a,BaseB*_b):a(_a),b(_b){}

    float calc(){
        return a->getA()+b->getB();
    };
};

class BaseA_dop: public BaseA{
private:

public:
    float getA(){
        return 2.03;
    }

};


class BaseB_dop: public BaseB {
private:

public:
    float getB(){
        return 1.11;
    }

};


int main() {
    core my_core(new  BaseA_dop, new  BaseB_dop);
    std::cout<<my_core.calc()<<'\n';
    return 0;
}





