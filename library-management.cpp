//*************************************************************//
// HEADER FILE USED IN PROJECT                                 //
//*************************************************************//
#include <iostream>
#include <fstream>
#include "library.h"
using namespace std;
//***************************************************************
// CLASS USED IN PROJECT
//***************************************************************
class book
{
	char bno[10], bname[50], aname[20];

public:
	void create_book()
	{
		cout << "\nNEW BOOK ENTRY\n";
		cout << "\nEnter The book no.";
		cin >> bno;
		cout << "\n\nEnter The Name of The Book ";
		cin >> bname;
		cout << "\n\nEnter The Author's Name ";
		cin >> aname;
		cout << "\n\n\nBookCreated..";
	}
	void show_book()
	{
		cout << "\nBookno. : " << bno;
		cout << "\n\nBookName :" << bname;
		cout << "\n\nAuthor Name : " << aname;
	}
	void modify_book()
	{
		cout << "\nBookno. : " << bno;
		cout << "\nModify Book Name : ";
		cin >> bname;
		cout << "\nModify Author's Name of Book : ";
		cin >> aname;
	}

	char *retbno()
	{
		return bno;
	}
	void report()
	{

		cout << bno << setw(30) << bname << setw(35) << aname << endl;
	}

}; // class ends here
class student
{
	char admno[6];
	char name[20];
	char stbno[6];
	int token;

public:
	void create_student()
	{
		system("cls");
		cout << "\nNEW STUDENT ENTRY\n";
		cout << "\nEnter The admission no.";
		cin >> admno;
		cout << "\n\nEnter The Name of The Student ";
		cin >> name;
		token = 0;
		stbno[0] = '/0';
		cout << "\n\nStudent Record Created..";
	}
	int rettoken()
	{
		return token;
	}
	void show_student()
	{
		cout << "\nAdmissionno. : " << admno;
		cout << "\nStudentName : " << name;
		cout << "\nNo of Book issued : " << token;
		if (token == 1)
			cout << "\nBook No " << stbno;
	}
	void modify_student()
	{
		cout << "\nAdmissionno. : " << admno;
		cout << "\nModify Student Name : ";
		cin >> name;
	}

