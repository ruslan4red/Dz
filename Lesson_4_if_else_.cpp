#include <iostream>

using namespace std;

int firstNum = 0;
int lastNum = 0;

int main()
{
	cout << endl << "Це програма присвоєння меншої змінної до більшої." << endl;
	cout << "Ви маєте дві змінні, firstNum та lastNum." << endl << "Введіть значення змінної firstNum." << endl << "Користувач: ";
	cin >> firstNum;
	cout << endl << "Введіть значення змінної lastNum." << endl << "Користувач: ";
	cin >> lastNum;
	cout << "Для змінної firstNum ви ввели: " << firstNum << " та для змінної lastNum ввели " << lastNum << "." << endl;

	if(firstNum > lastNum){
		lastNum = firstNum;
		cout << "Значення змінної firstNum більше значення lastNum тому lastNum присвоюємо значення firstNum,\n";
		cout << "Тепер змінна firstNum = " << firstNum << ", та змінна lastNum = " << lastNum << "."  << endl;
	}else{
		firstNum = lastNum;
		cout << "Значення змінної firstNum менше значення lastNum тому firstNum присвоюємо значення lastNum,\n";
		cout << "Тепер змінна firstNum = " << firstNum << ", та змінна lastNum = " << lastNum << "."  << endl;
	}
	cout << "Виконання програми завершено." << endl;
}
