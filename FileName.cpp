#include <iostream>
#include <windows.h>

float sum(float one, float two);
float minus(float one, float two);            
float ymnoshit(float one, float two);
float delenie(float one, float two);
//����������� ��� IF || SWITCH (�����)




int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	float one, two;
	int choose;


	const int size = 4;
	float (*functptrSize[size])(float one, float two) = { sum, minus, ymnoshit, delenie };
	//������ ������� ����� �� ���������

	std::cout << "������� ������ �����: ";
	std::cin >> one;

	std::cout << "������� ������ �����: ";
	std::cin >> two;
	
	while (true)
	{
		std::cout << "�������� �������� 1)+ 2)- 3)* 4)/\n";
		std::cin >> choose;
		if (choose > 0&&choose<5) {
			break;
		}
	}


	
	std::cout<<(*functptrSize[choose-1])(one, two);
	//�� id ������� �������� �������

	
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
