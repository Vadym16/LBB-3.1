#include <iostream>
#include <string>

using namespace std;


class Time {
public:
	Time() : hour(0), min(0), second(0) {}

	Time(int h, int m, int s) {
		seth(h);
		setm(m);
		sets(s);
	}

	void seth(int h) {
		if (h > 0 and h < 24) {
			hour = h;
		}
		cout << "Неправильно вказано годину";
	}

	void setm(int m) {
		if (m > 0 and m < 60) {
			min = m;
		}
		cout << "Неправильно вказано минути";
	}

	void sets(int s) {
		if (s > 0 and s < 60) {
			second = s;
		}
		cout << "Неправильно вказано сикунди";
	}

	int geth() const {
		return hour;
	}

	int getm() const {
		return min;
	}

	int gets() const {
		return second;
	}

	void view24() {
		cout << geth() << " годин " << getm() << " минут " << gets() << " сикунд " << endl;
	}

	void view12() {
		if (geth() >= 12) {
			cout << geth() - 12 << "p.m. " << getm() << " минут " << gets() << " сикунд "<<endl;
		}
		else {
			cout << geth() << " a.m. " << getm() << " минут " << gets() << " сикунд "<<endl;
		}
	}

private:

	int hour;
	int min;
	int second;

};

int main()
{

	setlocale(LC_ALL, "ukr");

	Time time(14, 5, 8);

	time.view12();
	time.view24();

}

