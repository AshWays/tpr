#include <iostream>

using namespace std;



bool if_in(int i, int X[7],int count);
bool if_inn(int i, int X[7], int count);


int main()
{
    int X[7] = { 0 };
    int count = 0;

    //r1

    int R1[7][7] = {{ 0,-1, 1,-1, 1, 1, 1},
                    { 1, 0, 1, 0, 1, 1, 1},
                    {-1,-1, 0,-1, 1, 1, 1},
                    { 1, 0, 1, 0, 1, 1, 1},
                    {-1,-1,-1,-1, 0, 0,-1},
                    {-1,-1,-1,-1, 0, 0,-1},
                    {-1,-1,-1,-1, 1, 1, 0}, };

    //r2

    int R2[7][7] = {{ 0, 1, 1, 1, 1, 1, 1},
                    {-1, 0, 1, 0,-1, 1,-1},
                    {-1,-1, 0,-1,-1, 0,-1},
                    {-1, 1, 1, 0, 0, 1,-1},
                    {-1, 1, 1, 0, 0, 1,-1},
                    {-1,-1, 0,-1,-1, 0,-1},
                    {-1, 1, 1, 1, 1, 1, 0}, };

    //r3

    int R3[7][7] = { { 0,-1,-1,-1,-1,-1,-1},
                    { 1, 0,-1,-1,-1,-1, 0},
                    { 1, 1, 0, 1, 1, 1, 1},
                    { 1, 1,-1, 0, 1, 0, 1},
                    { 1, 1,-1,-1, 0,-1, 1},
                    { 1, 1,-1, 0, 1, 0, 1},
                    { 1, 0,-1,-1,-1,-1, 0}, };

    //r4

    int R4[7][7] = { { 0,-1,-1,-1, 1,-1, 1},
                    {-1, 0,-1,-1, 1, 0, 1},
                    { 1, 1, 0, 0, 1, 1, 1},
                    { 1, 1, 0, 0, 1, 1, 1},
                    {-1,-1,-1,-1, 0,-1, 0},
                    {-1, 0,-1,-1, 1, 0, 1},
                    {-1,-1,-1,-1, 0,-1, 0}, };

    //r5

    int R5[7][7] = { { 0, 0, 1,-1, 1,-1, 1},
                    { 0, 0, 1,-1, 1,-1, 1},
                    {-1,-1, 0,-1,-1,-1,-1},
                    { 1, 1, 1, 0, 1, 0, 1},
                    {-1,-1, 1,-1, 0,-1,-1},
                    { 1, 1, 1, 0, 1, 0, 1},
                    {-1,-1, 1,-1, 1,-1, 0}, };

    //r6

    int R6[7][7] = { { 0,-1,-1,-1, 0,-1,-1},
                    { 1, 0,-1,-1, 1,-1,-1},
                    { 1, 1, 0, 1, 1, 1,-1},
                    { 1, 1,-1, 0, 1, 1,-1},
                    { 0,-1,-1,-1, 0,-1,-1},
                    { 1, 1,-1,-1, 1, 0,-1},
                    { 1, 1, 1, 1, 1, 1, 0}, };

    //r7

    int R7[7][7] = { { 0,-1,-1,-1, 0,-1,-1},
                    { 1, 0,-1,-1, 1,-1,-1},
                    { 1, 1, 0, 1, 1, 1, 0},
                    { 1, 1,-1, 0, 1, 1,-1},
                    { 0,-1,-1,-1, 0,-1,-1},
                    { 1, 1,-1,-1, 1, 0,-1},
                    { 1, 1, 0, 1, 1, 1, 0}, };

    int E[7][7] = { { 0, 1, 1, 1, 1, 1, 1},
                    { 1, 0, 1, 1, 1, 1, 1},
                    { 1, 1, 0, 1, 1, 1, 1},
                    { 1, 1, 1, 0, 1, 1, 1},
                    { 0, 1, 1, 1, 0, 1, 1},
                    { 1, 1, 1, 1, 1, 0, 1},
                    { 1, 1, 1, 1, 1, 1, 0}, };

    //=============================
    //1 - iterete
    //=============================

    int P[7][7] = { 0 };
    int P_[7][7] = { 0 };


    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 7; j++) {

            if (i != j) {
                if (R1[i][j] == 1) {
                    P[i][j] = R1[i][j] - R2[i][j] + R1[i][j] - R3[i][j] + R1[i][j] - R4[i][j] + R1[i][j] - R5[i][j] + R1[i][j] - R6[i][j] + R1[i][j] - R7[i][j];
                }
                else if (R2[i][j] == 1) {
                    P[i][j] = R2[i][j] - R1[i][j] + R2[i][j] - R3[i][j] + R2[i][j] - R4[i][j] + R2[i][j] - R5[i][j] + R2[i][j] - R6[i][j] + R2[i][j] - R7[i][j];
                }
                else if (R3[i][j] == 1) {
                    P[i][j] = R3[i][j] - R1[i][j] + R3[i][j] - R2[i][j] + R3[i][j] - R4[i][j] + R3[i][j] - R5[i][j] + R3[i][j] - R6[i][j] + R3[i][j] - R7[i][j];
                }
                else if (R4[i][j] == 1) {
                    P[i][j] = R4[i][j] - R1[i][j] + R4[i][j] - R3[i][j] + R4[i][j] - R2[i][j] + R4[i][j] - R5[i][j] + R4[i][j] - R6[i][j] + R4[i][j] - R7[i][j];
                }
                else if (R5[i][j] == 1) {
                    P[i][j] = R5[i][j] - R2[i][j] + R5[i][j] - R3[i][j] + R5[i][j] - R4[i][j] + R5[i][j] - R1[i][j] + R5[i][j] - R6[i][j] + R5[i][j] - R7[i][j];
                }
                else if (R6[i][j] == 1) {
                    P[i][j] = R6[i][j] - R2[i][j] + R6[i][j] - R3[i][j] + R6[i][j] - R4[i][j] + R6[i][j] - R5[i][j] + R6[i][j] - R1[i][j] + R6[i][j] - R7[i][j];
                }
                else if (R7[i][j] == 1) {
                    P[i][j] = R7[i][j] - R2[i][j] + R7[i][j] - R3[i][j] + R7[i][j] - R4[i][j] + R7[i][j] - R5[i][j] + R7[i][j] - R6[i][j] + R7[i][j] - R1[i][j];
                }

            }

        }
    }

    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 7; j++) {
            P_[i][j] = P[i][1] * E[1][j] + P[i][2] * E[2][j] + P[i][3] * E[3][j] + P[i][4] * E[4][j] + P[i][5] * E[5][j] + P[i][6] * E[6][j] + P[i][0] * E[0][j];
        }
    }

    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 7; j++) {
            P[i][j] = P_[i][1] * E[1][j] + P_[i][2] * E[2][j] + P_[i][3] * E[3][j] + P_[i][4] * E[4][j] + P_[i][5] * E[5][j] + P_[i][6] * E[6][j] + P_[i][0] * E[0][j];
        }
    }

    int imin, jmin; imin = jmin = 0;

    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 7; j++) {
            if ((P[i][j] < P[imin][jmin]) && (i != j)) {
                imin = i; jmin = j;
            }
        }
    }

    cout << '\n';
    cout << "    ";
    for (int i = 0; i < 7; i++) {
        if (!if_inn(i, X, count)) {
            cout << 'x' << i + 1 << "  ";
        }
    }
    cout << '\n';
    for (int i = 0; i < 7; i++) {
        if (!if_in(i, X, count)) {
            cout << 'x' << i + 1 << ": ";
            for (int j = 0; j < 7; j++) {
                if (!if_inn(j, X, count)) {
                    cout << P[i][j] << " ";
                }
            }
            cout << '\n';
        }
    }
    cout << '\n';

    X[count] = imin;
    X[6 - count] = jmin;
    count += 1;

    

    //=============================
    //2 - iterete
    //=============================

    for (int i = 0; i < 7; i++) {
        R1[i][jmin] = 0; R1[imin][i] = 0;
        R2[i][jmin] = 0; R2[imin][i] = 0;
        R3[i][jmin] = 0; R3[imin][i] = 0;
        R4[i][jmin] = 0; R4[imin][i] = 0;
        R5[i][jmin] = 0; R5[imin][i] = 0;
        R6[i][jmin] = 0; R6[imin][i] = 0;
        R7[i][jmin] = 0; R7[imin][i] = 0;
    }

    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 7; j++) {
            P[i][j] = 0;
            P_[i][j] = 0;
        }
    }



    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 7; j++) {

            if (i != j) {
                if (R1[i][j] == 1) {
                    P[i][j] = R1[i][j] - R2[i][j] + R1[i][j] - R3[i][j] + R1[i][j] - R4[i][j] + R1[i][j] - R5[i][j] + R1[i][j] - R6[i][j] + R1[i][j] - R7[i][j];
                }
                else if (R2[i][j] == 1) {
                    P[i][j] = R2[i][j] - R1[i][j] + R2[i][j] - R3[i][j] + R2[i][j] - R4[i][j] + R2[i][j] - R5[i][j] + R2[i][j] - R6[i][j] + R2[i][j] - R7[i][j];
                }
                else if (R3[i][j] == 1) {
                    P[i][j] = R3[i][j] - R1[i][j] + R3[i][j] - R2[i][j] + R3[i][j] - R4[i][j] + R3[i][j] - R5[i][j] + R3[i][j] - R6[i][j] + R3[i][j] - R7[i][j];
                }
                else if (R4[i][j] == 1) {
                    P[i][j] = R4[i][j] - R1[i][j] + R4[i][j] - R3[i][j] + R4[i][j] - R2[i][j] + R4[i][j] - R5[i][j] + R4[i][j] - R6[i][j] + R4[i][j] - R7[i][j];
                }
                else if (R5[i][j] == 1) {
                    P[i][j] = R5[i][j] - R2[i][j] + R5[i][j] - R3[i][j] + R5[i][j] - R4[i][j] + R5[i][j] - R1[i][j] + R5[i][j] - R6[i][j] + R5[i][j] - R7[i][j];
                }
                else if (R6[i][j] == 1) {
                    P[i][j] = R6[i][j] - R2[i][j] + R6[i][j] - R3[i][j] + R6[i][j] - R4[i][j] + R6[i][j] - R5[i][j] + R6[i][j] - R1[i][j] + R6[i][j] - R7[i][j];
                }
                else if (R7[i][j] == 1) {
                    P[i][j] = R7[i][j] - R2[i][j] + R7[i][j] - R3[i][j] + R7[i][j] - R4[i][j] + R7[i][j] - R5[i][j] + R7[i][j] - R6[i][j] + R7[i][j] - R1[i][j];
                }

            }

        }
    }

    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 7; j++) {
            if (!if_in(i, X, count))
                if (if_inn(j, X, count)) {
                    P_[i][j] = 0;
                }
                else {
                    P_[i][j] = P[i][1] * E[1][j] + P[i][2] * E[2][j] + P[i][3] * E[3][j] + P[i][4] * E[4][j] + P[i][5] * E[5][j] + P[i][6] * E[6][j] + P[i][0] * E[0][j];
                }
        }
    }

    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 7; j++) {
            if (!if_in(i, X, count))
                if (if_inn(j, X, count)) {
                    P[i][j] = 0;
                }
                else {
                    P[i][j] = P_[i][1] * E[1][j] + P_[i][2] * E[2][j] + P_[i][3] * E[3][j] + P_[i][4] * E[4][j] + P_[i][5] * E[5][j] + P_[i][6] * E[6][j] + P_[i][0] * E[0][j];
                }
        }
    }

    imin, jmin; imin = jmin = 0;

    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 7; j++) {
            if ((P[i][j] != 0)) {
                imin = i; jmin = j;
                break;
            }
        }
    }

    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 7; j++) {
            if ((P[i][j] < P[imin][jmin]) && (P[i][j] != 0) && (!if_in(i, X, count)) && (!if_inn(i, X, count)) && (!if_in(j, X, count)) && (!if_in(j, X, count)) && (i != j)) {
                imin = i; jmin = j;
            }
        }
    }

    cout << '\n';
    cout << "    ";
    for (int i = 0; i < 7; i++) {
        if (!if_inn(i, X, count)) {
            cout << 'x' << i + 1 << "  ";
        }
    }
    cout << '\n';
    for (int i = 0; i < 7; i++) {
        if (!if_in(i, X, count)) {
            cout << 'x' << i + 1 << ": ";
            for (int j = 0; j < 7; j++) {
                if (!if_inn(j, X, count)) {
                    cout << P[i][j] << " ";
                }
            }
            cout << '\n';
        }
    }
    cout << '\n';

    X[count] = imin;
    X[6 - count] = jmin;
    count += 1;

    

    //=============================
    //3 - iterete
    //=============================

    for (int i = 0; i < 7; i++) {
        R1[i][jmin] = 0; R1[imin][i] = 0;
        R2[i][jmin] = 0; R2[imin][i] = 0;
        R3[i][jmin] = 0; R3[imin][i] = 0;
        R4[i][jmin] = 0; R4[imin][i] = 0;
        R5[i][jmin] = 0; R5[imin][i] = 0;
        R6[i][jmin] = 0; R6[imin][i] = 0;
        R7[i][jmin] = 0; R7[imin][i] = 0;
    }

    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 7; j++) {
            P[i][j] = 0;
            P_[i][j] = 0;
        }
    }

    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 7; j++) {
            P[i][j] = 0;
            P_[i][j] = 0;
        }
    }



    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 7; j++) {

            if (i != j) {
                if (R1[i][j] == 1) {
                    P[i][j] = R1[i][j] - R2[i][j] + R1[i][j] - R3[i][j] + R1[i][j] - R4[i][j] + R1[i][j] - R5[i][j] + R1[i][j] - R6[i][j] + R1[i][j] - R7[i][j];
                }
                else if (R2[i][j] == 1) {
                    P[i][j] = R2[i][j] - R1[i][j] + R2[i][j] - R3[i][j] + R2[i][j] - R4[i][j] + R2[i][j] - R5[i][j] + R2[i][j] - R6[i][j] + R2[i][j] - R7[i][j];
                }
                else if (R3[i][j] == 1) {
                    P[i][j] = R3[i][j] - R1[i][j] + R3[i][j] - R2[i][j] + R3[i][j] - R4[i][j] + R3[i][j] - R5[i][j] + R3[i][j] - R6[i][j] + R3[i][j] - R7[i][j];
                }
                else if (R4[i][j] == 1) {
                    P[i][j] = R4[i][j] - R1[i][j] + R4[i][j] - R3[i][j] + R4[i][j] - R2[i][j] + R4[i][j] - R5[i][j] + R4[i][j] - R6[i][j] + R4[i][j] - R7[i][j];
                }
                else if (R5[i][j] == 1) {
                    P[i][j] = R5[i][j] - R2[i][j] + R5[i][j] - R3[i][j] + R5[i][j] - R4[i][j] + R5[i][j] - R1[i][j] + R5[i][j] - R6[i][j] + R5[i][j] - R7[i][j];
                }
                else if (R6[i][j] == 1) {
                    P[i][j] = R6[i][j] - R2[i][j] + R6[i][j] - R3[i][j] + R6[i][j] - R4[i][j] + R6[i][j] - R5[i][j] + R6[i][j] - R1[i][j] + R6[i][j] - R7[i][j];
                }
                else if (R7[i][j] == 1) {
                    P[i][j] = R7[i][j] - R2[i][j] + R7[i][j] - R3[i][j] + R7[i][j] - R4[i][j] + R7[i][j] - R5[i][j] + R7[i][j] - R6[i][j] + R7[i][j] - R1[i][j];
                }

            }

        }
    }

    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 7; j++) {
            if (!if_in(i, X, count))
                if (if_inn(j, X, count)) {
                    P_[i][j] = 0;
                }
                else {
                    P_[i][j] = P[i][1] * E[1][j] + P[i][2] * E[2][j] + P[i][3] * E[3][j] + P[i][4] * E[4][j] + P[i][5] * E[5][j] + P[i][6] * E[6][j] + P[i][0] * E[0][j];
                }
        }
    }

    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 7; j++) {
            if (!if_in(i, X, count))
                if (if_inn(j, X, count)) {
                    P[i][j] = 0;
                }
                else {
                    P[i][j] = P_[i][1] * E[1][j] + P_[i][2] * E[2][j] + P_[i][3] * E[3][j] + P_[i][4] * E[4][j] + P_[i][5] * E[5][j] + P_[i][6] * E[6][j] + P_[i][0] * E[0][j];
                }
        }
    }

    imin, jmin; imin = jmin = 0;

    for (int i = 0; i < 7; i++){
        for (int j = 0; j < 7; j++) {
            if ((P[i][j] != 0) && (!if_in(i, X, count)) && (!if_inn(i, X, count)) && (!if_in(j, X, count)) && (!if_in(j, X, count)) && (i != j)) {
            imin = j; jmin = i;
            break;
            }
        }
    }

    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 7; j++) {
            if ((P[i][j] < P[imin][jmin]) && (P[i][j] != 0) && (!if_in(i, X, count)) && (!if_inn(i, X, count)) && (!if_in(j, X, count)) && (!if_in(j, X, count)) && (i != j)) {
                imin = i; jmin = j;
            }
        }
    }

    cout << '\n';
    cout << "    ";
    for (int i = 0; i < 7; i++) {
        if (!if_inn(i, X, count)) {
            cout << 'x' << i + 1 << "  ";
        }
    }
    cout << '\n';
    for (int i = 0; i < 7; i++) {
        if (!if_in(i, X, count)) {
        cout << 'x' << i + 1 << ": ";
        for (int j = 0; j < 7; j++) {
                if (!if_inn(j, X, count)) {
                    cout << P[i][j] << " ";
                }
            }
        cout << '\n';
        }
    }
    cout << '\n';


    X[count] = imin;
    X[6 - count] = jmin;
    count += 1;


    

    
    //=============================
    //4 - iterete
    //=============================

    for (int i = 0; i < 7; i++) {
        if ((!if_in(i, X, count) && (!if_inn(i, X, count)))) {
            X[count] = i;
            break;
        }
    }

    for(int i = 0; i < 7; i++) {
        cout << 'x' << X[i] + 1 << " ";
    }


}

bool if_in(int i,int X[7],int count) {
    for (int j = 0; j < count; j++) {
        int d = X[j];
        if (i == d) return true;
    }
    return false;
}

bool if_inn(int i, int X[7], int count) {
    for (int j = 6; j > 6-count; j--) {
        int d = X[j];
        if (i == d) return true;
    }
    return false;
}
