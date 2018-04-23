/***********************************
 * Cui Ruifeng
 * 1509853V-I011-0026
 *         File: readf.c
 * To read imformation from job.txt
 * Make sure that a.out is in the 
 * same folder with job.txt
***********************************/

#include <stdio.h>
#include <unistd.h>
#include "head.h"
#include <stdlib.h>
#include <string.h>


int read_job()
{
    char buff[300];
    FILE *fin;
    s.num = 0;
    fin = fopen("./job.txt","r");
    printf("Start reading job file.\n");
    while(fgets(buff, 300, fin)!=NULL)
    {
        s.j[s.num].arr = atoi(strtok(buff,"\t"));
        strcpy(s.j[s.num].com, strtok(NULL,"\t"));
        s.j[s.num].dur = atoi(strtok(NULL,"\t"));
        s.num++;
    }
    printf("completed, we have %d jobs!\n",s.num);
    return 0;
}

int print_job()
{
    for(int i = 0;i < s.num; i++)
    {
        printf("Job %d: \n",i);
        printf("Arrival at %d sec, ",s.j[i].arr);
        printf("command: %s, ",s.j[i].com);
        if(s.j[i].dur != -1)
            printf("Duration: %d.\n", s.j[i].dur);
        else
            printf("Duration: unknow yet.\n");
    }
}


int main()
{
    read_job();
    print_job();
    return 0;
}