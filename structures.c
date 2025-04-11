#include<stdio.h>

struct student
{
    char fname[30];
    char lname[30];
    int stdid;
};
int main()
{
    struct student S1={"Jane","kamau", 001};
    struct student S2={.fname="William",.lname="smith", .stdid=002};
    printf("%s \t %s \t %d\n",S1.fname,S1.lname,S1.stdid);
    printf("%s \t %s \t %d",S2.fname,S2.lname,S2.stdid);
    return 0;
}
