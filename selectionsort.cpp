#include<iostream>
#include<ctime>
using namespace std;
void selection_Sort(int arr[], int size);
void print(int arr[], int size);
int main()
{
	int dataarray[50], temp[50];
	srand(time(NULL));
	//total random:
	for (int i = 0; i < 50; i++)
	{
		dataarray[i] = rand() % 1000;
	}
	cout << "sorting array (random data) \n";
	selection_Sort(dataarray, 50);
	print(dataarray, 50);
	//nearly sorted:
	for (int i = 0; i < 20; i++)
	{
		dataarray[i] = rand() % 1000;
	}
	cout << "sorting array (nearly sorted data) \n";
	selection_Sort(dataarray, 50);
	print(dataarray, 50);
	//reversing:
	for (int i = 0,j=49; i < 50; i++,j--)
	{
		temp[j] = dataarray[i];
	}
	cout << "sorting array (reversed data) \n";
	selection_Sort(temp, 50);
	print(dataarray, 50);
	//redundant:
	for (int i = 0; i < 50; i++)
	{
		dataarray[i] = rand() % 100;
	}
	cout << "sorting array (redundant values data) \n";
	selection_Sort(dataarray, 50);
	print(dataarray, 50);
	system("pause>0");
	return 0;
}
void selection_Sort(int arr[], int size)
{
	int s_index,temp;
	for (int i = 0; i < size-1; i++)
	{
		s_index = i;
		for (int j = s_index + 1; j < size; j++)
		{
			if (arr[s_index]>arr[j])
				s_index = j;
		}
		temp = arr[s_index];
		arr[s_index] = arr[i];
		arr[i] = temp;
	}
}
void print(int arr[], int size)
{
	for (int i = 0; i < 50; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl << endl;
}
