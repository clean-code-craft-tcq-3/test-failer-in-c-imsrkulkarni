
#include <stdio.h>
#include <assert.h>
#include "TempConversion.h"

Colorpair colorpair[25];

int printAndUpdateColorData() {
    int i = 0, j = 0, localPairNumber=0;
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            localPairNumber = localPairNumber+1;
            strcpy(colorpair[localPairNumber].MajorColor , majorColor[i]);
	        strcpy(colorpair[localPairNumber].MinorColor , minorColor[j]);
            printf("%d | %s | %s\n", i * 5 + j, majorColor[i], minorColor[j]);
        }
    }
    return i * j;
}

int main() {
    int result = printAndUpdateColorData();
    assert(result == 25);
    assert(strcmp(colorpair[23].MajorColor, "Violet") == 0);
	assert(strcmp(colorpair[23].MinorColor, "Green") == 0);
    printf("All is well (maybe!)\n");
    return 0;
}
