#include <iostream>
#include <string>
#include <locale.h>
#include <cstdlib>
#include <time.h>
#include <Windows.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese");
	srand(time(0));
	string Alunos[10] = {}, Disciplinas[10] =
	{ "Matemática",
		"Portugues",
		"Química",
		"Arquiquetura de Computadores",
		"História",
		"Geografia",
		"Sistemas Operativos",
		"Programaçao de Sistemas Informaticos",
		"Redes",
		"Informática" };
	float Notas[10][10], MediaA[10] = { 0 }, MediaD[10] = { 0 }, somaA = 0, somaD[10] = { 0 };
	for (int i = 0; i < 10; i++)
	{
		somaA = 0;
		cout << "Aluno Nº" << i + 1 << " nome \n";
		cin >> Alunos[i];
		for (int j = 0; j < 10; j++)
		{
			cout << Alunos[i] << " diz a tua nota" << Disciplinas[j] << ": ";
			cin >> Notas[i][j];
			somaA += Notas[i][j];
			somaD[j] += Notas[i][j];
			if (i == 9)
			{
				MediaD[j] = somaD[j] / 10;
			}
		}
		MediaA[i] = somaA / 10;
		system("cls");
	}
	cout << "media dos alunos\n";
	for (int i = 0; i < 10; i++)
	{
		cout << Alunos[i] << ": " << MediaA[i] << "\n";
	}
	cout << "media das disciplinas\n";
	for (int i = 0; i < 10; i++)
	{
		cout << Disciplinas[i] << ": " << MediaD[i] << "\n";
	}


	return 0;
}
