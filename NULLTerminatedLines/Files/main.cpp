#include<iostream>
#include<fstream> //File stream (файловые потоки)
using namespace std;

//#define WRITE_TO_FILE
//#define READ_FROM_FILE

void main()
{
	setlocale(LC_ALL, "");

#ifdef WRITE_TO_FILE
	//cout << "HelloWorld" << endl;
	ofstream fout("file.txt", ios::app);	//Создаем и открываем поток
	fout << "HelloWorld" << endl;
	fout.close();		//Потоки обязательно нужно закрывать
	system("more file.txt");
#endif // WRITE_TO_FILE

#ifdef READ_FROM_FILE
	ifstream fin;	//Создаем поток
	fin.open("file.txt");
	const unsigned int SIZE = 1024;
	char sz_buffer[SIZE]{};	//В эту строку будем читать из файла
	//sz_ - String Zero (Строка, заканчивающаяся нулем)
	if (fin.is_open())	//Проверяем, открыт ли файл
	{
		//TODO:если открыть, будем читать файл
		while (!fin.eof())//Пока НЕ конец файла
		{
			//будет производиться чтение
			//eof() - End Of File.
			//fin >> sz_buffer;
			fin.ignore();
			fin.getline(sz_buffer, SIZE);
			cout << sz_buffer << endl;
		}
	}
	else
	{
		cerr << "Error: file not found" << endl;
	}
	fin.close();
#endif // READ_FROM_FILE

	//В файле 201 RAW.txt поменять местами столбики с MAC-адресом, и IP-адресом
	//Исходный файл должен остаться неизменным, программа должна создать новый измененный файл
	//201 ready.txt
	
	/*fstream stream("file.txt", ios::in | ios::out | ios::app);
	const unsigned int SIZE = 1024;
	stream.close();*/

	const unsigned int SIZE = 256;
	char sz_source_filename[SIZE] = {};			//Source - исходник, источник
	char sz_destination_filename[SIZE] = {};	//Destination - пункт назначения, получатель
	cout << "Введите имя файла исходного файла: "; cin.getline(sz_source_filename, SIZE);
	//1) Находим последнюю точку в строке:
	char* extension = strrchr(sz_source_filename, '.');
	//char* strchr(char* str, char symbol);
	//char* strrchr(char* str, char symbol);
//http://cplusplus.com/reference/cstring/strrchr/
	nullptr;	//Указатель на 0, указатель в никуда.
	//2) Теперь нужно проверить, являются ли символы после последней точки правильным расширением файла:
	if (extension == nullptr || strcmp(extension, ".txt") != 0)	strcat(sz_source_filename, ".txt");
	//cout << (extension ? extension : "У файла нет расширения!") << endl;
	cout << "Введите имя файла конечного файла: "; cin.getline(sz_destination_filename, SIZE);
	extension = strrchr(sz_destination_filename, '.');
	if (extension == nullptr || strcmp(extension, ".txt") != 0)	strcat(sz_destination_filename, ".txt");
	//cout << (extension ? extension : "У файла нет расширения!") << endl;

	ifstream fin(sz_source_filename);
	ofstream fout(sz_destination_filename);
	const unsigned int IP_SIZE = 16;
	const unsigned int MAC_SIZE = 18;
	char sz_ip_buffer[IP_SIZE] = {};
	char sz_mac_buffer[MAC_SIZE] = {};
	if (fin.is_open())
	{
		while (!fin.eof())
		{
			fin >> sz_ip_buffer;
			fin >> sz_mac_buffer;
			cout << sz_mac_buffer << "\t";
			cout << sz_ip_buffer << "\n";
			fout << sz_mac_buffer << "\t";
			fout << sz_ip_buffer << "\n";

		}
	}
	else
	{
		cerr << "Error: file not found!" << endl;
	}
	fin.close();
	fout.close();

	char sz_cmd[SIZE] = "notepad ";
	strcat(sz_cmd, sz_destination_filename);
	//strcat(sz_dst, sz_src);//strcat выполняет конкатенацию (слияние) строк,
	//например, "Hello" + "World" = "HelloWorld";
	//sz_dst - строка получатель, в которую буде сохранен результат конкатенации.
	//sz_src - строка источник, которая будет добавлена к получателю.
	system(sz_cmd);
}