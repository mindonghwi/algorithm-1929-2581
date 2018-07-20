// 1929.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"

#include<stdio.h>

bool arNonPrime[1000001]{};
int main()
{
	int nN(0);
	int nM(0);
	int nIndex(0);
	arNonPrime[1] = true;
	for (int i = 2; i < 1000001; i++)
	{
		if (arNonPrime[i] == false)
		{
			nIndex = i + i;
			while (nIndex < 1000001) {
				arNonPrime[nIndex] = true;

				nIndex = nIndex + i;
			}
		}
	}

	//1929
	//scanf_s("%d %d", &nN,&nM);
	//for (int i = nN; i <= nM; i++)
	//{
	//	if (arNonPrime[i] == false)
	//	{
	//		printf("%d\n", i);
	//	}
	//}

	//2581
	scanf_s("%d", &nN);
	scanf_s("%d", &nM);
	bool bMinSerch(false);
	int nMinValue(0);
	int nResult(0);
	for (int i = nN; i <= nM; i++)
	{
		if (arNonPrime[i] == false)
		{
			if (!bMinSerch)
			{
				bMinSerch = true;
				nMinValue = i;
			}
			nResult += i;
		}
		
	}

	if (!bMinSerch)
	{
		printf("-1\n");
	}
	else
	{
		printf("%d\n%d\n", nResult, nMinValue);
	}
    return 0;
}

