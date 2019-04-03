// Car Design Challenge
// Design Requirements
// 1. They all have unique VIN Numbers
// 2. Engine says "Vrrrrooommmm!"
// 3. Chevy horn says "Heartbeat of America!"
// 4. Delorean horn says "You built a time machine out of a Delorean?!"
// 5. Ferrari horn says "Arrivederci Baby!"

#include <iostream>
using namespace std;

//Base Class
class Car {
    public: 
        virtual void VinNum() = 0;
        virtual void Rev() = 0;
        virtual void Horn() = 0;
    
};

class Chevy : public Car{
    public:   
        void VinNum(){
            cout << "123456\n";
        }
        void Rev(){
            cout << "Vrrrrooommmm\n";
        }
        void Horn(){
            cout << "Heartbeat of America!\n";
        }
}; 

class Delorean : public Car{
    public:    
        void VinNum(){
            cout << "654321\n";
        }
        void Rev(){
            cout << "Vrrrrooommmm\n";
        }
        void Horn(){
            cout << "You built a time machine out of a Delorean?!\n";
        }
};

class Ferrari : public Car{
    public:    
        void VinNum(){
            cout << "098765\n";
        }
        void Rev(){
            cout << "Vrrrrooommmm\n";
        }
        void Horn(){
            cout << "Arrivederci Baby!\n";
        }
};


int main(){
    Ferrari car3;
    Delorean car2;
    Chevy car1;
    cout << "Ferrari Credentials\n";
    car3.VinNum();
    car3.Rev();
    car3.Horn();
    cout << "-----------\n";
    cout << "Delorean Credentials\n";
    car2.VinNum();
    car2.Rev();
    car2.Horn();
    cout << "-----------\n";
    cout << "Chevy Credentials\n";
    car1.VinNum();
    car1.Rev();
    car1.Horn();
    
    return 0;
}