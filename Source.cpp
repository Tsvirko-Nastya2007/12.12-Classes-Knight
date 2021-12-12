#include<iostream>
#include<windows.h>
using namespace std;
class Knight {
	//dannie obekta(zakritie)
private:
	double m_hp;
	double m_damage;
	string m_name;
public:
	//setter, functsii-setteri (zamena prisvaivania)
	void setHp(double hp) {m_hp = hp;}
	void setDamage(double damage) {m_damage = damage;}
	void setName(string name) { m_name = name; }

	//getter
	double getHp() {return m_hp;}
	double getDamage() {return m_damage;}
	string getName() { return m_name; }

	//uvelichenie damaga
	void increaseDamage() {
		m_damage *= 1.1;
	}
	void print() {
		cout << "Knight name: " << m_name << endl;
		cout << "Knight hp: " << m_hp << endl;
		cout << "Knight damage: " << m_damage << endl;
		cout << endl;
	}
};

class Magician {
	//dannie obekta(zakritie)
private:
	double m_hp;
	double m_damage;
	string m_name;
public:
	//setter, functsii-setteri (zamena prisvaivania)
	void setHp(double hp) { m_hp = hp; }
	void setDamage(double damage) { m_damage = damage; }
	void setName(string name) { m_name = name; }

	//getter
	double getHp() { return m_hp; }
	double getDamage() { return m_damage; }
	string getName() { return m_name; }

	//lechenie
	void increaseHp(double addHp) {
		m_hp += addHp;
	}
	void print() {
		cout << "Magician name: " << m_name << endl;
		cout << "Magician hp: " << m_hp << endl;
		cout << "Magician damage: " << m_damage << endl;
		cout << endl;
	}
};

int main(){
	Knight k1;
	k1.setName("Arkadiy");
	k1.setHp(100);
	k1.setDamage(20);
	k1.print();

	Magician m1;
	m1.setName("Porfiriy");
	m1.setHp(50);
	m1.setDamage(20);
	m1.print();
	//osnovnoy igrovoy tsicl
	while (true) {
		cout << "Knight hit magician" << endl;
		m1.setHp(m1.getHp() - k1.getDamage());
		if (m1.getHp() <= 0) {
			cout << "Knight win!" << endl;
			break;
		}
		k1.increaseDamage();
		cout << "Magician hit knight" << endl;
		k1.setHp(k1.getHp() - m1.getDamage());
		k1.print();
		if(k1.getHp() <= 0) {
			cout << "Magician win!" << endl;
			break;
		}
		m1.increaseHp(50);
		Sleep(3000);
	}
	return 0;
}