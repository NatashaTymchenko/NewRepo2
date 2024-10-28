int main()
{
    float fltA = 36.7;
    float fltB = 56.2;
    int nC = 99;
    int nD = 99;

    bool bRez1 = (fltA < fltB) ^ (!(nC != nD));

    int nA = 86;
    int nB = 65;
    float fltC = 75.2;
    float fltD = 43.6;

    bool bRez2 = (nA < nB) ^ (!(fltC != fltD));


    const int CONSTA = 85;
    int B = 27;
    int R = 10 - 4;
    int E = R;
    int D = 1;

    int C;
    int* pC = &C;
    *pC = -16;

    bool bRez3 = (((CONSTA ^ ~B) + *pC) < D) * E << sizeof(short);


}