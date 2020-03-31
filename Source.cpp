#include <iostream>
#include <string>


int Population(int p, double relative_growth, int absolute_growth, int target )
{

	static int counter = 0;
	if (p < target)
	{	
		p = p * (relative_growth / 100 + 1.00) + absolute_growth;
		if (p > target)
		{
			counter++;
			return counter;
		}
		else
		{
			counter++;
			return Population(p, relative_growth, absolute_growth, target);
		}

		
	}
	else
	{
		return counter;
	}
	

	
}


int main()
{
	int a =Population(15, 2, 10, 753536474743535345);
	std::cout << a;
	return 0;
}