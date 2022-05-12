#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

struct S {
	int a;
	char b[10];
	double c;
};
//int main()
//{
//	struct s s = { 1,"shuai",3.14};
//	file* ps = fopen("text.txt", "w");
//	if (ps == null)
//	{
//		return 0;
//	}
//	fprintf
//	fprintf(ps, "%d %s %f", s.a, s.b, s.c);
//	fclose(ps);
//	ps = null;
//	return 0;
//}

int main()
{
	struct S s={0};
	FILE* ps = fopen("text.txt", "r");
	if (ps == NULL)
	{
		return 0;
	}
	fscanf(ps, "%d %s %f", &(s.a), &(s.b),&(s.c));
	printf("%d %s %f", s.a, s.b, s.c);
	fclose(ps);
	ps = NULL;
}
//int main()
//{
//	int a=1;
//	int i = 0;
//	for (i = 0; i < 8; i++)
//	{
//		a = 2 * (a + 1);
//	}
//	printf("%d\n", a);
//}