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

	const unsigned int SIZE = 256;
	char sz_source_filename[SIZE] = {};			//Source - ��������, ��������
	char sz_destination_filename[SIZE] = {};	//Destination - ����� ����������, ����������
	cout << "������� ��� ����� ��������� �����: "; cin.getline(sz_source_filename, SIZE);
	//1) ������� ��������� ����� � ������:
	char* extension = strrchr(sz_source_filename, '.');
	//char* strchr(char* str, char symbol);
	//char* strrchr(char* str, char symbol);
//http://cplusplus.com/reference/cstring/strrchr/
	nullptr;	//��������� �� 0, ��������� � ������.
	//2) ������ ����� ���������, �������� �� ������� ����� ��������� ����� ���������� ����������� �����:
	if (extension == nullptr || strcmp(extension, ".txt") != 0)	strcat(sz_source_filename, ".txt");
	//cout << (extension ? extension : "� ����� ��� ����������!") << endl;
	cout << "������� ��� ����� ��������� �����: "; cin.getline(sz_destination_filename, SIZE);
	extension = strrchr(sz_destination_filename, '.');
	if (extension == nullptr || strcmp(extension, ".txt") != 0)	strcat(sz_destination_filename, ".txt");
	//cout << (extension ? extension : "� ����� ��� ����������!") << endl;

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
	//strcat(sz_dst, sz_src);//strcat ��������� ������������ (�������) �����,
	//��������, "Hello" + "World" = "HelloWorld";
	//sz_dst - ������ ����������, � ������� ���� �������� ��������� ������������.
	//sz_src - ������ ��������, ������� ����� ��������� � ����������.
	system(sz_cmd);
}