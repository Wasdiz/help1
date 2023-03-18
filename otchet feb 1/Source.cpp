#include <vector>
#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <cmath>

using namespace std;

int main(void) {

	srand(time(NULL));

	vector <double> V;

	for (int i = 0; i < 15;i++) {

		double stepOne =  -100 + rand() % 200;

		double stepTwo = stepOne / 1.0*0.1;

		V.push_back(stepTwo);

		cout << V[i] << " " ;
		
		

	}

	cout << endl;

	int check = 0;
	int a = 0;
	
	while (check == 0) {

		int numberVector = V.at(a);

		if (numberVector = V.at(a)) {
		
			cout << "пара чисел -> " << numberVector;

		}

		else {

			numberVector++;

		}

		if (numberVector == V.size()) {

			check = 1;

		}

	}


}