#include <iostream>
#include <sstream>
#include <iostream>
#include <iomanip>

using namespace std;

struct var {
    double f1, f2, f3, f4, f5;
	var(double x1, double x2, double x3, double x4, double x5) {
		this->f1 = x1;
		this->f2 = x2;
		this->f3 = x3;
		this->f4 = x4;
		this->f5 = x5;
	}
	var() {	}
};

struct paretto {
	int count;
	var mas[10];
};

int main()
{
	var X[10];
	X[0] = var(3,5,5,4,0);
	X[1] = var(5,4,3,5,0);
	X[2] = var(5,4,4,3,0);
	X[3] = var(2,5,3,3,0);
	X[4] = var(4,2,4,5,0);
	X[5] = var(3,5,3,2,0);
	X[6] = var(4,5,3,5,0);
	X[7] = var(0,0,0,0,0);


	paretto P;
	P.count = 1;
	P.mas[0] = X[0];
	int verif = 0;
	bool iseq = false;


	for (int i = 1; i < 10; i++) {
		iseq = true;
		verif = 0;
		for (int j = 0; j < P.count; j++) {
			verif = 0;
			if (P.mas[j].f1 <= X[i].f1) {
				verif++;
			}
			if (P.mas[j].f2 <= X[i].f2) {
				verif++;
			}
			if (P.mas[j].f3 <= X[i].f3) {
				verif++;
			}
			if (P.mas[j].f4 <= X[i].f4) {
				verif++;
			}
			if (P.mas[j].f5 <= X[i].f5) {
				verif++;
			}

			if (verif == 5) {
				for (int k = j; k < P.count-1; k++) {
					P.mas[k] = P.mas[k + 1];
				}
				P.count--;
			}
		}
		
		if (P.count == 0) {
			P.count++;
			P.mas[P.count - 1] = X[i];
			continue;
		}

		

		for (int j = 0; j < P.count; j++) {
			verif = 0;
			if (P.mas[j].f1 < X[i].f1) {
				verif++;
			}
			if (P.mas[j].f2 < X[i].f2) {
				verif++;
			}
			if (P.mas[j].f3 < X[i].f3) {
				verif++;
			}
			if (P.mas[j].f4 < X[i].f4) {
				verif++;
			}
			if (P.mas[j].f5 < X[i].f5) {
				verif++;
			}

			if (verif <= 0) {
				iseq = false;
			}
		}	

		if (iseq) {
			P.mas[P.count] = X[i];
			P.count++;
		}

	}

	cout << "P(x):\n";
	for (int i = 0; i < P.count; i++) {
		cout << setw(7) << P.mas[i].f1 << ", " << setw(7) << P.mas[i].f2 << ", " << setw(7)
			<< P.mas[i].f3 << ", " << setw(7) << P.mas[i].f4 << ", " << setw(7) << P.mas[i].f5 << "\n";
	}
	cout << '\n';


	double w1 = 1, w2 = 2, w3 = 3, w4 = 2;

	double Q = w2 / (w1 + w2);
	double _Q = 1 - Q;
	if (Q < 0.5){
		for (int i = 0; i < P.count; i++) {
			P.mas[i].f1 = P.mas[i].f2 * _Q + P.mas[i].f2 * Q;

		}
	}
	else {
		for (int i = 0; i < P.count; i++) {
			P.mas[i].f2 = P.mas[i].f1 * Q + P.mas[i].f2 * _Q;

		}
	}

	Q = w4 / (w3 + w4);
	_Q = 1 - Q;

	if (Q < 0.5) {
		for (int i = 0; i < P.count; i++) {
			P.mas[i].f3 = P.mas[i].f3 * _Q + P.mas[i].f4 * Q;

		}
	}
	else {
		for (int i = 0; i < P.count; i++) {
			P.mas[i].f4 = P.mas[i].f3 * Q + P.mas[i].f4 * _Q;

		}
	}

	cout << "P'(x):\n";
	for (int i = 0; i < P.count; i++) {
		cout << setw(7) << P.mas[i].f1 << ", " << setw(7) << P.mas[i].f2 << ", " << setw(7)
			<< P.mas[i].f3 << ", " << setw(7) << P.mas[i].f4 << ", " << setw(7) << P.mas[i].f5 << "\n";
	}
	cout << '\n';

	paretto C;
	C.count = 1;
	C.mas[0] = P.mas[0];
	verif = 0;
	iseq = false;

	for (int i = 1; i < P.count; i++) {
		iseq = true;
		verif = 0;
		for (int j = 0; j < C.count; j++) {
			verif = 0;
			if (C.mas[j].f1 <= P.mas[i].f1) {
				verif++;
			}
			if (C.mas[j].f2 <= P.mas[i].f2) {
				verif++;
			}
			if (C.mas[j].f3 <= P.mas[i].f3) {
				verif++;
			}
			if (C.mas[j].f4 <= P.mas[i].f4) {
				verif++;
			}
			if (C.mas[j].f5 <= P.mas[i].f5) {
				verif++;
			}

			if (verif == 5) {
				for (int k = j; k < C.count - 1; k++) {
					C.mas[k] = C.mas[k + 1];
				}
				C.count--;
			}
		}

		if (C.count == 0) {
			C.count++;
			C.mas[C.count - 1] = P.mas[i];
			continue;
		}



		for (int j = 0; j < C.count; j++) {
			verif = 0;
			if (C.mas[j].f1 < P.mas[i].f1) {
				verif++;
			}
			if (C.mas[j].f2 < P.mas[i].f2) {
				verif++;
			}
			if (C.mas[j].f3 < P.mas[i].f3) {
				verif++;
			}
			if (C.mas[j].f4 < P.mas[i].f4) {
				verif++;
			}
			if (C.mas[j].f5 < P.mas[i].f5) {
				verif++;
			}

			if (verif <= 0) {
				iseq = false;
			}
		}

		if (iseq) {
			C.mas[C.count] = P.mas[i];
			C.count++;
		}

	}

	cout << "C(x):\n";
	for (int i = 0; i < C.count; i++) {
		cout << setw(7) << C.mas[i].f1 << ", " << setw(7) << C.mas[i].f2 << ", " << setw(7) 
			<< C.mas[i].f3 << ", " << setw(7) << C.mas[i].f4 << ", " << setw(7) << C.mas[i].f5 << "\n";
	}



	return 0;
}

