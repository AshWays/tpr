#include <iostream>
#define N 7

using namespace std;

bool sum(int pos);
void rework(int pos);
bool in(int pos);
void reworking(int yus);
bool isPreem(int pos);

struct maxX {
	int figure, yarus;
};
						  /*x1 x2 x3 x4 x5 x6 x7*/
int masX[N][N] = { /*x1*/ { 0, 1, 1, 0, 0, 0, 0 },
				   /*x2*/ { 0, 0, 1, 0, 0, 0, 0 },
				   /*x3*/ { 0, 0, 0, 0, 0, 1, 1 },
				   /*x4*/ { 0, 1, 0, 0, 0, 1, 0 },
			       /*x5*/ { 0, 1, 0, 1, 0, 1, 0 },
			       /*x6*/ { 0, 0, 0, 0, 0, 0, 1 },
				   /*x7*/ { 0, 0, 0, 0, 0, 0, 0 } };


						  /*x1 x2 x3 x4 x5*/
//int masX[N][N] = { /*x1*/ { 0, 1, 1, 0, 0 },
	//			   /*x2*/ { 0, 0, 1, 1, 0 },
		//		   /*x3*/ { 0, 0, 0, 1, 1 },
			//	   /*x4*/ { 0, 0, 0, 0, 0 },
				//   /*x5*/ { 0, 0, 0, 0, 0 } };

maxX masMax[N] = { 0 };

int main()
{                           
	int yars = 1,clock = 0;
	maxX x;

	while (clock < N) {
		for (int i = 0; i < N; i++)
			if (!in(i + 1)) {
				if (sum(i) and isPreem(i)) {
					x.figure = i + 1;
					x.yarus = yars;
					masMax[clock] = x;
					clock++;
					cout << "String x" << i + 1 << " addet to maxX, yarus: " << yars << "\n";
				}
				else if(sum(i)){
					x.figure = i + 1;
					x.yarus = yars+1;
					masMax[clock] = x;
					clock++;
					cout << "String x" << i + 1 << " addet to maxX, yarus: " << "best" << "\n";
				}
			}
		reworking(yars);
		yars++;
	}


	return 0;
}

bool sum(int pos) {
	int numb = 0;
	for (int i = 0; i < N; i++) {
		numb += masX[pos][i];
	}
	if (numb) return false;
	else return true;
}

bool in(int pos) {
	for (int i = 0; i < N; i++) {
		if (pos == masMax[i].figure) return true;
	}
	return false;
}

void rework(int pos) {
	for (int i = 0; i < N; i++) {
		masX[i][pos] = 0;
	}
}

void reworking(int yus) {
	for (int i = 0; i < N; i++) {
		if (yus==masMax[i].yarus)
			rework((masMax[i]).figure-1);
	}
}

bool isPreem(int pos) {
	int numb = 0;
	for (int i = 0; i < N; i++) {
		numb += masX[i][pos];
	}
	if (numb) return true;
	else return false;
}