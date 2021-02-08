#include<bits/stdc++.h>
using namespace std;
class Observer;
class Car
{
    public:
    int position;
    vector<Observer*> observerList;
    void addObserver(Observer* ob){
        observerList.push_back(ob);
    }
   void notifyObserver();
        void setPosition(int newPosition) {
        position=newPosition;
		notifyObserver();
	}
    
    void detachObserver(){
        
    }
    int getPosition()
    {
        return position;
    }
    
};
class Observer
{
    Car* car;
    public:
        Observer(Car *_car)
    {
        car=_car;
        _car->addObserver(this);
    }
    virtual void update () = 0;
    Car* getCar()
    {
        return car;
    }
};

class LeftObserver:public Observer{
    public:
    LeftObserver(Car * car): Observer(car){}
    void update() {
        int pos = getCar()->getPosition();
        if(pos<0){
            cout << "left side" << endl;
        }
    }
    
};

class RightObserver:public Observer{
    public:
    RightObserver(Car * car):Observer(car){}
     void update() {
        int pos = getCar()->getPosition();
        if(pos>0){
            cout << "right side" << endl;
        }
    }
    
    
};
class MiddleObserver:public Observer{
    public:
     MiddleObserver(Car * car): Observer(car){}
     void update() {
        int pos = getCar()->getPosition();
        if(pos==0){
            cout << "Running in middle" << endl;
        }
    }
};
 void Car::notifyObserver()
    {
        for(int i=0; i<observerList.size(); ++i)
        observerList[i]->update();

    }
int main()
{
    
      
    Car *car = new Car();
 
    LeftObserver leftObserver(car);
    RightObserver rightObserver(car);
    MiddleObserver middleObserver(car);
    //cout<<car->observerList.size();
    car->setPosition(-1);
}
