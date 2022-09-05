#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int j = 0; j < t; j++)
    {
        int n;
        scanf("%d", &n);
        char string[n];

        string[0] = '1';

        if (n % 2 != 0)
        {
            for (int i = 0; i < n; i++)
            {
                if (string[i] == '0')
                {
                    string[i + 1] = '1';
                }
                else
                {
                    string[i + 1] = '0';
                }
            }
        }
        else
        {
            int x = n / 2;
            if (x % 2 != 0)
            {
                for (int i = 0; i < n; i=i+2)
                {
                    if (string[i] == '1')
                    {
                        string[i + 1] = '0';
                        string[i + 2] = '0';
                        
                    }
                    else
                    {
                        string[i + 1] = '1';
                        string[i + 2] = '1';
                    }
                }
                string[n-2]='0';
                string[n-1]='1';
            }
            else
            {

                for (int i = 0; i < n; i++)
                {
                    if (string[i] == '1')
                    {
                        string[i + 1] = '0';
                        string[i + 2] = '0';
                        i++;
                    }
                    else
                    {
                        string[i + 1] = '1';
                        string[i + 2] = '1';
                        i++;
                    }
                }
                        }
        }

        string[n] = '\0';

        printf("%s\n", string);
    }
    return 0;
}
