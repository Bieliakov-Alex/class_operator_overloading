#include <iostream>
#include <cmath>

/*class AbstractClass{
public:
    explicit AbstractClass(int arg): x{arg}{}
    virtual void Method() = 0;
private:
    int x;
};

class Interface{
public:
    virtual void Method1() = 0;
    virtual void Method2() = 0;
    virtual void Method3() = 0;
};*/

class MyClass{
public:
    int operator+(int operand){
        return operand + 1;
    }

    int operator+(double){
        return 42;
    }

    int operator[](int index){
        return index + 1;
    }

    int operator[](char){
        return 84;
    }

    int operator()(){
        return -18;
    }

    int operator()(double){
        return +34;
    }        
};

int operator+(int operand, const MyClass&){
    return operand + 1;
}

int main(){
    /*Interface i;
    AbstractClass a(1);*/

    int a = 2;
    int b = 3;
    int c = a + b;
    //a + b;

    /*if(a>b){
        return -1;
    }
    else{
        return 1;
    } * 5;*/

    std::cout<< (a>b ? -1 : 1) * 5 <<std::endl;

    std::cout<<c<<std::endl;

    MyClass d, e;
    //d + e;
    std::cout<< d + 7. <<std::endl;
    std::cout<< 7 + d <<std::endl;
    std::cout<<e[-10]<<std::endl;
    std::cout<<e['4']<<std::endl;
    std::cout<<e()<<std::endl;
    std::cout<<d(5.)<<std::endl;
    return 0;
}