	char *retadmno()
	{
		return admno;
	}
	char *retstbno()
	{
		return stbno;
	}
	// int rettoken()
	// {
	// 	return token;
	// }
	void addtoken()
	{
		token = 1;
	}
	void resettoken()
	{
		token = 0;
	}
	void getstbno(char t[])
	{
		strcpy(stbno, t);
	}
	void report()
	{
		cout << "\t" << admno << setw(20) << name << setw(10) << token << endl;
	}
}; // class ends here
//***************************************************************
// global declaration for stream object, object
//****************************************************************
fstream fp, fp1;
book bk;
student st;
//***************************************************************
// function to write in file
//****************************************************************
void write_book()
{
	char ch;
	fp.open("book.dat", ios::out | ios::app);
	do
	{
		system("cls");
		bk.create_book();
		fp.write((char *)&bk, sizeof(book));
		cout << "\n\nDo you want to add more record..(y/n?)";
		cin >> ch;
	} while (ch == 'y' || ch == 'Y');
	fp.close();
}
void write_student()
{
	char ch;
	fp.open("student.dat", ios::out | ios::app);
	do
	{
		st.create_student();
		fp.write((char *)&st, sizeof(student));
		cout << "\n\ndo you want to add more record..(y/n?)";
		cin >> ch;
	} while (ch == 'y' || ch == 'Y');
	fp.close();
}
void display_sps(char n[])
{
	cout << "\nSTUDENT DETAILS\n";
	int flag = 0;
	fp.open("student.dat", ios::in);
	while (fp.read((char *)&st, sizeof(student)))
	{
		if ((strcmpi(st.retadmno(), n) == 0))
		{
			st.show_student();
			flag = 1;
		}
	}
	fp.close();
	if (flag == 0)
		cout << "\n\nStudent does not exist";
	getch();
}
//***************************************************************
// function to modify record of file
//****************************************************************
void modify_book()
{
	char n[6];
	int found = 0;
	system("cls");
	cout << "\n\n\tMODIFY BOOK REOCORD. ";
	cout << "\n\n\tEnter The book no. of The book";
	cin >> n;
	fp.open("book.dat", ios::in | ios::out);
	while (fp.read((char *)&bk, sizeof(book)) && found == 0)
	{
		if (strcmpi(bk.retbno(), n) == 0)
		{
			bk.show_book();
			cout << "\nEnter The New Details of book" << endl;
			bk.modify_book();
			int pos = -1 * sizeof(bk);
			fp.seekp(pos, ios::cur);
			fp.write((char *)&bk, sizeof(book));
			cout << "\n\n\t Record Updated";
			found = 1;
		}
	}
	fp.close();
	if (found == 0)
		cout << "\n\n Record Not Found ";
	getch();
}
void modify_student()
{
	char n[6];
	int found = 0;
	system("cls");
	cout << "\n\n\tMODIFY STUDENT RECORD ";
	cout << "\n\n\tEnter The admission no. of The student";
	cin >> n;
	fp.open("student.dat", ios::in | ios::out);
	while (fp.read((char *)&st, sizeof(student)) && found == 0)
	{
		if (strcmpi(st.retadmno(), n) == 0)
		{
			st.show_student();
			cout << "\nEnter The New Details of student" << endl;
			st.modify_student();
			int pos = -1 * sizeof(st);
			fp.seekp(pos, ios::cur);
			fp.write((char *)&st, sizeof(student));
			cout << "\n\n\t Record Updated";
			found = 1;
		}
	}
	fp.close();
	if (found == 0)
		cout << "\n\n Record Not Found ";
	getch();
}
//***************************************************************
// function to delete record of file
//****************************************************************
void delete_student()
{
	char n[6];
	int flag = 0;
	system("cls");
	cout << "\n\n\n\tDELETE STUDENT";
	cout << "\n\nEnter The admission no. of the Student You Want To Delete : ";
	cin >> n;
	fp.open("student.dat", ios::in | ios::out);
	fstream fp2;
	fp2.open("Temp.dat", ios::out);
	fp.seekg(0, ios::beg);
	while (fp.read((char *)&st, sizeof(student)))
	{
		if (strcmpi(st.retadmno(), n) != 0)
			fp2.write((char *)&st, sizeof(student));
		else
			flag = 1;
	}
	fp2.close();
	fp.close();
	remove("student.dat");
	rename("Temp.dat", "student.dat");
	if (flag == 1)
		cout << "\n\n\tRecord Deleted ..";
	else
		cout << "\n\nRecord not found";
	getch();
}
void delete_book()
{
	char n[6];
	system("cls");
	cout << "\n\n\n\tDELETE BOOK ";
	cout << "\n\nEnter The Book no. of the Book You Want To Delete : ";
	cin >> n;
	fp.open("book.dat", ios::in | ios::out);
	fstream fp2;
	fp2.open("Temp.dat", ios::out);
	fp.seekg(0, ios::beg);
	while (fp.read((char *)&bk, sizeof(book)))
	{
		if (strcmpi(bk.retbno(), n) != 0) // change later
		{
			fp2.write((char *)&bk, sizeof(book));
		}
	}
	fp2.close();
	fp.close();
	remove("book.dat");
	rename("Temp.dat", "book.dat");
	cout << "\n\n\tRecord Deleted ..";
	getch();
}
//***************************************************************
// function to display Books list
//****************************************************************
void display_allb()
{
	system("cls");
	fp.open("book.dat", ios::in);
	if (!fp)
	{
		cout << "ERROR!!! FILE COULD NOT BE OPEN ";
		getch();
		exit(0);
	}

	for (int i = 0; i < 100; ++i)
		cout << endl;
	int flag = 11;
	while (fp.read((char *)&bk, sizeof(book)))
	{
		xy(29, flag);
		bk.report();
		++flag;
	}
	BOOklist();
	fp.close();
	getch();
}
//***************************************************************
// function to issue book
//****************************************************************
void book_issue()
{
	char sn[6], bn[6];
	int found = 0, flag = 0;
	system("cls");
	cout << "\n\nBOOK ISSUE ";
	cout << "\n\n\tEnter The student's admission no.";
	cin >> sn;
	fp.open("student.dat", ios::in | ios::out);
	fp1.open("book.dat", ios::in | ios::out);
	while (fp.read((char *)&st, sizeof(student)) && found == 0)
	{
		if (strcmpi(st.retadmno(), sn) == 0)
		{
			found = 1;
			if (st.rettoken() == 0)
			{
				cout << "\n\n\tEnter the book no. ";
				cin >> bn;
				while (fp1.read((char *)&bk, sizeof(book)) && flag == 0)
				{
					if (strcmpi(bk.retbno(), bn) == 0)
					{
						bk.show_book();
						flag = 1;
						st.addtoken();
						st.getstbno(bk.retbno());
						int pos = -1 * sizeof(st);
						fp.seekp(pos, ios::cur);
						fp.write((char *)&st, sizeof(student));
						cout << "\n\n\t Book issued successfully\n\n\tPlease Note: Write the current date in backside of your book and submit within  15 days\n\t fine Rs. 1 for each day after 15 days period.";
					}
				}
				if (flag == 0)
					cout << "Book number does not exist";
			}
			else
				cout << "You have not returned the last book ";
		}
	}
	if (found == 0)
		cout << "Student record not exist";
	getch();
	fp.close();
	fp1.close();
}

