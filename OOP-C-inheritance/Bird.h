



#include "Animal.h"

class Bird : public Animal //declear inheritance , bird is a type of animal
{
	private:
		int NumberEggsLaid;
		
		
	
	public:
		//default constructor
		Bird()
		{
			Animal();
			NumberEggsLaid = 0;
		}

		//primary constructor
		Bird( float age,int numberEggsLaid) 
		{
			Animal(age);
			NumberEggsLaid = numberEggsLaid;
		}

		//copy constructor
		Bird(Bird &bird)
		{
			Animal(bird.Age);
			NumberEggsLaid = bird.NumberEggsLaid;
		}

		//destructor
		~Bird() {
			cout << "destructor called" << endl;

		}
		int getNumberEggsLaid() {
			return NumberEggsLaid;
		}

		void setNumberEggsLaid(int numberEggsLaid) {
			NumberEggsLaid = numberEggsLaid;
		}

		//overridden method
		void Display() {
			cout << "bird age" << Age << endl;
			cout << "Number of eggs laid" << NumberEggsLaid << endl;
		}
};


	
