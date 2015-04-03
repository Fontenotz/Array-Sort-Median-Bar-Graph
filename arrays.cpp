#include<iostream.h>
#include<time.h>
#include<stdlib.h>

void rand_numbers();
void sort();
void display();
void middle_number();
void even_and_odd();
void bar_graph();

int even=0;
int odd=0;
int numbers[25];

int main()
{
	srand(time(0));
	rand_numbers();
	sort();
	display();
	even_and_odd();
	middle_number();
	bar_graph();
	return 0;
}

void rand_numbers()
{
	for (int x=0;x<25;x=x+1)
	{
		numbers[x]=rand()%50+1;
	}
}


void sort()
{
	int temp;
	for(int a=0;a<24;a=a+1)
	{
		for(int b=a+1;b<25;b=b+1)
		{
			if (numbers[b]>numbers[a])
			{
				temp=numbers[b];
				numbers[b]=numbers[a];
				numbers[a]=temp;
			}
		}
	}
}

void display()
{
	for (int x=0;x<25;x=x+1)
	{
		cout<<numbers[x]<<endl;
	}
}

void middle_number()
{
	cout<<endl;
	cout<<endl;
	cout<<"The middle number is "<<numbers[12];
}

void even_and_odd()
{
	for(int x=0;x<25;x=x+1)
	{
		if (numbers[x]%2==0)
		{
			even=even+1;
		}
		else
		{
			odd=odd+1;
		}
	}
}


void bar_graph()
{
	cout<<endl;
	cout<<endl;
	cout<<"Evens   ";
	for (int z=0;z<even;z=z+1)
	{
		cout<<"*";
	}
	cout<<endl;
	cout<<"Odds    ";
	for (int p=0;p<odd;p=p+1)
	{
		cout<<"*";
	}
	cout<<endl;
}