#include <iostream>
#include <Windows.h>
using namespace std;
class Student {
private:
	char* m_fio;
	int m_day_birth;
	int m_month_birth;
	int m_year_birth;
	char* m_contact_phone_number;
	char* m_city;
	char* m_country;
	char* m_name_of_educ_inst;
	char* m_educ_inst_city;
	char* m_educ_inst_country;
	char* m_group_number;
public:
	//Конструктор с параметрами
	Student(const char* f, int d, int m, int y, const char* cpn, const char* ct, const char* cntr,
		const char* noei, const char* eict, const char* eicntr, const char* gn) :
		m_fio(_strdup(f)), m_day_birth(d), m_month_birth(m), m_year_birth(y), m_contact_phone_number(_strdup(cpn)), m_city(_strdup(ct)),
		m_country(_strdup(cntr)), m_name_of_educ_inst(_strdup(noei)), m_educ_inst_city(_strdup(eict)),
		m_educ_inst_country(_strdup(eicntr)), m_group_number(_strdup(gn)) {
		//cout << "Конструктор с параметрами для " << this << endl;
	}
	//Конструктор без параметров
	Student() {
		m_fio = 0;
		m_day_birth = 0;
		m_month_birth = 0;
		m_year_birth = 0;
		m_contact_phone_number = 0;
		m_city = 0;
		m_country = 0;
		m_name_of_educ_inst = 0;
		m_educ_inst_city = 0;
		m_educ_inst_country = 0;
		m_group_number = 0;
	}
	// Деструктор
	~Student() {
		delete[]m_fio; //cout << "Деструктор для " << this << endl;
		delete[]m_contact_phone_number; //cout << "Деструктор для " << this << endl;
		delete[]m_city; //cout << "Деструктор для " << this << endl;
		delete[]m_country; //cout << "Деструктор для " << this << endl;
		delete[]m_name_of_educ_inst; //cout << "Деструктор для " << this << endl;
		delete[]m_educ_inst_city; //cout << "Деструктор для " << this << endl;
		delete[]m_educ_inst_country; //cout << "Деструктор для " << this << endl;
		delete[]m_group_number; //cout << "Деструктор для " << this << endl;

	}
	// Метод вывода на экран
	void Print() {
		cout << "Фамилия, имя, отчество: " << m_fio << endl;
		cout << "Дата рождения: " << m_day_birth << "." << m_month_birth << "." << m_year_birth << endl;
		cout << "Контактный телефон: " << m_contact_phone_number << endl;
		cout << "Город: " << m_city << endl;
		cout << "Страна: " << m_country << endl;
		cout << "Название учебного заведения: " << m_name_of_educ_inst << endl;
		cout << "Учебное заведение находится: " << m_educ_inst_city << ", " << m_educ_inst_country << endl;
		cout << "Номер группы: " << m_group_number << endl;
	}
	// Геттеры — это функции, которые возвращают значения закрытых переменных-членов класса.
	inline const char* GetFio() { return m_fio; }
	inline int GetDay_birth() { return m_day_birth; }
	inline int GetMonth_birth() { return m_month_birth; }
	inline int GetYear_birth() { return m_year_birth; }
	inline const char* GetContact_phone_number() { return m_contact_phone_number; }
	inline const char* GetСity() { return m_city; }
	inline const char* GetСountry() { return m_country; }
	inline const char* GetName_of_educational_institution() { return m_name_of_educ_inst; }
	inline const char* GetEducational_institution_city() { return m_educ_inst_city; }
	inline const char* GetEducational_institution_country() { return m_educ_inst_country; }
	inline const char* GetGroup_number() { return m_group_number; }
	// Сеттеры — это функции, которые позволяют присваивать значения закрытым переменным-членам класса.
	inline void SetFio(const char* f) { delete[]m_fio; m_fio = _strdup(f); }
	inline void SetDay_birth(int d) { m_day_birth = d; };
	inline void SetMonth_birth(int m) { m_month_birth = m; };
	inline void SetYear_birth(int y) { m_year_birth = y; };
	inline void SetСontact_phone_number(const char* cpn) { m_contact_phone_number = _strdup(cpn); };
	inline void SetCity(const char* ct) { delete[]m_city; m_city = _strdup(ct); }
	inline void SetCountry(const char* cntr) { delete[]m_country; m_country = _strdup(cntr); }
	inline void SetName_of_educational_institution(const char* noei) { delete[]m_name_of_educ_inst; m_name_of_educ_inst = _strdup(noei); }
	inline void SetEducational_institution_city(const char* eict) { delete[]m_educ_inst_city; m_educ_inst_city = _strdup(eict); }
	inline void SetEducational_institution_country(const char* eicntr) { delete[]m_educ_inst_country; m_educ_inst_country = _strdup(eicntr); }
	inline void SetGroup_number(const char* gn) { delete[]m_group_number; m_group_number = _strdup(gn); }
};
int main() {
	setlocale(LC_ALL, ""); //працює тільки з потоком виведення
	SetConsoleCP(1251); //встановлює потрібну кодову таблицю, на потік введення
	SetConsoleOutputCP(1251); //встановлює потрібну кодову таблицю, на потік виводу.
	Student a("Петро Петрович Петров", 10, 12, 1985, "+380999999999", "Варшава", "Польща", "Польський національний університет", "Варшава", "Польща", "гр.2");
	a.Print();
}
