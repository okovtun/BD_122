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


	ifstream fin("201 RAW.txt");
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
		}
	}
	else
	{
		cerr << "Error: file not found!" << endl;
	}
	fin.close();
}