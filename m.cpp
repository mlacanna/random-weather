#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

//matt lacanna, 4/2/2017, Lab 10-weather
class weather {
private:
	int rain;
	int fair;
	int snow;
	int days[1000];
	int chance[1000];
public:
	weather(int = 0, int = 1, int = 2);
	int x;
	int today;
	int tomorrow;
	void train();
	void tfair();
	void tsnow();
	void store();
	void printdays();
};


weather::weather(int r, int f, int s) {
	srand(time(0));
	x = rand() % 100 + 1;
	rain = r;
	fair = f;
	snow = s;


}
void weather::train() {
	if (today < 64) {     //if today is rain
		tomorrow = rain;
	}
	else if (today > 63 || today < 88) {
		tomorrow = fair;
	}
	else tomorrow = snow;
}

void weather::tfair() {
	if (today < 26) {    //if today is fair
		tomorrow = rain;
	}
	else if (today > 25 || today < 76) {
		tomorrow = fair;
	}
	else tomorrow = snow;
}

void weather::tsnow() {
	if (today < 31) {     //if today is snowy
		tomorrow = rain;
	}
	else if (today > 30 || today < 51) {
		tomorrow = fair;
	}
	else tomorrow = snow;

}
void weather::store() {
	for (int i = 1; i < 1001; i++) {
		chance[i] = rand() % 100 + 1;
	}

}

void weather::printdays() {
	for (int i = 1; i < 1001; i++) {
		cout << "Day " << i << ": " << chance[i] << " " << endl;
	}


}


int main() {

	weather a;
	a.store();

	a.printdays();


}