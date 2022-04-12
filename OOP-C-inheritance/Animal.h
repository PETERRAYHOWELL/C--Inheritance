#ifndef Animal_h
#define Animal_h
#include <iostream>
using namespace std;


class Animal {

	protected: 
		float Age;

	private:
		//default constructor
		Animal() {
			Age = 0;
		}

		//primary constructor
		Animal(float age) {
			Age = age;
		}

		//copy constructor
		Animal(Animal &animal) {
			Age = animal.Age;

		}

		//destructor
		~Animal() {
			cout << "destructor called" << endl;
		}
		

		//Accessor or getters

		float getAge() {
			return Age;

		}

		void setAge(float age) {
			age;
		}

		void Display() {
			cout << "Animal age" << endl;
		}

};

#endif

