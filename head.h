/******************************
 * Cui Ruifeng
 * 1509853V-I011-0026
 *         File: head.h
 * For some data data structure
 * of the scheduler.
******************************/

struct job            //Data structure for each jobs
{
    unsigned int arr;
    char com[255];
    int dur;
};

struct scheduler    //Data structure for whole the scheduler
{
    int num;
    struct job j[9];
};

struct scheduler s;