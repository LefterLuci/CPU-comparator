#include <stdlib.h>
#define cpu1 "Ryzen 5600x"
#define cpu2 "Ryzen 1600"
#define cpu3 "Intel 11600k"



void maxmin(char a[], char b[], char c[])
{
    if(a && b)
    {
        printf("\n\n%s is better than %s\n",a,b);
    }
    else if(a && c)
    {
        printf("\n\n%s is better than %s\n",a,c);
    }
    else if(b && a)
    {
        printf("\n\n%s is better than %s\n",b,a);
    }
    else if(b && c)
    {
        printf("\n\n%s is better than %s\n",b,c);
    }
    else if(c && a)
    {
        printf("\n\n%s is better than %s\n",c,a);
    }
    else
    {
        printf("\n\n%s is better than %s\n",c,b);
    }

        printf("\n\nPress ENTER to return to the main menu");
        getchar();
        getchar();
        system("cls");
};

struct cpu
{
    int cores;
    int threads;
    double baseclock;
    double boostclock;
};


int main()
{
        int input, input1, input2;



    struct cpu ryzen_5600;
        ryzen_5600.cores = 6;
        ryzen_5600.threads = 12;
        ryzen_5600.baseclock = 3.9;
        ryzen_5600.boostclock = 4.4;


    struct cpu ryzen_1600;
        ryzen_1600.cores = 6;
        ryzen_1600.threads = 12;
        ryzen_1600.baseclock = 3.2;
        ryzen_1600.boostclock = 3.6;

    struct cpu intel_11600k;
        intel_11600k.cores = 6;
        intel_11600k.threads = 12;
        intel_11600k.baseclock = 3.6;
        intel_11600k.boostclock = 4.9;

        while(1)
        {
            printf("Please choose a processor to get information about it:\n");
            printf("1. %s\n",cpu1);
            printf("2. %s\n",cpu2);
            printf("3. %s\n",cpu3);
            printf("4. Compare two of the CPUs above.\n\n");
            scanf("%d",&input);


    if(input==1)
            {
            system("cls");
            printf("\nAMD Ryzen 5600X\n\n");
            printf("Number of cores: %d\n",ryzen_5600.cores);
            printf("Number of threads: %d\n",ryzen_5600.threads);
            printf("Base clock: %.2f GHz \n", ryzen_5600.baseclock);
            printf("Maximum boost clock: %.2f GHz\n\n", ryzen_5600.boostclock);
            printf("Press ENTER return to the main menu");
            getchar();
            getchar();
            system("cls");


            }

    else if(input==2)
            {
            system("cls");
            printf("\nAMD Ryzen 1600\n\n");
            printf("Number of cores: %d\n",ryzen_1600.cores);
            printf("Number of threads: %d\n",ryzen_1600.threads);
            printf("Base clock: %2.2f GHz\n", ryzen_1600.baseclock);
            printf("Maximum boost clock: %.2f GHz\n\n", ryzen_1600.boostclock);
            printf("Press ENTER to return to the main menu");
            getchar();
            getchar();
            system("cls");

            }

    else if(input==3)
            {
            system("cls");
            printf("\nINTEL 11600k\n\n");
            printf("Number of cores: %d\n",intel_11600k.cores);
            printf("Number of threads: %d\n",intel_11600k.threads);
            printf("Base clock: %.2f GHz\n", intel_11600k.baseclock);
            printf("Maximum boost clock: %.2f GHz\n\n", intel_11600k.boostclock);
            printf("Press ENTER to return to the main menu");
            getchar();
            getchar();
            system("cls");


            }
    else if(input==4)
            {
            system("cls");
            printf("Please select the first CPU:\n");

            printf("1. AMD Ryzen 5600X\n");
            printf("2. AMD Ryzen 1600\n");
            printf("3. INTEL 11600k\n");
            scanf("%d",&input1);


            system("cls");
            printf("Please select the second CPU:\n");

            printf("1. AMD Ryzen 5600X\n");
            printf("2. AMD Ryzen 1600\n");
            printf("3. INTEL 11600k\n");
            scanf("%d",&input2);
            system("cls");

            maxmin(cpu1,cpu2,cpu3);
            }

    else
            {
            printf("Incorrect value!");
            }
        }

    return 0;
}
