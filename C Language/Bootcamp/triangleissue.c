#include <math.h>
#include <stdio.h>
#include <stdlib.h>


struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;

void sort_by_area(triangle *tr, int n)
{
    double s[n], p, area;
    for (int i; i < n; i++)
    {

        p = (tr[i].a + tr[i].b + tr[i].c) / 2.0;
        s[i] = sqrt(p * (p - tr[i].a) * (p - tr[i].b) * (p - tr[i].c));
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {

            if (s[i] > s[j])
            {
                triangle temp;

                temp = tr[i];
                tr[i] = tr[j];
                tr[j] = temp;

                area = s[i];
                s[i] = s[j];
                s[j] = area;
            }
        }
    }
}

int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}