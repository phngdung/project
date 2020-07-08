#include <windows.h>
#include <stdio.h>
long a=0, b=0;
//HANDLE S1;
HANDLE S1, S2;
//Yeu cau: b+1>=a>=b
int T1() {
	do { 
		//wait(S1);
		
		//ReleaseSemaphore(S2,1,NULL);
		WaitForSingleObject(S2,INFINITE);
		//printf("$$$$$4a=%d  b=%d\n",a,b);	
		a++;
		ReleaseSemaphore(S1,1,NULL);
		//signal(S2);
		
		//if(x==5)
		if(a<b)
			printf("a=%d  b=%d\n",a,b);
		if(a>b+1)
			printf("****a=%d  b=%d\n",a,b);
		
	} while(1);
}
int T2() {
	do {
		WaitForSingleObject(S1,INFINITE);
		//printf("@@@@4a=%d  b=%d\n",a,b);
		b++;
		ReleaseSemaphore(S2,1,NULL);
		//signal(S1);
		//ReleaseSemaphore(S1,1,NULL);
		//wait(S2);
		//WaitForSingleObject(S2,INFINITE);
		//y=2*y;	
		
	} while(1);
}
int main(){
	HANDLE h1, h2; DWORD Id;
	S1=CreateSemaphore(NULL,0,1,NULL);
	S2=CreateSemaphore(NULL,1,1,NULL);
	h1=CreateThread(NULL,0,(LPTHREAD_START_ROUTINE)T1,NULL,0,&Id);
	h2=CreateThread(NULL,0,(LPTHREAD_START_ROUTINE)T2,NULL,0,&Id);
	WaitForSingleObject(h1,INFINITE);
	WaitForSingleObject(h2,INFINITE);
	return 0;
}
