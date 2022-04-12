#ifndef Cow_h
#define Cow_h
#include "Animal.h"

class Cow : public Animal //declear inheritance , Cow is a type of animal
{
	private:
		float MilkProduced;

	public:
		//default constructor
		Cow() {
			float Age;
			MilkProduced = 0;
		}

		//primary constructor
		Cow(float age, float milkProduced) {
			Age = age;
			MilkProduced = milkProduced;

		}

		//copy constructor
		Cow(Cow &cow) {
			Age = cow.Age;
			MilkProduced = cow.MilkProduced;

		}

		//destructor
		Cow() {
			cout << "destructor called" << endl;
		}

		float getAge() {
			return Age;
		}

		float getMilkProduced() {
			return MilkProduced;
		}

		void setAge(float Age) {
			Age = Age;

		}

		void setMilkProduced(float MilkProduced) {
			MilkProduced = MilkProduced;

		}
		//overridden method
		void Display() {
			cout << "age" << Age << endl;
			cout << "Milk Produced" << MilkProduced << endl;
		}

};

#endif
