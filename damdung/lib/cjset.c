#include <cjset.h>
#include <stdio.h>
int jset_insert_str(JRB tree, char *key, Jval val){
	char* p= (char*)malloc(strlen(key)+1);
	strcpy(p,key);
	if( jrb_find_str(tree, p) != NULL) return 0;
	jrb_insert_str(tree, p, val);
	return 1;
}
int jset_update_str(JRB tree, char *key, Jval val){
	JRB j;
	if( j=jrb_find_str(tree, key)){
	j->val= val; 
	return 1;
	}
	return 0;
}
int jset_size(JRB tree){
	JRB ptr=NULL;
	int size=0;
	jrb_traverse(ptr, tree) size++;
	return size;
}