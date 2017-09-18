//Maria Debroy
//COSCI II
//September 18th 2017

#include <iostream>

using namespace std; 



	class CatClass
	{
	public:
		//Constructor sets the box size as soon as the object is created.
		CatClass(int box)
		{
			setBoxSize(box);
		}
		//Deconstructor has text only for demonstration purposes.
		~CatClass()
		{
			cout << "Destructor Called, Box is Now Empty." << endl;
		}
		void setBoxSize(int size)
		{
			boxspace = size;
		}
		int getBoxSize()
		{
			return boxspace;
		}
	private:
		int boxspace;


	};

	int main()
	{
		{
			CatClass Landry(5);
			cout << "Box Size: " << Landry.getBoxSize() << endl;
		}//Destructor Called because object went out of scope

		CatClass Pedro(6);
		cout << "Box Size: " << Pedro.getBoxSize() << endl;

		return 0;
	} //Destructor Called because program ended
	
