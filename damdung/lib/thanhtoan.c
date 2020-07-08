#include"/home/damdung/cmake-btree/inc/btree.h"
#include<stdlib.h>
#include <stdio.h>
typedef struct {
    char *mo_ta;
    int tong;
} KhoanThanhToan;
typedef struct {
  char *dat;
  unsigned int len;
} Bytes;
int *deserialize(Bytes *buff){
    int i,j,h=0;
    KhoanThanhToan* a = (KhoanThanhToan*)malloc(sizeof(KhoanThanhToan));
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
    a->tong = l;
    return a->tong;
}

int main(){
	btinit();
	int size;
	int sum =0; 
	BTA* ktt = btopn("/home/damdung/lib/test.bt",0,0);
	if(ktt == NULL){
		printf("Loi khong the mo file.\n");
		return -1;
	}
	char khoa[MAX];
	char giatri[MAX];
	btpos(ktt,ZSTART);
	while((btseln(ktt,khoa,giatri,MAX,&size) == 0))
	{
		sum+= deserialize(giatri)->tong;
	}
	btcls(ktt);
	printf("%d\n",sum);
}