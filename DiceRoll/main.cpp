#include "Die.h"
using namespace std;

int main() {
	Die d1, d2, d_total;

	int Number_rolls;
	cout << "How many times would you like to roll it?" << endl;
	cin >> Number_rolls;

	int max_counter = 0;
	int max_number_1 = 0;
	int max_number_2 = 0;
	int counter_1 = 0;
	int counter_2 = 0;
	int roll_1 = 0;
	int roll_2 = 0;
	int counter_add[7][7];
	for (int i = 0; i <= 6; i++) {
		for (int j = 0; j <= 6; j++) {
			counter_add[i][j] = 0;
		}
	}
	for (int i = 0; i <= Number_rolls; i++) {
		roll_1 = d1.Roll();
		roll_2 = d2.Roll();
		if ((counter_1 == roll_1 && counter_2 == roll_2) || (counter_1 == roll_2 && counter_2 == roll_1)) {
			counter_add[roll_1][roll_2]++;
			counter_add[roll_2][roll_1]++;
			if (counter_add[roll_1][roll_2] >= max_counter) {
				max_counter = counter_add[roll_1][roll_2];
				max_number_1 = roll_1;
				max_number_2 = roll_2;
			}
		} else {
			counter_add[roll_1][roll_2] = 0;
		}
		counter_1 = roll_1;
		counter_2 = roll_2;
	}
	for (int i = 1; i <= 6; i++) {
		int totalRolls = d1.getRoll(i) + d2.getRoll(i);
	}
	cout << "The pair with the most (" << max_counter + 1 << ") consecutive rolls: " << max_number_1 << " and " << max_number_2 << endl;

	cout << "The first die:" << endl;

	for (int i = 1; i <= 6; i++) {
		cout << "Number " << i << " was rolled " << d1.getRoll(i) << " times" << endl;
	}

	cout << "The second die: " << endl;

	for (int i = 1; i <= 6; i++) {
		cout << "Number " << i << " was rolled " << d2.getRoll(i) << " times" << endl;
	}

	for (int i = 1; i <= 6; i++) {
		d_total.setRoll(d1.getRoll(i), d2.getRoll(i), i);
	}

	cout << "The number with the most throws is " << d_total.Compare_Max() << endl;
	cout << "The number with the least throws is " << d_total.Compare_Min() << endl;

	for (int i = 1; i <= 6; i++) {	
		cout << "Frequency of " << i << " :" << fixed << setprecision(2) << d_total.Frequency(Number_rolls, d_total.getRoll(i)) << "%" << endl;
	}

	system("Pause");
	return 0;
}