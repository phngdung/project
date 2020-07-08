#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "libfdr/jrb.h"
#include "igraph/igraph.h"
JRB jrb1, jrb2;
void print(igraph_vector_t *v) {
  long int a, b,c ;
  printf("Thu tu cong viec là:\n");
  for (long int i = 0; i < igraph_vector_size(v)/2; ++i) { {
    a=(long int)VECTOR(*v)[2*i];
    b=(long int)VECTOR(*v)[2*i+1];
    c=1;
  // printf("%d %d\n",a,b );
    //printf("%li %li ", (long int)VECTOR(*v)[2 * i], (long int)VECTOR(*v)[2 * i + 1]);
    printf("%s ", jrb_find_int(jrb2,a)->val.s);
   printf("%s ", jrb_find_int(jrb2,b)->val.s);
  }
 
}
}
int stt=0, size=0;
int jset_insert_str(JRB tree, char *key, Jval val){
  char* p= (char*)malloc(strlen(key)+1);
  strcpy(p,key);
  if( jrb_find_str(tree, p) != NULL) return 0;
  jrb_insert_str(tree, p, val);
  stt= val.i+1;
  return 1;
}
int main(int argc, char *argv[]) {
  igraph_t g;
  igraph_small(&g, 0, IGRAPH_DIRECTED,
                -1);
   FILE *inp, *inpi;
   char* string=(char*)malloc(sizeof(char)*11);
     jrb1=make_jrb();
     jrb2=make_jrb();
    JRB p;
   inp= fopen("/home/phuongdung/CAdvanced/demo/lesson08/inp.txt","r");
   if(inp==NULL) printf("Loi mo file\n" );
   while(fscanf(inp,"%s",string)!=EOF){
    {
      char* ptr = (char *)malloc(strlen(string)+1);
      strcpy(ptr,string);
          if(jset_insert_str(jrb1, string, (Jval){.i=stt})) jrb_insert_int(jrb2, stt-1, (Jval){.s=ptr}) ;
     //  printf("%s ", jrb_find_int(jrb2,stt)->val.s);
      
    }
  }
   fclose(inp);
  //  printf("%s ", jrb_find_int(jrb2,1)->val.s);
   inp= fopen("/home/phuongdung/CAdvanced/demo/lesson08/inp.txt","r");
   if(inp==NULL) printf("Loi mo file 1\n" );
   inpi= fopen("/home/phuongdung/CAdvanced/demo/lesson08/inpi.txt","w");
   if(inpi==NULL) printf("Loi mo file 2\n" );
   while(fscanf(inp,"%s",string)!=EOF)
    {
      if( jrb_find_str(jrb1, string) == NULL) printf("Ki tu chua co trong cay\n");
      else{
          fprintf(inpi,"%d ", jrb_find_str(jrb1, string)->val.i);
    }
  }
  fclose(inpi);
 fclose(inp);
  igraph_small(&g, 0, IGRAPH_DIRECTED,
                -1);
     inpi= fopen("/home/phuongdung/CAdvanced/demo/lesson08/inpi.txt","r");
  igraph_read_graph_edgelist(&g, inpi, 0,1);
 fclose(inpi);
  igraph_vector_t v;
  igraph_vector_init(&v, 0);
  igraph_get_edgelist(&g, &v, 0);
  // printf("#elements of v: %li\n", igraph_vector_size(&v));
  // print_edges(&v);

  // FILE *out = fopen(argc > 1? argv[1]: "graph_basics.dot", "w");;
  // igraph_write_graph_dot(&g, out);
  // fclose(out);
  igraph_bool_t is_dag;
  igraph_is_dag(&g,&is_dag);
    if(!is_dag) printf("Khong co thu tu nao hop li\n");
    else
    {igraph_topological_sorting(&g,&v,1);
      print(&v);
    }
  igraph_vector_destroy(&v);
   jrb_free_tree(jrb1);
   igraph_destroy(&g);
}