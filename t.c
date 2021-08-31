/************* t.c file ********************/
#include <stdio.h>
#include <stdlib.h>

int *FP;

int main(int argc, char *argv[ ], char *env[ ])
{
    int a,b,c;
    printf("enter main\n");
    
    printf("&argc=%x argv=%x env=%x\n", &argc, argv, env);
    printf("&a=%8x &b=%8x &c=%8x\n", &a, &b, &c);

    // %%(1). Write C code to print values of argc and argv[] entries

    // %%ANSWER (1) 
    printf("argv values: ");
    for (int i=0; i<argc; i++) {
        printf("%s ", argv[i]);
    }
    printf("\nargc value: %d\n", argc);

    a=1; b=2; c=3;
    A(a,b);
    printf("exit main\n");
}

int A(int x, int y)
{
    int d,e,f;
    printf("enter A\n");
    // %% write C code to PRINT ADDRESS OF d, e, f

    // %% ANSWER 
    printf("d Address: %p\ne Address: %p\nf Address: %p\n", &d, &e, &f);

    d=4; e=5; f=6;
    B(d,e);
    printf("exit A\n");
}

int B(int x, int y)
{
    int g,h,i;
    printf("enter B\n");
    // %% write C code to PRINT ADDRESS OF g,h,i

    // %% ANSWER 
    printf("g Address: %p\nh Address: %p\ni Address: %p\n", &g, &h, &i);

    g=7; h=8; i=9;
    C(g,h);
    printf("exit B\n");
}

int C(int x, int y)
{
        int u, v, w, i, *p;

        printf("enter C\n");
        // %% write C cdoe to PRINT ADDRESS OF u,v,w,i,p;

        // %% ANSWER
        printf("u Address: %p\nv Address: %p\nw Address: %p\ni Address: %p\np Address: %p\n", &u, &v, &w, &i, &p);

        u=10; v=11; w=12; i=13;

        FP = (int *)getebp();  // FP = stack frame pointer of the C() function
    // %% print FP value in HEX  

    // %% ANSWER 
    printf("FP value in HEX: %X\n", FP);

// (2). Write C code to print the stack frame link list.

    while (FP) {
        printf("Stack Frame FP Value = %X\n", *FP);
        FP = *FP;
    }

    p = (int *)&p;

// %%(3). Print the stack contents from p to the frame of main()
//     YOU MAY JUST PRINT 128 entries of the stack contents.



// %% (4). On a hard copy of the print out, identify the stack contents
//     as LOCAL VARIABLES, PARAMETERS, stack frame pointer of each function.
}