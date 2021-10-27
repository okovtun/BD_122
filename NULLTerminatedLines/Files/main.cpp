#include<iostream>
#include<fstream> //File stream (�������� ������)
using namespace std;

//#define WRITE_TO_FILE
//#define READ_FROM_FILE

void main()
{
	setlocale(LC_ALL, "");

#ifdef WRITE_TO_FILE
	//cout << "HelloWorld" << endl;
	ofstream fout("file.txt", ios::app);	//������� � ��������� �����
	fout << "HelloWorld" << endl;
	fout.close();		//������ ����������� ����� ���������
	system("more file.txt");
#endif // WRITE_TO_FILE

#ifdef READ_FROM_FILE
	ifstream fin;	//������� �����
	fin.open("file.txt");
	const unsigned int SIZE = 1024;
	char sz_buffer[SIZE]{};	//� ��� ������ ����� ������ �� �����
	//sz_ - String Zero (������, ��������������� �����)
	if (fin.is_open())	//���������, ������ �� ����
	{
		//TODO:���� �������, ����� ������ ����
		while (!fin.eof())//���� �� ����� �����
		{
			//����� ������������� ������
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

	//� ����� 201 RAW.txt �������� ������� �������� � MAC-�������, � IP-�������
	//�������� ���� ������ �������� ����������, ��������� ������ ������� ����� ���������� ����
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