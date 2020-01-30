#include "tinyexpr.h"
#include <stdio.h>
#include <time.h>
#include <string.h>

#define loops 10

int main(int argc, char *argv[])
{
	if (argc < 2) {
		printf("Usage: %s input_file\n", argv[0]);
		return 0;
	}

	FILE *f;
	f = fopen(argv[1], "r");
	if(f == NULL) {
		printf("Error opening file");   
        return 1;
	}

    char * expression = NULL;
    size_t len = 0;
    ssize_t read;

    /* This shows an example where the variables * x and y are bound at eval-time. */
    double x, y, z;
    te_variable vars[] = {{"var_0", NULL}, {"var_1", &x}, {"var_2", &y}, {"var_3", &z}};

    int nelapsed;
    int err;
    clock_t start;
    double r;

    while ((read = getline(&expression, &len, f)) != -1) {
        printf("Evaluating: %s\n", expression);
        z = (double)strlen(expression);

        /* This will compile the expression and check for errors. */
        int err;
        te_expr *n = te_compile(expression, vars, 4, &err);

        if (n) {
            /* The variables can be changed here, and eval can be called as many
             * times as you like. This is fairly efficient because the parsing has
             * already been done. */
            start = clock();
            for (x=0; x < loops; ++x) {
                for (y=0; y<loops; ++y) {
                    r += te_eval(n);
                }
            }
            printf("Summation after %d evaluations: %.5g (average value %.5g)\n", loops*loops,r, r/(loops*loops));
            nelapsed = (clock() - start) * 1000 / CLOCKS_PER_SEC;

            printf("Time: ");
            if (nelapsed) {
                printf("%5dms\t%5dmfps\n", nelapsed, loops * loops / nelapsed / 1000);
            } else {
                printf("inf\n");
            }
            te_free(n);
        } else {
            /* Show the user where the error is at. */
            printf("\t%*s^\nError near here", err-1, "");
        }
    }

    fclose(f);

	return 0;
}