//***************************************************************
// function to deposit book
//****************************************************************

void book_deposit()
{
	char sn[6], bn[6];
	int found = 0, flag = 0, day, fine;
	system("cls");
	cout << "\n\nBOOK DEPOSIT ";
	cout << "\n\n\tEnter The student's admission no.";
	cin >> sn;
	fp.open("student.dat", ios::in | ios::out);
	fp1.open("book.dat", ios::in | ios::out);
	while (fp.read((char *)&st, sizeof(student)) && found == 0)
	{
		if (strcmpi(st.retadmno(), sn) == 0)
		{
			found = 1;
			if (st.rettoken() == 1)
			{
				while (fp1.read((char *)&bk, sizeof(book)) && flag == 0)
				{
					if (strcmpi(bk.retbno(), st.retstbno()) == 0)
					{
						bk.show_book();
						flag = 1;
						cout << "\n\nBook deposited in no. of days";
						cin >> day;
						if (day > 15)
						{
							fine = (day - 15) * 1;
							cout << "\n\nFine has to deposited Rs. " << fine;
						}
						st.resettoken();
						int pos = -1 * sizeof(st);
						fp.seekp(pos, ios::cur);
						fp.write((char *)&st, sizeof(student));
						cout << "\n\n\t Book deposited successfully";
					}
				}
				if (flag == 0)
					cout << "Book number does not exist";
			}
			else
				cout << "No book is issued..please check!!";
		}
	}
	if (found == 0)
		cout << "Student record not exist";
	getch();
	fp.close();
	fp1.close();
}
//***************************************************************
// INTRODUCTION FUNCTION
//****************************************************************
char o = (char)219;
void intro()
{
	system("cls");
	int i = 1;
	while (1)
	{
		if (i == 16)
			i = 1;
		setColor(i);
		++i;
		W(51, 5);
		E(57, 5);
		L(63, 5);
		C(69, 5);
		O(75, 5);
		M(81, 5);
		E(87, 5);
		T(65, 12);
		O(71, 12);
		L(51, 19);
		I(57, 19);
		B(63, 19);
		R(69, 19);
		A(75, 19);
		R(81, 19);
		Y(87, 19);
		M(41, 26);
		A(47, 26);
		N(53, 26);
		A(59, 26);
		G(65, 26);
		E(71, 26);
		M(77, 26);
		E(83, 26);
		N(89, 26);
		T(95, 26);
		S(53, 33);
		Y(59, 33);
		S(65, 33);
		T(71, 33);
		E(77, 33);
		M(83, 33);
		delay(200);
		if (kbhit())
		{
			setColor(7);
			break;
		}
	}
	getch();
}

//***************************************************************
// ADMINISTRATOR MENU FUNCTION
//***************************************************************

void admin_menu()

{

	system("cls");
	int ch2;

	ch2 = adMENU();

	switch (ch2)

	{

	case '1':
		system("cls");
		write_student();
		break;
	case '2':
		char num[6];
		system("cls");
		cout << "\n\n\tPlease Enter The Admission No. ";
		cin >> num;
		display_sps(num);
		break;
	case '3':
		modify_student();
		break;
	case '4':
		delete_student();
		break;
	case '5':
		system("cls");
		write_book();
		break;
	case '6':
		display_allb();
		break;
	case '7':
		modify_book();
		break;
	case '8':
		delete_book();
		break;
	case '9':
		return;
	default:
		cout << "\a";
	}
	admin_menu();
}

//***************************************************************
// THE MAIN FUNCTION OF PROGRAM                                //
//****************************************************************

int main()
{
	int option;
	intro();
	do
	{
		switch (mainmenu())
		{
		case 1:
			system("cls");
			book_issue();
			break;
		case 2:
			book_deposit();
			break;
		case 3:
			admin_menu();
			break;
		case 4:
			Quit();
		default:
			cout << "\a";
		}
	} while (1);
}

//***************************************************************
// END OF PROJECT
//***************************************************************
