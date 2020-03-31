#include <iostream>
#include <time.h>
#include <vector>

using namespace std;

void moederneuker()
{
	std::cout << "Please enter the amount of random numbers you would like to sort \n No more than 500 !";
}
int input()
{
	int Length_Of_Array;
	std::cin >> Length_Of_Array;
	if (Length_Of_Array > 500)
	{
		printf("the number was higher than 500 \n");
		moederneuker();
		input();
	}
	else
	{
		return Length_Of_Array;
	}
}

vector<int> random(int LengthOf)
{
	std::vector<int> DynamicArray;
	srand(time(NULL));
	for (int i = 0; i < LengthOf; i++)
	{
		int Hello = rand() % 14350 + 1;
		DynamicArray.push_back(Hello);

	}
	return DynamicArray;
}



void sorting(vector<int> Array1)
{

	int wissel;
	int a, b;
	for (int i = 0; i < Array1.size()-1; i++)
	{	
		for (a = 0, b = 1 ; b < Array1.size()-i; a++,b++)
		{
			if (Array1[a] > Array1[b])
			{
				wissel = Array1[a];
				Array1[a] = Array1[b];
				Array1[b] = wissel;
				
			}
		}	
	}
	for (int i = 0; i < Array1.size(); i++)
	{
		printf("%i \t", Array1[i]);
	}
	
}




int main()
{
	
	moederneuker();
	vector<int> oke =random(input());
	sorting(oke);
	
	return 0;
}

