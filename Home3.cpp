//#include <iostream>
//#include <Windows.h>
//using namespace std;
//
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    cout << "\t\t\t\tКалькулятор\n\n\n"<<endl;
//
//    double a;
//    double b;
//    double c;
//    
//    int choice;
//    cout << "Введи перше число: "; cin >> a;
//    cout << "Введи друге число: "; cin >> b;
//    cout << "1.+\n";
//    cout << "2.-\n";
//    cout << "3.*\n";
//    cout << "4./\n";
//    cout << "5.%\n";
//    cin >> choice;
//    int j = (int)a;
//    int i = (int)b;
//    
//    
//    if (choice == 1) {
//        cout << a + b << endl;
//    }
//
//    else if (choice == 2) {
//        cout << a - b << endl;
//    }
//    else if (choice == 3) {
//        cout << a * b << endl;
//    }
//    
//    else if (choice == 4) {
//        cout << a / b << endl;
//    }
//    else if (choice == 5) {
//        
//        cout << j % i << endl;
//    }
//    else
//        cout << "Error";
//
//    return 0;
//}



// ЗАВДАННЯ 2



/*#include <iostream>
#include <Windows.h>
using namespace std;
int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "\t\t\tМільйонер\n\n\n";

	cout << "Якщо хочете зіграти, виберіть 1, якщо ні, то 2\n";
	cout << "1.Так\n";
	cout << "2.Ні\n";
	int choice;
	cin >> choice; cout << "\n\n";

	if (choice == 1) {
		cout << "Вітаю, ви у грі мільйонер, відповідаете на 5 питань вірно і отримуєтє мільойн, якщо ні, то ви програли\n\n";
	}

	cout << "Перше питання на 50000грн.\n";
	cout << "В якій країні знаходиться кенгуру?(виберіть цифру)\n";
	cout << "\t1.США\n";
	cout << "\t2.Австралія\n";
	cout << "\t3.Норвегія\n";
	cout << "\t4.Китай\n";
	int choice1;
	cin >> choice1; cout << "\n\n";

	if (choice1 == 2) {
		cout << "Вітаю, ви вийграли 50000гривень!!!\n\n\n";
		cout << "Бажаете продовжити гру?\n";
		cout << "1.Tak\n";
		cout << "2.Hi\n";
		int choice2;
		cin >> choice2; cout << "\n\n";
		if (choice2 == 2) {
			cout << "Вітаю, 50000гривень ваші:)";
		}
		if (choice2 == 1) {
			cout << "Добре, на вашому балансі є 50000гривень і ваше наступне питання на 100000гривень є таким.\n";
			cout << "Яка тварина найбільша у світі?\n";
			cout << "\t1.Слон\n";
			cout << "\t2.Жираф\n";
			cout << "\t3.Синій кит\n";
			cout << "\t4.Хомячок\n";
			int choice3;
			cin >> choice3; cout << "\n\n";
			if (choice3 == 3) {
				cout << "Вітаю ви вийграли 100000гривень!!! На вашому балансі 1500000 гривень\n";
				cout << "Бажаєте продовжувати?";
				cout << "1.Так\n";
				cout << "2.Ні\n";
				int choice4;
				cin >> choice4; cout << "\n\n";
				if (choice4 == 2) {
					cout << "Вітаю, 150000гривень ваші:)";
				}
				if (choice4 == 1) {
					cout << "Добре, на вашому балансі є 150000гривень і ваше наступне питання на 150000гривень є таким.\n";
					cout << "Яку планету не враховують планетою?\n";
					cout << "\t1.Плутон\n";
					cout << "\t2.Сонце\n";
					cout << "\t3.Європа\n";
					cout << "\t4.Чорна дира\n";
					int choice5;
					cin >> choice5; cout << "\n\n";
					if (choice5 == 1) {
						cout << "Вітаю ви вийграли 150000гривень!!! На вашому балансі 300000 гривень\n";
						cout << "Бажаєте продовжувати?";
						cout << "1.Так\n";
						cout << "2.Ні\n";
						int choice6;
						cin >> choice6; cout << "\n\n";
						if (choice6 == 2) {
							cout << "Вітаю, 150000гривень ваші:)";
						}
						if (choice4 == 1) {
							cout << "Добре, на вашому балансі є 150000гривень і ваше наступне питання на 200000гривень є таким.\n";
							cout << "Яка хімічна формула  води\n";
							cout << "\t1.H2O2\n";
							cout << "\t2.H2SO4\n";
							cout << "\t3.(CH2)3N3(N02)3\n";
							cout << "\t4.H2O\n";
							int choice7;
							cin >> choice7; cout << "\n\n";
							if (choice7 == 4) {
								cout << "Вітаю ви вийграли 200000гривень!!! На вашому балансі 500000 гривень\n";
								cout << "Бажаєте продовжувати?";
								cout << "1.Так\n";
								cout << "2.Ні\n";
								int choice8;
								cin >> choice8; cout << "\n\n";
								if (choice8 == 2) {
									cout << "Вітаю, 500000гривень ваші:)";
								}
								if (choice8 == 1) {
									cout << "Добре, на вашому балансі є 500000гривень і ваше наступне питання на 500000гривень є таким.\n";
									cout << "Яка столиця Ліхтенштейну\n";
									cout << "\t1.Брюсель\n";
									cout << "\t2.Ліхтенштейн\n";
									cout << "\t3.Люксембург\n";
									cout << "\t4.Тегусігальпа\n";
									int choice9;
									cin >> choice9; cout << "\n\n";
									if (choice9 == 2) {
										cout << "Вітаю ви вийграли 1000000гривень!!! Ви переможець\n";
									}
									else {
										cout << "Нажаль ви програли";
									}


								}
							
							
							
							
							}
							else {
								cout << "Нажаль ви програли";
							}
						}




					}
					else {
						cout << "Нажаль ви програли";
					}

				}
				

			}
			else {
				cout << "Нажаль ви програли";
			}
		}
		else {
			cout << "Нажаль ви програли";
		}
		
	}

	else {
		cout << "Нажаль ви програли";
	}
		


	return 0;
}*/


//ЗАВДАННЯ 3 -- Незрозумів, що за гра, у інтернеті шукав, немає  інфи