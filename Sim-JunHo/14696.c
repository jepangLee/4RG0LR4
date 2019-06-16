#include <stdio.h>

//별(4)>동그라미(3)>네모(2)>세모(1)
int main() {
	int round, a, a1, b, b1, i;
	int aarr[4] = {0}, barr[4] = {0};
	
	scanf("%d", &round);
	
	while(round){
		for(i = 0; i < 4; i++) {
			aarr[i] = 0;
			barr[i] = 0;
		}
		
		scanf("%d", &a);
		
		for(i = 0; i < a; i++) {
			scanf("%d", &a1);
			aarr[a1-1]++;
		}
		scanf("%d", &b);
		
		for(i = 0; i < b; i++) {
			scanf("%d", &b1);
			barr[b1-1]++;
		}
		for(i = 3; i >= 0; i--) {
			if(aarr[i] > barr[i]) {
				printf("A\n");
				break;
			}
			else if(aarr[i] == barr[i]) {
				if(i == 0) {
					printf("D\n");
				}
				continue;
			}
			else {
				printf("B\n");
				break;
			}
		}
		round--;
	}
	
	return 0;
}
