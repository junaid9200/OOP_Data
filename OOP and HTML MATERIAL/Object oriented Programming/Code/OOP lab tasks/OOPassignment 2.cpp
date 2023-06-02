#include <iostream>
using namespace std;

// Define the classes
class Engine 
{
	private:
    int horsepower;           //private members .
    int torque;
    public:
    Engine(int horsepower, int torque)
    {
    	this->horsepower=horsepower;
    	this->torque=torque;
	}
    int getHorsepower()  
	{ 
	       return horsepower; 
	}
    int getTorque() 
	{
	 return torque; 
	 }

};
//class 2.
class Transmission {
	private:
    int numGear;
    string type; 
    public:
    Transmission(int numGears, string type)
    {
    	this->numGear=numGears;
    	this->type=type;
	}
    int getNumGears() 
	{ 
	     return numGear;
	 }
    string getType() 
	{
	 return type; 
	 }

};
//class 3.
class Chassis {
	private:
    int wheelbase;
    int trackWidth;
    public:
    Chassis(int wheelbase, int trackWidth) 
    {
    	this->wheelbase=wheelbase;
    	this->trackWidth=trackWidth;
	}
    int getWheelbase() 
	{
	 return wheelbase; 
	 }
    int getTrackWidth()  
	{
	 return trackWidth; 
	 }

};
//class 4.
class Suspension {
	private:
    string type;
    int numWheels;
public:
    Suspension(string type, int numWheels) 
    {
    	this->numWheels=numWheels;
    	this->type=type;
	}
    string getType()  
	{
	 return type; 
	 }
    int getNumWheels()  
	{
	 return numWheels; 
	 }

};
//class 5.
class Brakes {
	private:
    string type;
    string numWheels;
public:
    Brakes(string type, string numWheels) 
    {
    	this-> numWheels= numWheels;
		this->type=type;
	}
    string getType() 
	{
	 return type; 
	 }
    string getNumWheels()  
	{
	 return numWheels; 
	 }

};

//has a relationship//
class Car {
	private:
    Engine engine;                     //// Composition.
    Transmission transmission;
    Chassis chassis;
    Suspension suspension;
    Brakes brakes;
public:
    Car( Engine engine,Transmission transmission, Chassis chassis, Suspension suspension,  Brakes brakes) 
        : engine(engine), transmission(transmission), chassis(chassis), suspension(suspension), brakes(brakes) {}
        
        
       Engine geteng()
       {
       	return engine;
	   }
	   Transmission gettrans()
	   {
	   	return transmission;
	   }
	   Chassis getchas()
	   {
	   	return chassis;
	   }
	     Suspension getsus()
	     {
	     	return suspension;
		 }
		 Brakes getbr()
		 {
		 	return brakes;
		 }
	   
};

int main() {
	cout<<"WELCOME :)"<<endl<<"-----------------------------------------------------"<<endl;
	cout<<endl;
	
    Engine engine(200, 250);
    Transmission transmission(5, "automatic ");
    Chassis chassis(108, 80);
    Suspension suspension("sport", 4);
    Brakes brakes("high performance", "carbon ceramics brakes");
    Car car(engine, transmission, chassis, suspension, brakes);           // Composition Class Object.
    cout<<"\t\t\t\t\t\t"<<"|"<<endl;
    cout << "1. Horsepower         : " << car. geteng().getHorsepower()<<endl;
    cout << "2. Torque             : " << car.geteng().getTorque() << endl<<"\t\t\t\t\t\t"<<"|"<<endl;
    cout << "3. Num Gears          : " << car.gettrans().getNumGears()<<endl;
    cout << "4. Transmission Type  : " << car.gettrans().getType()<< endl<<"\t\t\t\t\t\t"<<"|"<<endl;
    cout << "5. Wheelbase          : " << car.getchas().getWheelbase()<<endl;
    cout << "6. Track Width        : " << car.getchas(). getTrackWidth()  << endl<<"\t\t\t\t\t\t"<<"|"<<endl;
    cout << "7. Suspension Type    : " << car.getsus().getType() <<endl;
    cout << "8. Num Wheels         : " << car.getsus(). getNumWheels()  << endl<<"\t\t\t\t\t\t"<<"|"<<endl;
    cout << "9. Brakes performance : " << car.getbr().  getType()<<endl;
    cout<<"10. Brakes Type       : "<<car.getbr(). getNumWheels()  <<endl<<"\t\t\t\t\t\t"<<"|"<<endl;
    cout<<"---------------------------------------------------"<<endl;
    cout<<"THANKS :)"<<endl;
}
