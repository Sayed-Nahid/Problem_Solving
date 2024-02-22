#include<stdio.h>
int main()
{
    float N1, N2, N3, N4, avg, exam, sum;
    scanf("%f %f %f %f", &N1, &N2, &N3, &N4);
    avg = ((N1 * 2) + (N2 * 3) + (N3 * 4) + (N4 * 1)) / (2+3+4+1);
    printf("Media: %0.1f\n", avg);
    if (avg >= 7.0)
    {
        printf("Aluno aprovado.\n");
    }
    else if (avg < 5.0)
    {
        printf("Aluno reprovado.\n");
    }
    else if ((avg >= 5.0) && (avg <= 6.9))
    {
        printf("Aluno em exame.\n");
        scanf("%f", &exam);
        printf("Nota do exame: %0.1f\n", exam);
        sum = (exam + avg) / 2;
        if(sum >= 5.0)
        {
            printf("Aluno aprovado.\n");
        }
        else if (sum <= 4.9)
        {
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %0.1f\n", sum);
    }
    return 0;
}
