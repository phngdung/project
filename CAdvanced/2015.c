#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include "libfdr/jrb.h"
#include "igraph/igraph.h"
#include "c-vector/cvector.h"

JRB tree1,tree2;
  igraph_t g;
  igraph_vector_t ve,eg;
  igraph_vector_t v;
  igraph_vector_t weight;
int size;

int **ptr;

int input(char *file){
  igraph_vector_init(&v,0);
  igraph_vector_init(&ve,0);
  igraph_vector_init(&weight,0);
  igraph_vector_init(&eg,0);
  FILE* fp=NULL;
  int n1=0,n2=0;
  tree1=make_jrb();
  tree2=make_jrb();
  fp=fopen(file,"r");
  if(fp==NULL)return 0;
  char s[1000];
  int k=0;
  fscanf(fp,"%d",&n1);
  size=n1;
  ptr=(int*)calloc(size+1,sizeof(int*));
  for(int i=0;i<n1;i++)
  {
  	  	k=0;
  	  	memset(s,0,1000);
  	  	fscanf(fp,"%d%s",&k,s);
 
  	  	do{
  	  		char *s1=(char*)calloc(strlen(s+1),1);
  	  		strcpy(s1,s);
  	  	    jrb_insert_str(tree1,s1,(Jval){.i=k});
        	jrb_insert_int(tree2,k,(Jval){.s=s1});
  	    }while(0);
  }
  int a,b,c; 
  fscanf(fp,"%d",&n2);
  for(int i=0;i<n2;i++)
  {
       fscanf(fp,"%d%d%d",&a,&b,&c);
       cvector_push_back(ptr[a],b);
       cvector_push_back(ptr[b],a);
       igraph_vector_push_back(&v,a);
       igraph_vector_push_back(&v,b);
       igraph_vector_push_back(&weight,c);      
  }

  fclose(fp);

}
int free_str_key_jrb(JRB tree){
    JRB ptr;
    jrb_traverse(ptr,tree)free(ptr->key.s);
    return 0;
};
int free_str_val_jrb(JRB tree){
    JRB ptr;
    jrb_traverse(ptr,tree)free(ptr->val.s);
    return 0;
};
void FC_1(){
	printf("C-Advanced, HK20152\n");
}
void FC_2(){
     for(int i=1;i<=size;i++)printf("%d %s\n",i,jrb_find_int(tree2,i)->val.s);
}

void FC_3(int n1 ,int n2){
	    
      int eid=0;
	    if(igraph_get_eid(&g,&eid,n1,n2,0,NULL)==0)
        if((int)VECTOR(weight)[eid])
          printf("%d\n",(int)VECTOR(weight)[eid]);
        else printf("-1\n");

};
void FC_4(int n1,int n2){
	   int cost=0;
	   igraph_get_shortest_path_dijkstra(&g,&ve,&eg,n1,n2,&weight,IGRAPH_ALL);
       for(int j=0;j<igraph_vector_size(&eg);j++){
       	cost+=(int)VECTOR(weight)[(int)VECTOR(eg)[j]];
       }
       if(cost==0)printf("-1");
       else{ printf("%d\n",cost);
       		for(int j=0;j<igraph_vector_size(&ve);j++){
           		printf("%s\n",jrb_find_int(tree2,(int)VECTOR(ve)[j])->val.s);
            }
       }   
}
void FC_5(int k){
	 int n=cvector_size(ptr[k]);
     printf("%d\n",n);
     for(int i=0;i<n;i++)printf("%d %s\n",ptr[k][i],jrb_find_int(tree2,ptr[k][i])->val.s);
}
int check(int k,int k1){
  if(k<k1&&k!=k1){
  	int eid=0;
  	if(igraph_get_eid(&g,&eid,k,k1,0,NULL)==0)return eid;
  }
  return -1;
}
void FC_6(int *A){
	int *V=NULL;
	int size=cvector_size(A);
    printf("%d\n",size);
	for(int i=0;i<size;i++)printf("%d %s\n",A[i],jrb_find_int(tree2,A[i])->val.s);
    for(int i=0;i<size;i++)
    	for(int j=0;j<size;j++){
    		int k=check(A[i],A[j]);
    		if(k!=-1){
    			cvector_push_back(V,A[i]);
    			cvector_push_back(V,A[j]);
    			cvector_push_back(V,(int)VECTOR(weight)[k]);
    		}
    	}
    int size1=cvector_size(V)/3;
    printf("%d\n",size1);
    for(int i=0;i<size1*3;i+=3)printf("%d %d %d\n",V[i],V[i+1],V[i+2]);

}

void FC(char **argv,int argc){

     if(strcmp(argv[1],"-h")==0){
        FC_1();
     }

     if(strcmp(argv[1],"-v")==0){
        FC_2();
     }

     if(strcmp(argv[1],"-w")==0){
        int a,b;
        sscanf(argv[3],"%d",&a);
        sscanf(argv[4],"%d",&b);
        FC_3(a,b);
     }

     if(strcmp(argv[1],"-p")==0){
        int a,b;
        sscanf(argv[3],"%d",&a);
        sscanf(argv[4],"%d",&b);
        FC_4(a,b);
     }
     

     if(strcmp(argv[1],"-n")==0){
       int a;
       sscanf(argv[3],"%d",&a);
       FC_5(a);

     };
     if(strcmp(argv[1],"-s")==0){
      int a;
      int *A=NULL;
      for(int i=3;i<argc;i++){
      sscanf(argv[i],"%d",&a);
      cvector_push_back(A,a);
      }
      FC_6(A);
      cvector_free(A);
     }
}
int main( int argc, char *argv[]){
     
    if(argc==1)return 0;
    input(argv[2]);
    igraph_create(&g,&v,0,0);
    FC(argv,argc);

    free_str_val_jrb(tree2);
    free_str_key_jrb(tree1);
    jrb_free_tree(tree1);
    jrb_free_tree(tree2);
    igraph_vector_destroy(&v);
    igraph_vector_destroy(&ve);
    igraph_vector_destroy(&eg);
    igraph_vector_destroy(&weight);
    igraph_destroy(&g);
    return 0;
}