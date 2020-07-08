#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include<jrb.h>
#include <igraph.h>
#include <cvector.h>
#include<jval.h>
#define MAX 100
int main(int argc, char *argv[]){
    FILE* inp;
    JRB j=make_jrb();
    int a,b,thanh, doan,i;
 igraph_t g;
 igraph_adjlist_t A;
//   igraph_small(&g, 0, IGRAPH_DIRECTED,
//                 -1);
inp= fopen("/home/phuongdung/damdung/bt/dothi.txt","r");
 if(inp==NULL) printf("Loi mo file\n" );
 fscanf(inp,"%d",&thanh);
 fscanf(inp,"%d",&doan);
 printf("%d %d\n", thanh, doan);
 int trongso[doan];
 igraph_adjlist_init_empty(A,thanh);//ma tran ke cac doan
//int A[8*8];
for(i=0;i<8;i++){
    for( int j=0;j<8;j++) A[i*8+j]=0;
}
  for(i=0;i<doan;i++)
    {
    fscanf(inp,"%d",&a);
    fscanf(inp,"%d",&b);
    jrb_insert_int(j,a,(Jval){.i=b} );
    A[(a-1)*thanh+b-1]=A[(b-1)*thanh+a-1]=1;
    fscanf(inp,"%d",&trongso[i]);
    }
    
    for(i=0;i<thanh;i++){
        for(int k=0;k<thanh;k++) printf("%d\t",A[i*thanh+k]);
        printf("\n");
    }
      for(i=0;i<doan;i++) printf("%d ", trongso[i]);
         printf("\n");
    fclose(inp);
// igraph_read_graph_edgelist(&g, inpi, 0,1);


}
igraph_adjlist_t