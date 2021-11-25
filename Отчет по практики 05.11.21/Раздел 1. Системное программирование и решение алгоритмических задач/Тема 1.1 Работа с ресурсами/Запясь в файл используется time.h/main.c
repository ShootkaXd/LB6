#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <locale.h>
//#define INFILE "C:\Users\Indikator\Desktop\mts1.txt"
//#define OUTFILE "C:\Users\Indikator\Desktop\mts2.txt"


main()

{
    setlocale(0,"");
FILE *inputfile,*outputfile;

int m,n,i,j,l,temp,max=0;

inputfile = fopen("mts1.txt", "r");

fscanf(inputfile, "%d%d",&m,&n);
printf("%d %d",m,n);

int mas[m][n];

fclose(inputfile);
outputfile=fopen("mts2.txt","w");

srand(time(NULL));
for(i=0; i<m; i++)
{
for(j=0; j<n; j++)
fprintf(outputfile, "%5d", rand()%100);
fprintf(outputfile,"\n");
}
fclose(outputfile);
outputfile=fopen("mts2.txt", "r");

    for(i=0; i<m; i++)
    {
    for(j=0;j<n; j++)
    fscanf(outputfile,"%d",&mas[i][j]);
    }

for(i=0; i<m; i++){
    for(j=0; j<n; j++)
    if(mas[i][j]>max){max=mas[i][j];}
}
outputfile=fopen("mts2.txt","a");
fprintf(outputfile,"Максимальное число в массиве=%d",max);
}
