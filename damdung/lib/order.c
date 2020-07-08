#include "order.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
char buffer[1000];
Bytes *serialize(Order *o){
    Bytes* c =(Bytes* )malloc(sizeof(Bytes));
    char s_total[30];
	sprintf(s_total,"%d",o->total);
	buffer[0] = strlen(o->name);
	sprintf(buffer+1,"%s",o->name);
	buffer[strlen(buffer)] = strlen(s_total);
	sprintf(buffer + 1 + strlen(o->name) + 1,"%s",s_total);
	c->len=  (unsigned int) strlen(buffer) ;
	c->dat=(char*)malloc(sizeof(char)*1000);
	strcpy(c->dat, buffer);
	return c;
}
Order *deserialize(Bytes *buff){
	Order *o=(Order*) malloc(sizeof(Order));
	strcpy(buffer, buff->dat);
	int p= (unsigned char)buffer[0];
	o->name=(char*)malloc(p);
	for(int i=0; i< p; i++){
		o->name[i]=(unsigned char)( buffer[i+1]);
	}
	int a=1;
	char b[100] ;
	printf("p= %d\n", p );
	for(int i=buff->len-1; i> (unsigned char)(buffer[buffer[0]+1]); i--){
		o->total= ( o->total+ (unsigned char)(buffer[i]-48)*a);
		a*=10;
	}
	printf("%d\n", o->total );
	return o;
}