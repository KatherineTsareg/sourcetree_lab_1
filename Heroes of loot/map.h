/*
#ifndef Map_H
#define Map_H
#include <SFML\Graphics.hpp>

const int HEIGHT_MAP = 16;//������ ����� ������
const int WIDTH_MAP = 20;//������ ����� ������ 

sf::String TileMap[HEIGHT_MAP] = {
	"01f11f11f1---11f1f12",
	"0        2---0     2",
	"0        1f1f1     2",
	"0                  2",
	"0 11111f11f111f1   2",
	"0   20             2",
	"0   20             2",
	"0   20       2     2",
	"0   20       2     2",
	"0   20       2     2",
	"0   20       1f11f12",
	"0   20             2",
	"0   233333333330   2",
	"0   211f11f11f10   2",
	"0   20             2",
	"03333333333333333332",
};

void randomMapGenerate(char name_bonus, int numb_bonus)
{
	int randomElementX = 0;//��������� ������� �� �����������
	int randomElementY = 0;//���� ��-� �� ���������
	srand(time(0));//������	
	int countBonuses = numb_bonus;//���������� ������

	while (countBonuses > 0) {
		randomElementX = 1 + rand() % (WIDTH_MAP - 1);//��������� �� ���� �� 1 �� ������ �����-1, ����� �� �������� ����� ������� �����
		randomElementY = 1 + rand() % (HEIGHT_MAP - 1);//�� ������ ��� ��

		if (TileMap[randomElementY][randomElementX] == ' ') {//���� ��������� ������ ������, 
			TileMap[randomElementY][randomElementX] = name_bonus; //�� ������ ���� ������.
			countBonuses--;
		}
	}
}

#endif
*/