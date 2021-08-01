#include<stdio.h>
struct student
{
    int roll,marks1,marks2,marks3,marks4;
    int avg;
} std[100];

int main()
{
    int i,j,n,k;
    int m[4],tem,t;
    printf("Enter the num of students:");
    scanf("%d",&n);
    printf("enter the marks:\n");

    for(k=0; k<n; k++)
    {
        std[k].roll = k+1;
        scanf("%d %d %d %d",&m[0],&m[1],&m[2],&m[3]);
        //printf("%d %d %d %d\n",m[0],m[1],m[2],m[3]);
        for(i=0; i<4; i++)
        {
            for(j = i; j< 4; j++)
            {
                if(m[i]<m[j])
                {
                    tem = m[i];
                    m[i] = m[j];
                    m[j] = tem;
                }
            }
        }
        std[k].marks1 = m[0];
        std[k].marks2 = m[1];
        std[k].marks3 = m[2];
        std[k].marks4 = m[3];
        std[k].avg = (m[0]+m[1]+m[2])/3;
        //printf("%d\t%d\n",std[k].roll,std[k].avg);
    }

    for(i=0; i<n; i++)
    {
        for(j=i; j<n; j++)
        {
            if(std[i].avg<std[j].avg)
            {
                t=std[j].avg;
                std[j].avg=std[i].avg;
                std[i].avg=t;
                t=std[j].roll;
                std[j].roll=std[i].roll;
                std[i].roll=t;

            }
        }
        //printf("%d\t%d\n",std[i].roll,std[i].avg);
    }

    printf("roll  average_marks\n");
    for(i=0; i<n; i++)
    {
        printf("%d\t%d\n",std[i].roll,std[i].avg);
    }
}
