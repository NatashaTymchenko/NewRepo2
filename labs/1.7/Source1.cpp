int main()
{
	const char CONST1 = '5';
	char chr1;
	chr1 = 'b';
	char chr2 = '!';

	const char CONST2 = 0xc;
	char chr3;
	chr3 = 0x68;
	char chr4 = 0x2b;

	int nA;
	float fltB;
	unsigned short wC;

	nA = 274;
	fltB1.001e-2;
	wC = 78;

	double dblD;
	int nE;
	char chF;

	dblD = nA;
	nE = fltB;
	chF = wC;

	dblD = (double)nA;
	nE = (int)fltB;
	chF = (char)wC;

	double* pdblD;
	void* pV;
	pV = &nA;
	pdblD = (double*)pV;
	dblD = *pdblD;

	int* pnE;
	pV = &fltB;
	pnE = (int*)pV;
	nE = *pnE;

	char* pchF;
	pV = &wC;
	pchF = (char*)pV;
	chF = *pchF;
}


}