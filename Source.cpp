//nth biggest from unsorted list

#include <iostream>

//make a for loop that checks what the smallest number is
//if the smallest nummber has been found add 1 to the variable count
//next loop we want to not look at the previous number in current_lowest


//after fist pass lowest == the lowest number

int sorting(int arr1[], int n)
{
	int count = 0;
	if (count == n)
	{
		//we have the smallest  nth number
	}

	int current_lowest;
	int lowest =arr1[0];
	
	for (int i = 0; i < n; i++)
	{
		count++;
		for (int b = 1; b < sizeof(arr1)/sizeof(arr1[0]); b++)
		{
			if (arr1[b] < lowest)
			{
				lowest = arr1[b];
			}
		}
	}
}

int main() {

	int arr[10] = { 0,17,5,8,3,7,6,9,2,4};

}