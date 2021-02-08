#include<bits/stdc++.h>
using namespace std;
enum Toytype{CAR,BIKE,TRAIN};
class Gamesetting
{
    static Gamesetting *instance;
    int _brightness;
	int _width;
	int _height;
    Gamesetting():_width(786), _height(1300), _brightness(75){}
    public:
     static Gamesetting* getInstance()
    {
        if(instance==NULL)
           instance=new Gamesetting();
        return instance;
        
    }
    void displaySetting() {
		cout << "brightness: " << _brightness << endl;
		cout << "height: " << _height << endl;
		cout << "width: " << _width << endl << endl;
	}
};
Gamesetting* Gamesetting::instance = NULL;
int main()
{
    
    Gamesetting* p=Gamesetting::getInstance();
    p->displaySetting();
}
