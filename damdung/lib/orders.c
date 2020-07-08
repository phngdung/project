#include<order.h>
#include<string.h>
#include<stdlib.h>
char buffer[1000];
Bytes *serialize(Order *o){
    Bytes* c =(Bytes* )malloc(sizeof(Bytes));
    char s_total[30];
	sprintf(s_total,"%d",o->total);
	buffer[0] = strlen(o->name);
	sprintf(buffer+1,"%s",o->name);
	buffer[strlen(buffer)] = strlen(s_total);
	sprintf(buffer + 1 + strlen(o->name) + 1,"%s",s_total);
    c->len =(unsigned int)strlen(buffer);
    c->dat =(char*)malloc(sizeof(char)*1000);
    strcpy(c->dat,buffer);
    return c;
}
Order *deserialize(Bytes *buff){
    int i,j,h=0;
    Order* a = (Order*)malloc(sizeof(Order));
    a->name = (char*)malloc(sizeof(char)*1000);
    char b[100];
    for(i=1,j=0; i< buff->len ;i++,j++)
    {
        if((buff->dat[i])>64 &&(buff->dat[i])<91)
        a->name[j]=(unsigned char)(buff->dat[i]);
        if((buff->dat[i])>47 &&(buff->dat[i])<58)
            {
                b[h]=(unsigned char)buff->dat[i];
                h++;
            }
    }
    int l = atoi(b);
    a->total = l;
    return a;
}
