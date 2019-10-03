#include <iostream>;
#include <cmath>;
#include <fstream>;
#include <string>;
using namespace std;
#define M_PI 3.14159265358979323846;

void f1vvod() {
	float a;
	ofstream file;
	file.open("C:\\Users\\Admin\\Desktop\\file.txt");
	for (int i = 0; i < 10; i++) {
		cin >> a;
		file << a << " ";
	}
	file.close();
}

float f1vivod() {
	float s = 0;
	char ch;
	string str = "";
	ifstream file2;
	file2.open("C:\\Users\\Admin\\Desktop\\file.txt");
	while (file2.get(ch)) {
		if (ch != ' ') {
			str += ch;
		}
		else {
			s += stof(str);
			str = "";
		}
	}
	file2.close();
	return s;
}

float f2(float f) {
	if (f > 0) {
		return 1;
	}
	else{
		if (f < 0) {
			return -1;
		}
		else {
			return 0;
		}
	}
}

float f3pr() {
	float a, b;
	cout << "Введите значения сторон для рассчёта площади прямоугольника\na="; cin >> a;
	cout << "b="; cin >> b;
	if (a < 0 || b < 0) {
		cout << "Введены отрицательные значения";
	}
	else {
		cout << "s=" << a * b;
	}
	return 0;
}

float f3tr() {
	float a, h;
	cout << "Введите значения основания и высоты для рассчёта площади треугольника\na="; cin >> a;
	cout << "h="; cin >> h;
	if (a < 0 || h < 0) {
		cout << "Введены отрицательные значения";
	}
	else {
		cout << "s=" << 0.5 * a * h;
	}
	return 0;
}

float f3kr() {
	float r;
	cout << "Введите значение радиуса для рассчёта площади круга\nr="; cin >> r;
	if (r < 0) {
		cout << "Введены отрицательные значения";
	}
	else {
		cout << "s=" << r * r * M_PI;
	}
	return 0;
}

void f4() {
	for (int i = 0; i < 13; i++) {
		if (i < 7) {
			cout << " * * * * * * * * ";
			if (i % 2 == 0) {
				cout << ">>>>>>>>>>>>>>>>>>>>>>>>>\n";
			}
			else {
				cout << "\t\t\t\n";
			}
		}
		else {
			if (i % 2 == 0) {
				cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n";
			}
			else {
				cout << "\t\t\t\t\t\t\n";
			}
		}
	}
}

void f5(int str) {
	double sn;
	switch (str)
	{
	case 0:
		sn = 1;
		break;
	case 1:
		sn = sqrt(3) / 2;
		break;
	case 3:
		sn = 0.5;
		break;
	case 6:
		sn = 0;
		break;
	case 9:
		sn = -0.5;
		break;
	case 11:
		sn = -sqrt(3) / 2;
		break;
	case 12:
		sn = -1;
		break;
	default:
		sn = -11;
		break;
	}
	if (sn==-11) { cout << "\t|\n"; }
	else {
		if (sn == 0) {
			cout << "————————*———————————————————————————————————————————————*———————————————————————————————————————————————*\n";
		}
		else{
			cout << "\t|\t";
			for (int i = 30; i < 360; i += 30) {
				float grad = (i / 180.0) * 3.14159265358979323846;
				//cout << sin(grad) << " " << sn << "||";
				if (sin(grad) >= sn - 0.000001 && sin(grad) <= sn + 0.000001) { cout << "*\t"; }
				else { cout << "\t"; }
			}
			cout << "\n";
		}
	}
}

int f7(int m, int i, int c, int s, int j) {
	s = (m * s + j) % c;
	//cout << "s(" << j+1 << ") = " << s << "\n";
	if (j < i-1) { j++; s=f7(m, i, c, s, j); }
	return s;
}

float f8(float arra[3][4], float arrb[4][2], int str, int stb) {
	float a = 0;
	for (int i = 0; i < 4; i++) {
		a += arra[str][i] * arrb[i][stb];
	}
	return a;
}

int f9des(string a, int xa) {
	int des = 0;
	for (int i = 0; i < a.length(); i++) {
		int tsifra;
		if (isdigit(int(a[i]))==0) {
			tsifra = int(a[i]) - 55;
		}
		else { tsifra = int(a[i]) - 48; }
		des += tsifra * pow(xa, a.length() - i - 1);
	}
	return des;
}

string f9xb(int des, int xb) {
	string b1 = "", b = "";
	while (des > 0) {
		if (des % xb > 9) {
			b1 += char((des % xb) + 55);
		}
		else {
			b1 += to_string(des % xb);
		}
		des /= xb;
	}
	for (int i = 0; i < b1.length(); i++) {
		b += b1[b1.length() - i - 1];
	}
	return b;
};

