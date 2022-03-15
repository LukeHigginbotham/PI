#include <stdio.h>;

int a = 10000, b, c = 2800, d, e, f[2801], g; 
main() 
{
	printf("Terse Version:\n");
	for (; b - c;) f[++b] = a / 5;
	for (; d = 0, g = c * 2; c -= 14, printf("%.4d", e + d / a), e = d % a)
		for (b = c; d += f[b] * a, f[b] = d % --g, d /= g--, --b; d *= b);
	verboseVersion();
}
verboseVersion()
{
	printf("\n\nVerbose Version:\n");
	int r[2800 + 1];
	int i, k, p, t;
	int o = 0;

	for (i = 0; i < 2800; i++)
	{
		r[i] = 2000;
	}
	for (k = 2800; k > 0; k = k - 14)
	{
		t = 0;
		i = k;
		for (i = k; i > 0;)
		{
			t = t + r[i] * 10000;
			p = 2 * i - 1;
			r[i] = t % p;
			t = t / p;
			i--;
			if (i != 0)
			{
				t = t * i;
			}
			
		}
		int v = o + t / 10000;
		printf("%.4d", v);
		o = t % 10000;
	}
	return 0;

}
