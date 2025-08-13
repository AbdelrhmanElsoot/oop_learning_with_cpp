#include<iostream>
using namespace std; 


class Car {
	// in cpp we need to defenetion if the data or fn is public of private 
	// class have attributes (date) and function (behavior)
	
	public : 
		string model; 
		string color; 
		string date; 
		int speed; 

		void displayInfo() {
			cout << model << endl; 
			cout << color << endl; 
			cout << date << endl; 
			cout << isRaceCar() << endl; 
		}

	private:
		// data or functions can't acc by user 
		string isRaceCar() {
			if (speed >= 200) {
				return "Race Car";
			}
			else {
				return "Normal car (Not For Racint)";
			}
		}
};

int main() {
	Car car1; // get instance (car1) from class car
	car1.model = "BMW"; 
	car1.color = "Black"; 
	car1.date = "2005"; 
	car1.speed = 199; 
	// set model , color , date (date) and speed for instance car1 

	car1.displayInfo(); 
	// call displayInfo fn for instance car1 


	
}