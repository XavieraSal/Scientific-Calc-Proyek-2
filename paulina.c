#include "paulina.h"

int main(){
	char operasi[10];
	float angka;
	
	scanf("%s %f", operasi, &angka);
	if(strstr(operasi, "log")){
		sscanf(operasi, "log %f", &angka);
		return logBiasa(angka);
	}
}
