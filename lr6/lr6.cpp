#include <iostream>

using namespace std;

struct theme {
    int dificult, brain, useble, time;
};

double A[4][4] = {  {   1,   4, 2, 1},
                    {0.25,   1, 5, 2},
                    { 0.5, 0.2, 1, 0.2},
                    {   1, 0.5, 5, 1}};  

double A1[3][3] = { {   1, 4,   1},
                    { 0.25, 1, 0.25},
                    {   1, 4,   1} };

double A2[3][3] = { {   1, 2,   1},
                    { 0.5, 1, 0.5},
                    {   1, 2,   1} };

double A3[3][3] = { {   1, 5,   1},
                    { 0.2, 1, 0.2},
                    {   1, 5,   1} };

double A4[3][3] = { {  1, 0.25, 0.5},
                    {  4,    1,   4},
                    {  2, 0.25,   1} };


int main()
{

    /// A-mas

    double w[4] = { 0 };
    double sum = 0;


    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            w[i] += A[j][i];
        }
    }

    for (int i = 0; i < 4; i++) {
        w[i] = 1 / w[i];
        sum += w[i];
    }

    for (int i = 0; i < 4; i++) {
        w[i] = w[i] / sum;
    }

    double w_[4] = { 0 };

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            w_[i] = A[i][j] * w[j];
        }
    }

    double w__[4] = { 0 };

    for (int i = 0; i < 4; i++) {
        w__[i] = w_[i] / w[i];
    }

    double s = 0;

    for (int i = 0; i < 4; i++) {
        s += w__[i];
    }

    double is = (s - 4) / 3;

    /// A1-mas

    double w1[3] = { 0 };
    double sum1 = 0;


    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            w1[i] += A1[j][i];
        }
    }

    for (int i = 0; i < 3; i++) {
        w1[i] = 1 / w1[i];
        sum1 += w1[i];
    }

    for (int i = 0; i < 3; i++) {
        w1[i] = w1[i] / sum1;
    }

    double w1_[3] = { 0 };

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            w1_[i] = A1[i][j] * w1[j];
        }
    }

    double w1__[3] = { 0 };

    for (int i = 0; i < 3; i++) {
        w1__[i] = w1_[i] / w1[i];
    }

    double s1 = 0;

    for (int i = 0; i < 3; i++) {
        s1 += w1__[i];
    }

    double is1 = (s1 - 3) / 2;

    /// A2-mas

    double w2[3] = { 0 };
    double sum2 = 0;


    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            w2[i] += A2[j][i];
        }
    }

    for (int i = 0; i < 3; i++) {
        w2[i] = 1 / w2[i];
        sum2 += w2[i];
    }

    for (int i = 0; i < 3; i++) {
        w2[i] = w2[i] / sum2;
    }

    double w2_[3] = { 0 };

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            w2_[i] = A2[i][j] * w2[j];
        }
    }

    double w2__[3] = { 0 };

    for (int i = 0; i < 3; i++) {
        w2__[i] = w2_[i] / w2[i];
    }

    double s2 = 0;

    for (int i = 0; i < 3; i++) {
        s2 += w2__[i];
    }

    double is2 = (s2 - 3) / 2;

    /// A3-mas

    double w3[3] = { 0 };
    double sum3 = 0;


    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            w3[i] += A3[j][i];
        }
    }

    for (int i = 0; i < 3; i++) {
        w3[i] = 1 / w3[i];
        sum3 += w3[i];
    }

    for (int i = 0; i < 3; i++) {
        w3[i] = w3[i] / sum1;
    }

    double w3_[3] = { 0 };

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            w3_[i] = A3[i][j] * w3[j];
        }
    }

    double w3__[3] = { 0 };

    for (int i = 0; i < 3; i++) {
        w3__[i] = w3_[i] / w3[i];
    }

    double s3 = 0;

    for (int i = 0; i < 3; i++) {
        s3 += w3__[i];
    }

    double is3 = (s3 - 3) / 2;

    /// A4-mas

    double w4[3] = { 0 };
    double sum4 = 0;


    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            w4[i] += A4[j][i];
        }
    }

    for (int i = 0; i < 3; i++) {
        w4[i] = 1 / w4[i];
        sum4 += w4[i];
    }

    for (int i = 0; i < 3; i++) {
        w4[i] = w4[i] / sum4;
    }

    double w4_[3] = { 0 };

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            w4_[i] = A4[i][j] * w4[j];
        }
    }

    double w4__[3] = { 0 };

    for (int i = 0; i < 3; i++) {
        w4__[i] = w4_[i] / w4[i];
    }

    double s4 = 0;

    for (int i = 0; i < 3; i++) {
        s4 += w4__[i];
    }

    double is4 = abs(s4 - 3) / 2;

    double d[3] = { 0 };

    d[0] = w[0] * w1[0] + w[1] * w2[0] + w[2] * w3[0] + w[3] * w4[0];

    d[1] = w[0] * w1[1] + w[1] * w2[1] + w[2] * w3[1] + w[3] * w4[1];

    d[2] = w[0] * w1[2] + w[1] * w2[2] + w[2] * w3[2] + w[3] * w4[2];

    cout << "A:\n";
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << A[i][j] << "   ";
        }
        cout << '\n';
    }

    cout << "w: ";
    for (int i = 0; i < 4; i++) {
        cout << w[i] << " ";
    }
    cout << "  S=" << s;
    cout << "  IS=" << is;
    cout << '\n';
    cout << '\n';

    cout << "A1:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << A1[i][j] << "   ";
        }
        cout << '\n';
    }

    cout << "w1: ";
    for (int i = 0; i < 3; i++) {
        cout << w1[i] << " ";
    }
    cout << "  S1=" << s1;
    cout << "  IS1=" << is1;
    cout << '\n';
    cout << '\n';

    cout << "A2:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << A3[i][j] << "   ";
        }
        cout << '\n';
    }

    cout << "w2: ";
    for (int i = 0; i < 3; i++) {
        cout << w2[i] << " ";
    }
    cout << "  S2=" << s2;
    cout << "  IS2=" << is2;
    cout << '\n';
    cout << '\n';

    cout << "A3:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << A3[i][j] << "   ";
        }
        cout << '\n';
    }

    cout << "w3: ";
    for (int i = 0; i < 3; i++) {
        cout << w3[i] << " ";
    }
    cout << "  S3=" << s3;
    cout << "  IS3=" << is3;
    cout << '\n';
    cout << '\n';

    cout << "A4:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << A4[i][j] << "   ";
        }
        cout << '\n';
    }

    cout << "w4: ";
    for (int i = 0; i < 3; i++) {
        cout << w4[i] << " ";
    }
    cout << "  S4=" << s4;
    cout << "  IS4=" << is4;
    cout << '\n';
    cout << '\n';

    cout << "D1:= " << w[0] << "*" << w1[0] << "+" << w[1] << "*" << w2[0] << "+" << w[2] << "*" << w3[0] << "+" << w[3] << "*" << w4[0] << " = " << d[0] << '\n';
    cout << "D2:= " << w[0] << "*" << w1[1] << "+" << w[1] << "*" << w2[1] << "+" << w[2] << "*" << w3[1] << "+" << w[3] << "*" << w4[1] << " = " << d[1] << '\n';
    cout << "D3:= " << w[0] << "*" << w1[2] << "+" << w[1] << "*" << w2[2] << "+" << w[2] << "*" << w3[2] << "+" << w[3] << "*" << w4[2] << " = " << d[2] << '\n';


    return 0;
}