int main() {
	setlocale(LC_ALL, "rus");
	string menu;
	while (true) {
		cout << "Введите номер задания для запука соответствующей программы или число 1227 для выхода\n";
		cin >> menu;
		if (atoi(menu.c_str()) == 1227) {
			break;
		}
		switch (atoi(menu.c_str()))
		{
		case 1: {
			cout << "Введите 10 чисел через enter\n";
			f1vvod();
			cout << "S=" << f1vivod() << "\n";
			system("pause");
			remove("C:\\Users\\Admin\\Desktop\\file.txt");
			cout << "\n----------------------Работа программы-задания завершена----------------------\n\n";
			break;
		}
		case 2: {
			cout << "Выводим значение функции sign(x). Введите значение x\nx=";
			float x;
			cin >> x;
			cout << "sign(" << x << ")=" << f2(x);
			cout << "\n----------------------Работа программы-задания завершена----------------------\n\n";
			break;
		}
		case 3: {
			cout << "Рассчитываем площадь прямоугольника [1], треугольника [2] или круга [3].\nВведите соответствующее число из квадратных скобок: \n";
			int a;
			cin >> a;
			switch (a)
			{
			case 1: { f3pr(); break; }
			case 2: { f3tr(); break; }
			case 3: { f3kr(); break; }
			default: { cout << "Команда не распознана"; }
			}
			cout << "\n----------------------Работа программы-задания завершена----------------------\n\n";
			break;
		}
		case 4: {
			cout << "Былая Слава 1912 года\n";
			f4();
			cout << "\n----------------------Работа программы-задания завершена----------------------\n\n";
			break;
		}
		case 5: {
			cout << "График y=sin(x)\n";
			for (int i = 0; i < 13; i++) {
				f5(i);
			}
			cout << "\n----------------------Работа программы-задания завершена----------------------\n\n";
			break;
		}
		case 6: {
			cout << "Введите римское число: ";
			char lat[100];
			int count = 0;
			cin >> lat;
			for (int i = 0; i < strlen(lat); i++) {
				switch (lat[i]) {
				case 'M': {
					count += 1000;
					break; }
				case 'D': {
					count += 500;
					break; }
				case 'C': {
					if (i + 1 < strlen(lat) && (lat[i + 1] == 'D' || lat[i + 1] == 'M')) { count -= 100; }
					else { count += 100; }
					break; }
				case 'L': {
					count += 50;
					break; }
				case 'X': {
					if (i + 1 < strlen(lat) && (lat[i + 1] == 'L' || lat[i + 1] == 'C')) { count -= 10; }
					else { count += 10; }
					break; }
				case 'V': {
					count += 5;
					break; }
				case 'I': {
					if (i + 1 < strlen(lat) && (lat[i + 1] == 'V' || lat[i + 1] == 'X')) { count -= 1; }
					else { count += 1; }
					break; }
				}
			}
			cout << "Арабское число: " << count << endl;
			cout << "\n----------------------Работа программы-задания завершена----------------------\n\n";
			break;
		}
		case 7: {
			cout << "Введите любое стартовое число для генерации случайного числа [0,63]: \n";
			int m = 37, i = 3, c = 64, s;
			cin >> s;
			cout << "random = " << f7(m,i,c,s,0);
			cout << "\n----------------------Работа программы-задания завершена----------------------\n\n";
			break;
		}
		case 8: {
			cout << "Введите \n";
			float arra[3][4]{
				{5, 2, 0, 10},
				{3, 5, 2, 5},
				{20, 0, 0, 0}
			};
			float arrb[4][2]{
				{1.2, 0.5},
				{2.8, 0.4},
				{5.0, 1.0},
				{2.0, 1.5}
			};
			float arrc[3][2]{
				{f8(arra,arrb,0,0),f8(arra,arrb,0,1)},
				{f8(arra,arrb,1,0),f8(arra,arrb,1,1)},
				{f8(arra,arrb,2,0),f8(arra,arrb,2,1)}
			};

			cout << "1) Больше всего денег выручит ";
			if (arrc[0][0] > arrc[1][0] && arrc[0][0] > arrc[2][0]) { cout << "1"; }
			else { if (arrc[1][0] > arrc[0][0] && arrc[1][0] > arrc[2][0]) { cout << "2"; }
			else { { cout << "3"; } } }
			cout << " продавец, а меньше всего - ";
			if (arrc[0][0] < arrc[1][0] && arrc[0][0] < arrc[2][0]) { cout << "1\n"; }
			else {if (arrc[1][0] < arrc[0][0] && arrc[1][0] < arrc[2][0]) { cout << "2\n"; }
			else  { cout << "3\n"; } }

			cout << "2) Наибольшие комиссионные получил ";
			if (arrc[0][1] > arrc[1][1] && arrc[0][1] > arrc[2][1]) { cout << "1"; }
			else {if (arrc[1][1] > arrc[0][1] && arrc[1][1] > arrc[2][1]) { cout << "2"; }
			else { { cout << "3"; } }}
			cout << " продавец, а наименьшие всего - ";
			if (arrc[0][1] < arrc[1][1] && arrc[0][1] < arrc[2][1]) { cout << "1\n"; }
			else {if (arrc[1][1] < arrc[0][1] && arrc[1][1] < arrc[2][1]) { cout << "2\n"; }
			else { cout << "3\n"; }}

			float s = 0;
			for (int i = 0; i < 3; i++) {
				s += arrc[i][0];
			}
			cout << "3) Общая выручка от продажи составила " << s << " денежных единиц\n";

			float sk = 0;
			for (int i = 0; i < 3; i++) {
				sk += arrc[i][1];
			}
			cout << "4) Сумма комиссионных составила " << sk << " денежных единиц\n";

			cout << "5) Общая сумма денег, прошедших через руки продавцов, равна " << s+sk << " денежных единиц";
			cout << "\n----------------------Работа программы-задания завершена----------------------\n\n";
			break;
		}
		case 9: {
			int xa, xb; string a;
			cout << "Переводим целое число А из системы с основанием ха в систему с основанием xb [xa и xb <= 36; Пожалуйста, используйте только заглавные буквы]\nА = "; cin >> a;
			cout << "ха = "; cin >> xa;
			cout << "xb = "; cin >> xb;
			int des = f9des(a, xa);
			string b = f9xb(des, xb);
			cout << "Искомое число B = " << b;
			cout << "\n----------------------Работа программы-задания завершена----------------------\n\n";
			break;
		}
		default: {
			cout << "Команда не распознана\n";
			break;
		}
		}
	}
	cout << "\n\n\n----------------------Работа корневой программы завершена----------------------";
	return 0;
}