/*
Zack Arnett
CS 215 - 007
Program 2
*/

#include <iostream>
#include <string>
#include <math.h>
#include <sstream>
using namespace std;

void binarytodecimal()
{
	cout << "Enter a Binary Number: ";
	int decimal = 0;
	int binary;
	int i = 0;
	cin >> binary;
	std:: string binarystring = to_string(binary);
	int binarysize = binarystring.size();
	bool flag = true;
	if (cin.fail())
	{
		flag = false;
		cin.clear();
		string input;
		cin >> input;
	}
	if (flag == true)
	{
		for(int a = binarystring.length()-1;a >=0; a--)
		{
			int binarydec = binarystring[a]-48;
			if ((binarydec != 0) && (binarydec != 1))
			{
				flag = false;
			}
		}
	}
	if (flag == false)
	{
		cout << "Invalid Input: Contains invalid digit" << endl;
	}
	if (flag == true)
	{
		while(binary != 0)
		{
			decimal += binary % 10 * (pow(2,i));
			binary /= 10;
			i++;
		}
		cout << "Binary Number: " << binary << " ----> Decimal: " << decimal << endl;
	}
	
}

void decimaltobinary()
{
	int decimal;
	cout << "Enter a Decimal: ";
	cin >> decimal;
	bool flag = true;
	if (cin.fail())
	{
		flag = false;
		cin.clear();
		string input;
		cin >> input;
	}
	if (decimal < 0)
	{
		cout << "Invalid input" << endl;
	}
	else
	{
		cout << "Decimal: " << decimal << " ----> Binary: ";
		int remainder = 0;
		if (decimal == 0)
		{
			cout << decimal;
		}
		int i = 1;
		while (decimal != 0)
		{
			remainder += decimal % 2*i;
			decimal = decimal / 2;
			i *= 10;
		}
		cout << remainder << endl;
	}
}

void binarytohexadecimal()
{
	string hexadecimal = "";
	int binary;
	int decimal = 0;
	cout << "Enter a Binary Number: ";
	cin >> binary;
	std:: string binarystring = to_string(binary);
	int binarysize = binarystring.size();
	int k = 0;
	int i = 0;
	bool flag = true;
	if (cin.fail())
	{
		flag = false;
		cin.clear();
		string input;
		cin >> input;
	}
		if (flag == true)
		{
			for(int a = binarystring.length()-1;a >=0; a--)
			{
				int binarydec = binarystring[a]-48;
				if ((binarydec != 0) && (binarydec != 1))
				{
					flag = false;
				}
			}
		}
		if (flag == true)
		{
			while(binary != 0)
			{
				decimal += binary % 10 * (pow(2,i));
				binary /= 10;
				i++;
			}
			cout << "Binary " << binarystring << " ---> Hexadecimal: " << std::hex << decimal << endl;
		}	
		if (flag == false)
		{
			cout << "Invalid Input" << endl;
		}
}

void hexadecimaltobinary()
{
	string hexadecimal;
	string binary;
	cout << "Enter a Hexadecimal Number: ";
	cin >> hexadecimal;
	int hexasize = hexadecimal.size();
	bool flag = true;
	while (flag == true)
	{ 
		for (int i = 0; i < hexasize; i++)
		{
			switch (hexadecimal[i])
			{
				case '0': binary.append("0000"); break;
				case '1': binary.append("0001"); break;
				case '2': binary.append("0010"); break;
				case '3': binary.append("0011"); break;
				case '4': binary.append("0100"); break;
				case '5': binary.append("0101"); break;
				case '6': binary.append("0110"); break;
				case '7': binary.append("0111"); break;
				case '8': binary.append("1000"); break;
				case '9': binary.append("1001"); break;
				case 'A': binary.append("1010"); break;
				case 'B': binary.append("1011"); break;
				case 'C': binary.append("1100"); break;
				case 'D': binary.append("1101"); break;
				case 'E': binary.append("1110"); break;
				case 'F': binary.append("1111"); break;
				case 'a': binary.append("1010"); break;
				case 'b': binary.append("1011"); break;
				case 'c': binary.append("1100"); break;
				case 'd': binary.append("1101"); break;
				case 'e': binary.append("1110"); break;
				case 'f': binary.append("1111"); break;
				default: flag = false; break;
			}
		}
		if (flag == true)
		{
			cout << "Hexadecimal: " << hexadecimal << " ----> Binary: " << binary << endl; break;
		}
		else
		{
			cout << "Invalid Input" << endl;
		}
	}
}
void pause_215(bool have_newline)
{
	if (have_newline) 
	{
 // Ignore the newline after the user's previous input.
	cin.ignore(256, '\n');
	}
 // Prompt for the user to press ENTER, then wait for a newline.
	cout << endl << "Press ENTER to continue." << endl;
	cin.ignore(256, '\n');
}
int main()
{
	int input;
	cout << "=========================================" << endl;
	cout << "1: Binary --> Decimal" << endl;
	cout << "2: Decimal --> Binary" << endl;
	cout << "3: Binary --> Hexadecimal" << endl;
	cout << "4: Hexadecimal --> Binary" << endl;
	cout << "Others: Quit" << endl;
	cout << "=========================================" << endl;
	cin >> input;
	if (cin.fail())
	{
		cin.clear();
		string input;
		cin >> input;
	}

	while ((input >= 1 && input <= 4))
	{
		switch (input)
		{
			case 1: binarytodecimal(); break;
			case 2: decimaltobinary(); break;
			case 3: binarytohexadecimal(); break;
			case 4: hexadecimaltobinary(); break;
		}
		cout << "=========================================" << endl;
		cout << "1: Binary --> Decimal" << endl;
		cout << "2: Decimal --> Binary" << endl;
		cout << "3: Binary --> Hexadecimal" << endl;
		cout << "4: Hexadecimal --> Binary" << endl;
		cout << "Others: Quit" << endl;
		cout << "=========================================" << endl;
		cin >> input;
		if (cin.fail())
		{
			cin.clear();
			input = 5;
		}
	}
	cout << "Thanks for using the program" << endl;
	pause_215(true);

}