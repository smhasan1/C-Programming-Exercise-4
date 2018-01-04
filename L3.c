#include<stdio.h>
#include<string.h>


int main(){

	int lines, fexam[50], mexam[50], same, count, countf, i;
	char fname[50][9], lname[50][9], ID[50][9], command[8];
	float q1[50], q2[50], q3[50], finalmark[50], max, perA, perf;

//printf("Enter the number of lines:\n");
	scanf("%d\n", &lines);
//printf("%d\n", lines);
	
	for(i = 0; i < lines; i++){
		scanf("%s %s %s %d %d %f %f %f", ID[i], fname[i], lname[i], &fexam[i], &mexam[i], &q1[i], &q2[i], &q3[i]);

		finalmark[i] = (0.6*fexam[i]) + (0.25*mexam[i]) + (0.5*q1[i]) + (0.5*q2[i]) + (0.5*q3[i]);
	}

	count = 0;
	for(i = 0; i < lines; i++){
		if(finalmark[i] >= 80){
		count++;
		}
	}
			
	perA = ((float)count/(float)lines)*100;

	goto jump;

	while(1){

jump:		scanf("%s", command);

		
		if(strcmp(command, "F") == 0){

			for(i = 0; i < lines; i++){
				if(finalmark[i] < 50){
				printf("%s\n", ID[i]);
				}
			}
		}

		if(strcmp(command, "top") == 0){
			same = 0;
			max = finalmark[0];
			for(i = 1; i < lines; i++){
				if(finalmark[i] >= max){
				max = finalmark[i];
				}	
			}
			for(i = 0; i < lines; i++){
				if( finalmark[i] == max){
				printf("%s  %s\n",ID[i] , lname[i]);
				}
			}

		}

		if(strcmp(command, "A") == 0){

			count = 0;
			for(i = 0; i < lines; i++){
				if(finalmark[i] >= 80){
				printf("%s  %s\n",ID[i] , lname[i]); 
				}
			}

		}

		if(strcmp(command, "PerA") == 0){
			
			printf("Percentage of students with an average of A:%.2f%%\n",perA);

		}

		if(strcmp(command, "Anomaly") == 0){

			for(i = 0; i < lines; i++){
				if(finalmark[i] < 50){
				countf++;
				}
			}
	
			perf = ((float)countf/(float)lines)*100;

			if(perA>30 && lines >15 || perf>30 && lines >15){
			printf("YES\n");
			}else{
			printf("NO\n");
			}

		}

		if(strcmp(command, "q") == 0 || strcmp(command, "Q") == 0 ){
	
		printf("Thanks\n");
		break;	
	
		}


	}


}
