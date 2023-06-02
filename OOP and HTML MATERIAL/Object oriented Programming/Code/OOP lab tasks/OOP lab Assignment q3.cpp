#include<iostream>
using namespace std;
class Brain{
	public:
	int Memory_rate;
	int Intelligence_rate;
	int Emotion_rate;
	void set_Memory(int Memory_rate){
		this->Emotion_rate=Memory_rate;
	}
	void set_Intelligence_rate(int Intelligence_rate){
		this->Intelligence_rate=Intelligence_rate;
	}
	void set_Emotion_rate(int Emotion_rate){
		this->Emotion_rate=Emotion_rate;
	}
	int get_Memory_rate(){
		return Memory_rate;
	}
	int get_Intelligence_rate(){
		return Intelligence_rate;
	}
	int get_Emotion_rate(){
		return Emotion_rate;
	}
	void display_Brain(){
		cout <<"Memory rate = "<<Memory_rate <<"/10" <<endl;
		cout <<"Intelligence rate = "<<Intelligence_rate <<"/10" <<endl;
		cout <<"Emotion rate = "<<Emotion_rate <<"/10" <<endl;
	}				
};

class Heart{
	public:
	int Heart_rate;
	int Blood_pressure;
	int Oxygen_level;
	void set_Heart_rate(int Heart_rate){
		this->Heart_rate=Heart_rate;
	}
	void set_Blood_pressure(int Blood_pressure){
		this->Blood_pressure=Blood_pressure;
	}
	void set_Oxygen_level(int Oxygen_level){
		this->Oxygen_level=Oxygen_level;
	}
	int get_Heart_rate(){
		return Heart_rate;
	}
	int get_Blood_pressure(){
		return Blood_pressure;
	}
	int get_Oxygen_level(){
		return Oxygen_level;
	}
	void display_Heart(){
		cout <<"Heart rate = "<<Heart_rate <<"/10" <<endl;
		cout <<"Blood Pressure = "<<Blood_pressure <<endl;
		cout <<"Oxygen Level = "<<Oxygen_level <<endl;
	}					
};

class Legs{
	public:
	int Length;
	int Strength_rate;
	int Flexibility_rate;
	void set_Length(int Length){
		this->Length=Length;
	}
	void set_Strength_rate(int Strength_rate){
		this->Strength_rate=Strength_rate;
	}
	void set_Flexibility_rate(int Flexibility_rate){
		this->Flexibility_rate=Flexibility_rate;
	}
	int get_Length(){
		return Length;
	}
	int get_Strength_rate(){
		return Strength_rate;
	}
	int get_Flexibility_rate(){
		return Flexibility_rate;
	}
	void display_Legs(){
		cout <<"Length = "<<Length <<endl;
		cout <<"Strength Rate = "<<Strength_rate <<"/10" <<endl;
		cout <<"Flexibility Rate = "<<Flexibility_rate <<"/10" <<endl;
	}					
};

class Person{
	public:
	Heart heart;
	Brain brain;
	Legs legs;
	string name;
	int age;
	string gender;
	void set_name(string name){
		this->name=name;
	}
	void set_age(int age){
		this->age=age;
	}
	void set_gender(string gender){
		this->gender=gender;
	}
	string get_name(){
		return name;
	}
	int get_age(){
		return age;
	}
	string get_gender(){
		return gender;
	}
	void display_Person(){
		cout <<"Name = "<<name <<endl;
		cout <<"Age = "<<age <<endl;
		cout <<"Gender = "<<gender <<endl;
	}	
};
int main(){
	// object
	Person obj;
	// variables
	string name;
	int age;
	string gender;
	int Length;
	int Strength_rate;
	int Flexibility_rate;
	int Heart_rate;
	int Blood_pressure;
	int Oxygen_level;
	int Memory_rate;
	int Intelligence_rate;
	int Emotion_rate;
	// adding information to class via member functions
	cout<<"Welcome to the health care centre :"<<endl;
	cout <<"Add the following information:"<<endl;
	cout <<"\nEnter Name: ";
	getline(cin,name);
	cout <<"Enter the Age: ";
	cin >>age;
	cout <<"Enter Gender: ";
	cin >>gender;
	cout <<"\nAdd Person's Heart details..."<<endl;
	cout <<"\nEnter Heart Beat-Rate: ";
	cin >>Heart_rate;
	cout <<"Enter Blood Pressure detail: ";
	cin >>Blood_pressure;
	cout <<"Enter Oxygen-Level in blood: ";
	cin >>Oxygen_level;
	cout <<"\nEnter Person's Brain detail:"<<endl;
	cout <<"Enter Memory-Rate (/10): ";
	cin >>Memory_rate;
	cout <<"Enter Intelligence-Rate (/10): ";
	cin >>Intelligence_rate;
	cout <<"Enter Emotion-Rate (/10): ";
	cin >>Emotion_rate;
	cout <<"\nEnter Person Legs detail:"<<endl;
	cout <<"Enter Length: ";
	cin >>Length;
	cout <<"Enter Strength-Rate (/10): ";
	cin >>Strength_rate;
	cout <<"Enter Flexibility-Rate (/10): ";
	cin >>Flexibility_rate;
	obj.set_name(name);
	obj.set_age(age);
	obj.set_gender(gender);
	obj.brain.set_Emotion_rate(Emotion_rate);
	obj.brain.set_Intelligence_rate(Intelligence_rate);
	obj.brain.set_Memory(Memory_rate);
	obj.heart.set_Blood_pressure(Blood_pressure);
	obj.heart.set_Heart_rate(Heart_rate);
	obj.heart.set_Oxygen_level(Oxygen_level);
	obj.legs.set_Flexibility_rate(Flexibility_rate);
	obj.legs.set_Length(Length);
	obj.legs.set_Strength_rate(Strength_rate);
	// displaying information
	cout <<"\n\nDisplaying Information..."<<endl;
	obj.display_Person();
	obj.heart.display_Heart();
	obj.brain.display_Brain();
	obj.legs.display_Legs();
	return 0;
}
