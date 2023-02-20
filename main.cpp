#include <iostream>
using namespace std;
//FUNCTION TO ADD ARRAY ELEMNTS
void AddArrayElements(int array[],int sizeOfArray,int lowerLimit,int upperLimit)
{
	for(int i=0; i<sizeOfArray; i++)
	{
		array[i]=lowerLimit+(rand()%(upperLimit-lowerLimit+1));
	}
}

//FUNCTION TO DISPLAY ARRAY
void DisplayArray(int array[],int sizeOfArray)
{
	for(int i=0; i<sizeOfArray; i++)
		cout<<" "<<array[i];
}

//FUNCTION TO FIND COMMON ELEMENTS IN THE BOTH ARRAY
void CommonElements(int array1[],int array2[],int sizeOfArray)
{
	int commonElement[sizeOfArray];
	int commonElementPosition=0;
	for(int i=0; i<sizeOfArray; i ++)
	{
		for(int j=0; j<sizeOfArray; j++)
		{
			if(array1[i]==array2[j])
			{
				commonElement[commonElementPosition]= array1[i];
				commonElementPosition++;
			}
		}
	}
	cout<<"\nCOMMON ELEMENTS : ";
	DisplayArray(commonElement,commonElementPosition);
}

int main() 
{
	srand(time(0));
	int sizeOfArray;
	int upperLimit;
	int lowerLimit;
	//USER INPUT TO ASSIGN THE SIZE OF ARRAY
	cout<<"\nENTER THE NUMBER OF ELEMENTS : ";
	cin>>sizeOfArray;
	int array1[sizeOfArray];
	int array2[sizeOfArray];
	cout<<"\nENTER LOWER LIMIT OF THE NUMBER : ";
	cin>>lowerLimit;
	cout<<"\nENTER UPPER LIMIT OF THE NUMBER : ";
	cin>>upperLimit;
	//FUNCTION CALL TO ADD ELEMENTS TO ARRAY 1
	AddArrayElements(array1,sizeOfArray,lowerLimit,upperLimit);
	//FUNCTION CALL TO ADD ELEMENTS TO ARRAY 2
	AddArrayElements(array2,sizeOfArray,lowerLimit,upperLimit);
	cout<<"\nARRAY 1 IS : ";
	//FUNCTION CALL TO DISPLAY ARRAY 1
	DisplayArray(array1,sizeOfArray);
	cout<<"\nARRAY 2 IS : ";
	//FUNCTION CALL TO DISPLAY ARRY 2
	DisplayArray(array2,sizeOfArray);
	//FUNCTION TO FIND COMMON ELEMENTS
	CommonElements(array1,array2,sizeOfArray);
}