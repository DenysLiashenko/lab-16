#include <iostream>
#include <string>
using namespace std;

class person {
private:
	string name;
	string surname;
	string patronymic;
	string address;
	bool sex;
	bool education;
	int age;

public:
	string get_name()
	{
		return name;
	}
	string get_surname()
	{
		return surname;
	}
	string get_patronymic()
	{
		return patronymic;
	}
	string get_address()
	{
		return address;
	}
	bool get_sex()
	{
		return sex;
	}
	bool get_education()
	{
		return education;
	}
	int get_age()
	{
		return age;
	}

	void set_name(string na)
	{
		name = na;
	}
	void set_surname(string sur)
	{
		surname = sur;
	}
	void set_patronymic(string pat)
	{
		patronymic = pat;
	}
	void set_address(string add)
	{
		address = add;
	}
	void set_sex(bool s)
	{
		sex = s;
	}
	void set_education(bool ed)
	{
		education = ed;
	}
	void set_age(int a)
	{
		age = a;
	}
};

int main()
{
	int n, age, CheckAge;
	string name, surname, patronymic, address;
	bool sex, education;

	cout << "Enter a number of people:";
	cin >> n;
	cout << endl;
	person* p = new person[n];

	for (int i=0; i < n; i++)
	{
		cout << "For person #" << i + 1 << endl << "Enter the name of person: " ;
		cin >> name;
		p[i].set_name(name);

		cout << "Enter the surname of person: ";
		cin >> surname;
		p[i].set_surname(surname);

		cout << "Enter the patronymic of person: ";
		cin >> patronymic;
		p[i].set_patronymic(patronymic);

		cout << "Enter the address of person: ";
		cin >> address;
		p[i].set_address(address);

		cout << "Enter the sex of person ( male = 0, female = 1): ";
		cin >> sex;
		p[i].set_sex(sex);

		cout << "Enter the education of person ( doesn't have high education = 0, has high education = 1): ";
		cin >> education;
		p[i].set_education(education);

		cout << "Enter the age of person: ";
		cin >> age;
		p[i].set_age(age);
		cout << endl;
	}

	cout << "Enter the age, that you want to check: ";
	cin >> CheckAge;
	cout << endl << "The list of people, that are older than " << CheckAge << " years:" << endl;
	for (int i = 0; i < n; i++)
	{
		if (p[i].get_age() > CheckAge)
		{
			cout << p[i].get_name() << endl;
		}
	}

	cout << endl << "The list of people, that have high education:" << endl;
	for (int i = 0; i < n; i++)
	{
		if (p[i].get_education() == 1)
		{
			cout << p[i].get_name() << endl;
		}
	}

	cout << endl << "The list of people, that are men:" << endl;
	for (int i = 0; i < n; i++)
	{
		if (p[i].get_sex() == 0)
		{
			cout << p[i].get_name() << endl;
		}
	}

}