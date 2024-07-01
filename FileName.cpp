#include <iostream>
#include <windows.h>

float sum(float one, float two);
float minus(float one, float two);            
float ymnoshit(float one, float two);
float delenie(float one, float two);
// јЋ№ ”Ћя“ќ– Ѕ≈« IF || SWITCH (почти)




int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	float one, two;
	int choose;


	const int size = 4;
	float (*functptrSize[size])(float one, float two) = { sum, minus, ymnoshit, delenie };
	//размер массива можно не указывать

	std::cout << "¬ведите первое число: ";
	std::cin >> one;

	std::cout << "¬ведите второе число: ";
	std::cin >> two;
	
	while (true)
	{
		std::cout << "¬ыберите действие 1)+ 2)- 3)* 4)/\n";
		std::cin >> choose;
		if (choose > 0&&choose<5) {
			break;
		}
	}


	
	std::cout<<(*functptrSize[choose-1])(one, two);
	//по id массива выбирает функцию

	
	return 0;
}

float sum(float one, float two)
{
	return one+two;
}

float minus(float one, float two)
{
	return one-two;
}

float ymnoshit(float one, float two)
{
	return one*two;
}

float delenie(float one, float two)
{
	if (two != 0) {

		return one/two;
	}
	else {
		std::cerr << "error\n";
	}
}
