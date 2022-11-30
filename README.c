#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
/* 1
int main() 
{ 
char pristavka[5]; 
char words[10][50]; 
int i, j, n; 
printf("Vvedite kol-vo slov : "); 
scanf("%d", &n); 
printf("Vvedite slova : \n"); 
for (i = 0; i < n; i++) 
	scanf("%s", words[i]); 
	for (i = 0; i < 10; i++) { 
		for (j = 0; j < 50; j++) { 
			if (words[i][j] == ',') 
				words[i][j] = '\0'; 
		} 
 	} 
printf("\nPristavka :  "); 
scanf("%s", &pristavka); 
for (i = 0; i < sizeof(words) / sizeof(words[0]); ++i) { 
	if (strncmp(words[i], pristavka, strlen(pristavka)) == 0) 
		puts(words[i]); 
 	} 
} 
*/

/* 2
int main() { 
char words[100][20]; 
int i, j, n, count = 1; 
printf("Vvedite kol-vo slov : "); 
scanf("%d", &n); 
printf("Vvedite text :  \n"); 
for (i = 0; i < n; i++) 
	scanf("%s", words[i]); 
for (i = 0; i < n; i++) { 
	for (j = i + 1; j < n; j++) { 
		if (strcmp(words[i], words[j]) == 0) { 
			count += 1; 
			words[j][0] = '\0'; 
			} 
		} 
	if (words[i][0] != '\0') 
	printf("%s %d\n", words[i], count); 
	count = 1; 
	}  
} 
*/

/* 3
int main() { 
char temp[20], surname[15][20]; 
int n, i, j; 
printf("Vvedite kol-vo familiy : "); 
scanf("%d", &n); 
printf("VVedite familii : \n"); 
for (i = 0; i < n; i++) 
	scanf("%s", &surname[i]); 
for (i = 0; i < n; i++) { 
	for (j = 0; j < 20; j++) { 
		if (surname[i][j] == ',') 
			surname[i][j] = '\0'; 
		} 
	} 
for (i = 0; i < n; i++) { 
	for (j = 0; j < n - 1; j++) { 
		if (strcmp(surname[j], surname[j + 1]) > 0) { 
			strcpy(temp, surname[j]); 
			strcpy(surname[j], surname[j + 1]); 
			strcpy(surname[j + 1], temp); 
			} 
		} 
	} 
for (i = 0; i < n; i++) 
printf("%s ", surname[i]); 
}
*/
