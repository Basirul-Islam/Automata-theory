#include<bits/stdc++.h>
#define STATES 50
struct transition
{
    char sym;
    int tostates[50];
    int notran;
};
struct state
{
    int no;
    struct tran tranlist[50];
};

struct state States[STATES];

int nos,noi,nof,j,k,nods=-1;

void move(int st,int j)
{
    int ctr=0;
    while(ctr<States[st].tranlist[j].notran)
    {
        pushA(States[st].tranlist[j].tostates[ctr++]);
    }
}

int main()
{
    int final[20],start,fin=0,i;
    char c,ans,st[20];
    printf("\nEnter no. of states in NFA : ");
    scanf("%d",&nos);
    for(i=0; i<nos; i++)
    {
        States[i].no=i;
    }

    start = 0;

    nof = 1;
    printf("\nEnter the final states : \n");
    for(i=0; i<nof; i++)
        scanf("%d",&final[i]);

    noi = 2;
    c=getchar();
    printf("\nEnter the input symbols : \n ");
    for(i=0; i<noi; i++)
    {
        scanf("%c",&inp[i]);
        c=getchar();
    }
    inp[i]='e';
    printf("\nEnter the transitions : (-1 to stop)\n");
    for(i=0; i<nos; i++)
    {
        for(j=0; j<=noi; j++)
        {
            States[i].tranlist[j].sym=inp[j];
            k=0;
            ans='y';
            while(ans=='y')
            {
                printf("move(%d,%c) : ",i,inp[j]);
                scanf("%d",&States[i].tranlist[j].tostates[k++]);
                if(States[i].tranlist[j].tostates[k-1]==-1)
                {
                    k--;
                    ans='n';
                    break;
                }
            }
            States[i].tranlist[j].notran=k;
        }
    }
}
