#include <stdio.h>
main()
{
    int n,m,v,ct,ct1;
    printf("Enter number of beads: ");
    scanf("%d",&n);
    printf("Enter the maximum allowed number of beads to take: ");
    scanf("%d",&m);
    if(n%(m+1)==0)
    {
        for(;n>0;)
        {
            printf("\nTake your beads: ");
            scanf("%d",&v);
            if (v>m) {printf("It's more than allowed!"); break;}
            n=n-v;
            printf("\nRemaining beads: %d\n",n);
            ct=(m+1)-v;
            printf("\nComputer takes %d beads,\n",ct);
            n=n-ct;
            printf("\nRemaining beads: %d\n",n);
        }
        printf("\n\nComputer wins!");
    }
    else
    {
        ct1=n%(m+1);
        printf("\nComputer takes %d beads\n",ct1);
        n=n-ct1;
        for(;n>0;)
        {
            printf("\nTake your beads: ");
            scanf("%d",&v);
            if (v>m) {printf("It's more than allowed!"); break;}
            n=n-v;
            printf("\nRemaining beads: %d\n",n);
            ct=(m+1)-v;
            printf("\nComputer takes %d beads,\n",ct);
            n=n-ct;
            printf("\nRemaining beads: %d\n",n);
        }
        printf("\n\nComputer Wins!");
    }
}
