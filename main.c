#include <stdio.h>
#include <stdlib.h>

static void CCP_V01(void);
static void CCP_V02(void);
typedef void (*CCP_tpfService) (void);

static void CCP_V01(void)
{
	printf("%s", "1");
}

static void CCP_V02(void)
{
	printf("%s", "2");
}

static const CCP_tpfService CCP_tpfServiceTable [2] =
{
	&CCP_V01,
	&CCP_V02
};

int main()
{
	(CCP_tpfServiceTable[0]) ();
}