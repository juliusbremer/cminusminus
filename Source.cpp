#include <iostream>
#include <vector>

using namespace std;

int Thanos(int n, std::vector<int> &arr) {
	if (n > 1)
	{
		
		int count = 0;
		for (int i = 0; i < n - 1; i++)
		{
			if (arr[i] <= arr[i + 1]) {
				count++;
				if (count == n-1)
				{
					return n;
				}
			}
		}
		n /= 2;
		Thanos(n, arr);


		
	
	}
	else
	{
		return 1;
	}
}

int main()
{
	std::vector<int> Array1{1,2,1,4};
	int n = 4;
	int b = Thanos(n, Array1);
	std::cout << b;


}
