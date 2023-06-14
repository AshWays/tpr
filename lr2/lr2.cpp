#include <iostream>
#define N 7

using namespace std;

void calculateXp(int ** Xp);
void calculateXm(int** Xm);
void printXmp(int** Xmp,bool pm);
void calculateU(float* U,int ** Xp,int ** Xm);
bool concatinate(int* p, int* m);

                           /*x1 x2 x3 x4 x5 x6 x7 */
int X[N][N] = {     /*x1*/ { 0, 0, 1, 0, 0, 0, 0  },
                    /*x2*/ { 1, 0, 0, 0, 1, 0, 0  },
                    /*x3*/ { 0, 0, 0, 1, 0, 0, 0  },
                    /*x4*/ { 0, 0, 1, 0, 0, 1, 0  },
                    /*x5*/ { 1, 0, 1, 0, 0, 0, 1  },
                    /*x6*/ { 0, 0, 0, 0, 1, 0, 0  },
                    /*x7*/ { 0, 0, 1, 0, 1, 0, 0  } };

int** Xp = new int*[N-1];
int** Xm = new int* [N-1];
float* U = new float[N];

int main()
{
    for (int i = 0; i < N - 1; i++) {
        Xp[i] = NULL;
        Xm[i] = NULL;
    }
    for (int i = 0; i < N; i++) {
        U[i] = 0;
    }

    calculateXp(Xp);
    calculateXm(Xm);
    calculateU(U,Xp,Xm);

    printXmp(Xp,true);
    cout << "\n";
    printXmp(Xm,false);
    cout << "\n";
    for (int i = 0; i < N; i++) {
        cout << "U[" << i+1 << "] = " << U[i] << "\n";
    }
    cout << "\n";
    
}

void calculateXp(int** Xp) {
    bool exist = false;
    for (int i = 1; i < N; i++) {
        exist = false;
        for (int j = 0; j < i; j++) {
            if (X[j][i] == 1) {
                if (!exist) {
                    Xp[i - 1] = new int [N];
                    exist = true;
                    for (int k = 0; k < N; k++) {
                        Xp[i - 1][k] = 0;
                    }
                }
                Xp[i - 1][j] = 1;
            }
        }
    }
}

void calculateXm(int** Xm) {
    bool exist = false;
    for (int i = 1; i < N; i++) {
        exist = false;
        for (int j = 0; j < i; j++) {
            if (X[i][j] == 1) {
                if (!exist) {
                    Xm[i - 1] = new int[N];
                    exist = true;
                    for (int k = 0; k < N; k++) {
                        Xm[i - 1][k] = 0;
                    }
                }
                Xm[i - 1][j] = 1;
            }
        }
    }
}

void printXmp(int** Xmp,bool pm) {
    for (int i = 0; i < N - 1; i++) {
        if (pm) cout << "X+";
        else cout << "X-";
        cout << i + 1 << ": ";
        if (Xmp[i] != NULL) {
            for (int j = 0; j < N; j++) {
                if (Xmp[i][j] == 1) {
                    cout << "x" << j + 1 << ", ";
                }
            }
        }
        else cout << "Null";
        cout << "\n";
    }
}

void calculateU(float* U, int** Xp, int** Xm){
    int* conc; double max,min;
    for (int i = 0; i < N - 1; i++) {
        if ((Xp[i] == NULL)&&(Xm[i] != NULL)) {
            for (int j = 0; j < i+1; j++) {
                if (Xm[i][j] == 1) {
                    min = U[j];
                    break;
                }
            }
            for (int j = 0; j < i + 1; j++) {
                if ((Xm[i][j] == 1)&&(U[j]<min)) {
                    min = U[j];
                }
            }
            U[i + 1] = min + 1;
        }
        else if ((Xp[i] != NULL) && (Xm[i] == NULL)) {
            for (int j = 0; j < i + 1; j++) {
                if (Xp[i][j] == 1) {
                    max = U[j];
                    break;
                }
            }
            for (int j = 0; j < i + 1; j++) {
                if ((Xp[i][j] == 1) && (U[j] > max)) {
                    max = U[j];
                }
            }
            U[i + 1] = max - 1;
        }
        else {
            if (concatinate(Xp[i], Xm[i])) {
                for (int j = 0; j < i + 1; j++) {
                    if ((Xm[i][j] == 1)&& (Xp[i][j] == 1)) {
                        U[i+1] = U[j];
                        break;
                    }
                }
            }
            else {
                for (int j = 0; j < i + 1; j++) {
                    if (Xm[i][j] == 1) {
                        min = U[j];
                        break;
                    }
                }
                for (int j = 0; j < i + 1; j++) {
                    if ((Xm[i][j] == 1) && (U[j] < min)) {
                        min = U[j];
                    }
                }
                for (int j = 0; j < i + 1; j++) {
                    if (Xp[i][j] == 1) {
                        max = U[j];
                        break;
                    }
                }
                for (int j = 0; j < i + 1; j++) {
                    if ((Xp[i][j] == 1) && (U[j] > max)) {
                        max = U[j];
                    }
                }
                U[i + 1] = (min + max) / 2.0;
            }


            
        }
    }

}

bool concatinate(int* p, int* m) {
    for (int i = 0; i < N; i++) {
        if ((p[i] == 1) && (m[i] == 1))
            return true;
    }
    return false;
}