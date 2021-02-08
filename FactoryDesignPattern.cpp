#include<bits/stdc++.h>
using namespace std;
enum Toytype{CAR,BIKE,TRAIN};
class Toy
{
    public:
    Toytype toytype;
    virtual void Buildtoy()=0;
    virtual void Colortoy()=0;
    virtual void Destorytoy()=0;
};
class car:public Toy
{
    public:
    car()
    {
        toytype=Toytype::CAR;
    }
    void Buildtoy()
    {
        cout<<"Building Car"<<endl;
    }
    void Colortoy()
    {
        cout<<"Coloring Car"<<endl;
    }
    void Destorytoy()
    {
        cout<<"Destroying Car"<<endl;
    }
};

class bike:public Toy{
     public:
    bike()
    {
        toytype=Toytype::BIKE;
    }
    void Buildtoy()
    {
        cout<<"Building BIKE"<<endl;
    }
    void Colortoy()
    {
        cout<<"Coloring BIKE"<<endl;
    }
    void Destorytoy()
    {
        cout<<"Destroying BIKE"<<endl;
    }
    
    
};
class train:public Toy{
     public:
    train()
    {
        toytype=Toytype::TRAIN;
    }
    void Buildtoy()
    {
        cout<<"Building TRAIN"<<endl;
    }
    void Colortoy()
    {
        cout<<"Coloring TRAIN"<<endl;
    }
    void Destorytoy()
    {
        cout<<"Destroying TRAIN"<<endl;
    }
    
    
};
class ToyFactory{
    public:
    void createToy(Toytype t)
    {
        Toy* toy;
        if(t==Toytype::CAR)
        {
            toy=new car();
        }
        else if(t==Toytype::BIKE)
        {
            toy=new bike();
        }
        else if(t==Toytype::TRAIN)
        {
            toy=new train();
        }
        toy->Buildtoy();
        toy->Colortoy();
        toy->Destorytoy();
    }
};
int main()
{
    ToyFactory *t=new ToyFactory();
    t->createToy(TRAIN);
    t->createToy(BIKE);
}
