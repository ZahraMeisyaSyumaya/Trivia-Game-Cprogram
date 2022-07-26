//Grup 19 Kelas Pemrograman Lanjut - 02
//Zahra Meisya Syumaya (1906300870)
//Zidan Masyudul Haq(1906355541)

#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

void view_score();
void help();
void calc_score(float, char[]);

 int main(){
 	int i,r, topic, counterscore;
 	char option, player[20];
 	float score;
	int random[10];
	int j,temp;
	srand(time(0));
 	mainmenu:
    system("cls");

    printf("\n\n\t\t\t\t\t\t");
 

    printf("\n\t\t\t\t" );
    printf("\n\t\t\t\t ########################################\n");
	printf("\t\t\t\t   -ossyo/`    s/      s:  -y`  +sssssyy`     \n");           
	printf("\t\t\t\t .hy:   .od/   ho      d+  :m`       :m- 	  \n");      
 	printf("\t\t\t\t ds       :N:  ho      d+  :m`      /m-       \n");          
	printf("\t\t\t\t`N/       `mo  ho      d+  :m`     +d.        \n");         
	printf("\t\t\t\t yh`  :.  +m.  hs      m/  :m`    od.   	  \n");          
	printf("\t\t\t\t  +hnm-ds/m    :mo.  -yd`  :m`   sd.          \n");          
	printf("\t\t\t\t    **** *bb    `+syyo/    -y`  :yssssss-     \n");
	printf("\n\t\t\t\t ####################################");
    printf("\n\n\t\t\t	    WORLD GENERAL KNOWLEDGE QUIZ	");
	printf("\n\t\t\t\t =====================================");
    printf("\n\t\t\t\t > Press P to play the game");
    printf("\n\t\t\t\t > Press V to view the highest score  ");
    printf("\n\t\t\t\t > press H for help            ");
    printf("\n\t\t\t\t > press X to quit             "); 
    printf("\n\n\t\t\t\t ####################################");
	option=toupper(getch());
    if (option== 'V'){
    	view_score();
    	goto mainmenu;
	}
	else if(option == 'H'){
		help(); getch();
		goto mainmenu;
	}
	else if (option=='X'){
	exit(1);
    }
	else if(option=='P'){
    	program:
    	counterscore=0;	
    	system("cls");
    	printf("\n\n\n\n\n\n\n\n\t\t\t\t =====================================\n");
    	printf("\t\t\t\t Your name:");
     	gets(player);
    	system ("cls");
    	game:
    	printf("\n\t\t\t\t =====================================");
    	printf("\n\t\t\t\t Pick your topic :\n");
    	printf("\n\n\t\t\t\t A. World Geography and History\n\n\t\t\t\t B. Famous People\n\n\t\t\t\t C. Film and Music");
    	printf("\n\n\t\t\t\t Press any key to go back to main menu..");
    	printf("\n\t\t\t\t =====================================");
		topic = toupper(getch());
		
    	if (topic == 'A'){
    		if (counterscore==10 || counterscore==20 ){
    			counterscore=counterscore;
			}
			else if(counterscore>10 && counterscore<20){
				counterscore=10;
			}
			else if(counterscore>20 && counterscore<30){
				counterscore=20;
			}
			else{
				counterscore=0;
			}
			
    		for(i=0;i<10;i++){	
    			random[i] = i+1;
  		  	}
  		  	
    		for(i=0;i<10;i++){
    			j = (rand()%9)+1;
    			temp = random[i];
    			random[i]= random [j];
    			random[j]= temp;
			}
    		
    		for (i=0;i<10;i++){
			system("cls");
    			switch(random[i]){
    				
    				case 1:
    					printf("\n\nWhat was the name of the struggle between Soviet Union and United States in 1947 - 1991?");
						printf("\n\nA.World War II\t\tB.The Civil War\n\nC.The Cold War\t\tD.World War I");
						if (toupper(getch())=='C'){
			   			printf("\n\nCorrect!!!");
						counterscore++;
			    		getch();
			    		break;
						}
						else{
		           		printf("\n\nWrong Answer!!!");
		           		getch();
						goto score;
		       			break;
		      		 	}
		      		case 2:
					   printf("\n\nWhen was The Great Depression happened?");
					   printf("\n\nA. 1892 - 1921\t\tB. 1929 - 1933\n\nC.1920-1933\t\tD.1959 - 1967");
					   	if (toupper(getch())=='B'){
			   			printf("\n\nCorrect!!!");
						counterscore++;
			    		getch();
			    		break;
						}
						else{
		           		printf("\n\nWrong Answer!!!");
		           		getch();
						goto score;
		       			break;
		      		 	}
		      		case 3:
					   printf("\n\nWhat is the capital of Germany?");
					   printf("\n\nA. Munich\t\tB.Berlinn\n\nC.Edinburgh\t\tD.Dortmund");
					   	if (toupper(getch())=='B'){
			   			printf("\n\nCorrect!!!");
						counterscore++;
			    		getch();
			    		break;
						}
						else{
		           		printf("\n\nWrong Answer!!!");
		           		getch();
						goto score;
		       			break;
		      		 	}
					case 4:
					   printf("\n\nwhich battle marked the end of napoleonic era?");
					   printf("\n\nA.Battle of Stalingrad\t\tB.Battle of Hastingsn\n\nC.Battle of Kursk\t\tD.Battle of Waterloo");
					   	if (toupper(getch())=='D'){
			   			printf("\n\nCorrect!!!");
						counterscore++;
			    		getch();
			    		break;
						}
						else{
		           		printf("\n\nWrong Answer!!!");
		           		getch();
						goto score;
		       			break;
		      		 	}	
					case 5:
					printf("\n\nHitler launched operation barbarossa in 1941 againts?");
					   printf("\n\nA.France\t\tB.Germanyn\n\nC.Soviet Union\t\tD.United States");
					   	if (toupper(getch())=='C'){
			   			printf("\n\nCorrect!!!");
						counterscore++;
			    		getch();
			    		break;
						}
						else{
		           		printf("\n\nWrong Answer!!!");
		           		getch();
						goto score;
		       			break;
		      		 	}
					case 6:
					printf("\n\nWhite House, the residance of President of the USA is located at?");
					   printf("\n\nA.Washington DC\t\tB.New York\n\nC.California\t\tD.New Mexico");
					   	if (toupper(getch())=='A'){
			   			printf("\n\nCorrect!!!");
						counterscore++;
			    		getch();
			    		break;
						}
						else{
		           		printf("\n\nWrong Answer!!!");
		           		getch();
						goto score;
		       			break;
		      		 	}	 
					case 7:
					printf("\n\nWho is the last emperror of China?");
					   printf("\n\nA.Wang Mang\t\tB.Xianfeng\n\nC.Henry Puyi\t\tD.Wu Zetian");
					   	if (toupper(getch())=='C'){
			   			printf("\n\nCorrect!!!");
						counterscore++;
			    		getch();
			    		break;
						}
						else{
		           		printf("\n\nWrong Answer!!!");
		           		getch();
						goto score;
		       			break;
		      		 	}	
					case 8:
					printf("\n\nIn European History, the year 1848 is known as?");
					   printf("\n\nA.Year of Freedom\t\tB.Year of Sarrow\n\nC.Year of Revolution\t\tD.Year of Happiness");
					   	if (toupper(getch())=='C'){
			   			printf("\n\nCorrect!!!");
						counterscore++;
			    		getch();
			    		break;
						}
						else{
		           		printf("\n\nWrong Answer!!!");
		           		getch();
						goto score;
		       			break;
		      		 	}  
					case 9:
					printf("\n\nthe second world war ended in the year?");
					   printf("\n\nA.1945\t\tB.1958\n\nC.1944\t\tD.1920");
					   	if (toupper(getch())=='A'){
			   			printf("\n\nCorrect!!!");
						counterscore++;
			    		getch();
			    		break;
						}
						else{
		           		printf("\n\nWrong Answer!!!");
		           		getch();
						goto score;
		       			break;
		      		 	}   	  
					case 10:
					printf("\n\nwhat is the largest river in the world?");
					   printf("\n\nA.Amazon\t\tB.Brahmaputra\n\nC.Mississippi\t\tD.Nile");
					   	if (toupper(getch())=='D'){
			   			printf("\n\nCorrect!!!");
						counterscore++;
			    		getch();
			    		break;
						}
						else{
		           		printf("\n\nWrong Answer!!!");
		           		getch();
						goto score;
		       			break;
		      		 	}  
		      		 	
					}
    		}
		}
		
		else if (topic == 'B'){
				if (counterscore==10 || counterscore==20 ){
    			counterscore=counterscore;
			}
			else if(counterscore>10 && counterscore<20){
				counterscore=10;
			}
			else if(counterscore>20 && counterscore<30){
				counterscore=20;
			}
			else{
				counterscore=0;
			}
			
    		for(i=0;i<10;i++){	
    			random[i] = i+1;
  		  	}
  		  	
    		for(i=0;i<10;i++){
    			j = (rand()%9)+1;
    			temp = random[i];
    			random[i]= random [j];
    			random[j]= temp;
			}
    		
    		for (i=0;i<10;i++){
			system("cls");
    			switch(random[i]){
    				case 1:
					printf("\n\nWho discovered America?");
					   printf("\n\nA.Bortolomeus Diaz\tB.Columbus\n\nC.James Cook\t\tD.Edward Bransfield");
					   	if (toupper(getch())=='B'){
			   			printf("\n\nCorrect!!!");
						counterscore++;
			    		getch();
			    		break;
						}
						else{
		           		printf("\n\nWrong Answer!!!");
		           		getch();
						goto score;
		       			break;
		      		 	}
					case 2:
					printf("\n\nWho is known as the Father of Medicine?");
					   printf("\n\nA.Hippocrates\t\tB.Hesoid\n\nC.Hippocrane\t\tD.Edwardo");
					   	if (toupper(getch())=='A'){
			   			printf("\n\nCorrect!!!");
						counterscore++;
			    		getch();
			    		break;
						}
						else{
		           		printf("\n\nWrong Answer!!!");
		           		getch();
						goto score;
		       			break;
		      		 	}  
					case 3:
					printf("\n\nIn what modern-day country was Karl Marx, the communist philosopher, born?");
					   printf("\n\nA.Germany\t\tB.Russia\n\nC.France\t\tD.China");
					   	if (toupper(getch())=='A'){
			   			printf("\n\nCorrect!!!");
						counterscore++;
			    		getch();
			    		break;
						}
						else{
		           		printf("\n\nWrong Answer!!!");
		           		getch();
						goto score;
		       			break;
		      		 	}  
					case 4:
					printf("\n\nWho's the richest person in the world?");
					   printf("\n\nA.Mark Zuckerberg \tB.Elon Musk\n\nC.Bill Gates\t\tD.Jeff Bezos");
					   	if (toupper(getch())=='D'){
			   			printf("\n\nCorrect!!!");
						counterscore++;
			    		getch();
			    		break;
						}
						else{
		           		printf("\n\nWrong Answer!!!");
		           		getch();
						goto score;
		       			break;
		      		 	}
					case 5:
					printf("\n\nWho is the founder of Facebook?");
					   printf("\n\nA.Brandon Beck\t\tB.Lary Page\n\nC.Mark Zuckerberg\tD.Ma Huateng");
					   	if (toupper(getch())=='C'){
			   			printf("\n\nCorrect!!!");
						counterscore++;
			    		getch();
			    		break;
						}
						else{
		           		printf("\n\nWrong Answer!!!");
		           		getch();
						goto score;
		       			break;
		      		 	}  
					case 6:
					printf("\n\nWho is the father of constitution?");
					   printf("\n\nA.James Madison\t\tB.Herodotus\n\nC.Antoine Lavoisier\tD.Werner Heisenberg");
					   	if (toupper(getch())=='A'){
			   			printf("\n\nCorrect!!!");
						counterscore++;
			    		getch();
			    		break;
						}
						else{
		           		printf("\n\nWrong Answer!!!");
		           		getch();
						goto score;
		       			break;
		      		 	} 
					case 7:
					printf("\n\nWho sang Happy Birthday to John F. Kennedy in 1963?");
					   printf("\n\nA.Ted Kennedy\t\tB.Richard Nixon\n\nC.His Wife\t\tD.Marilyn Monroe");
					   	if (toupper(getch())=='D'){
			   			printf("\n\nCorrect!!!");
						counterscore++;
			    		getch();
			    		break;
						}
						else{
		           		printf("\n\nWrong Answer!!!");
		           		getch();
						goto score;
		       			break;
		      		 	} 
					case 8:
					printf("\n\nWho is the CEO of WWE now?");
					   printf("\n\nA.Triple H\t\tB.Vince McMahon\n\nC.The Rock\t\tD.John Cena");
					   	if (toupper(getch())=='B'){
			   			printf("\n\nCorrect!!!");
						counterscore++;
			    		getch();
			    		break;
						}
						else{
		           		printf("\n\nWrong Answer!!!");
		           		getch();
						goto score;
		       			break;
		      		 	} 
					case 9:
					printf("\n\nWho is the mystical adviser in the court of Czar Nicholas II of Russia.?");
					   printf("\n\nA.konstantin rokossovsky\t\tB.Vladimir Putin\n\nC.William Cecil\t\t\t\t\tD.Rasputin");
					   	if (toupper(getch())=='D'){
			   			printf("\n\nCorrect!!!");
						counterscore++;
			    		getch();
			    		break;
						}
						else{
		           		printf("\n\nWrong Answer!!!");
		           		getch();
						goto score;
		       			break;
		      		 	} 
					case 10:
					printf("\n\nwho's the writer of harry potter?");
					   printf("\n\nA.J. K. Rowling\t\tB.Stephen King\n\nC.Oscar Wilde\t\tD.Lucy Gray");
					   	if (toupper(getch())=='A'){
			   			printf("\n\nCorrect!!!");
						counterscore++;
			    		getch();
			    		break;
						}
						else{
		           		printf("\n\nWrong Answer!!!");
		           		getch();
						goto score;
		       			break;
		      		 	}  	    	    	    	    	   	     	   
						   	   	     
				}
			}
		}
			
		
			else if (topic == 'C'){
			if (counterscore==10 || counterscore==20 ){
    			counterscore=counterscore;
			}
			else if(counterscore>10 && counterscore<20){
				counterscore=10;
			}
			else if(counterscore>20 && counterscore<30){
				counterscore=20;
			}
			else{
				counterscore=0;
			}
	
    		for(i=0;i<10;i++){	
    			random[i] = i+1;
  		  	}
  		  	
    		for(i=0;i<10;i++){
    			j = (rand()%9)+1;
    			temp = random[i];
    			random[i]= random [j];
    			random[j]= temp;
			}
    		
    		for (i=0;i<10;i++){
			system("cls");
    			switch(random[i]){
    				case 1:
					printf("\n\nWhich band had a huge international hit album in 2002 with the record A Rush of Blood to the Head?");
					   printf("\n\nA.Coldplay\t\tB.Linkin Park\n\nC.Nirvana\t\tD.Green Days");
					   	if (toupper(getch())=='A'){
			   			printf("\n\nCorrect!!!");
						counterscore++;
			    		getch();
			    		break;
						}
						else{
		           		printf("\n\nWrong Answer!!!");
		           		getch();
						goto score;
		       			break;
		      		 	}
					case 2:
					printf("\n\nWho is the lead singer of The Rolling Stones?");
					   printf("\n\nA.Keith Richards\tB.Freddie Mercury\n\nC.Mick Jagger\t\tD.Robert Plant");
					   	if (toupper(getch())=='C'){
			   			printf("\n\nCorrect!!!");
						counterscore++;
			    		getch();
			    		break;
						}
						else{
		           		printf("\n\nWrong Answer!!!");
		           		getch();
						goto score;
		       			break;
		      		 	}  
					case 3:
					printf("\n\nWhere is the band The Clash from?");
					   printf("\n\nA.London\t\tB.Edinburgh\n\nC.Los Angeles\t\tD.Athena");
					   	if (toupper(getch())=='A'){
			   			printf("\n\nCorrect!!!");
						counterscore++;
			    		getch();
			    		break;
						}
						else{
		           		printf("\n\nWrong Answer!!!");
		           		getch();
						goto score;
		       			break;
		      		 	}  
					case 4:
		      		 	printf("\n\nWhich is one of the bands below that started punk rock?");
					   	printf("\n\nA.The Who\t\tB.The Ramones\n\nC.One Direction\t\tD.Black Flag");
					   	if (toupper(getch())=='B'){
			   			printf("\n\nCorrect!!!");
						counterscore++;
			    		getch();
			    		break;
						}
						else{
		           		printf("\n\nWrong Answer!!!");
		           		getch();
						goto score;
		       			break;
		      		 	} 
					case 5:
					printf("\n\nWhich singer has the most UK Number One singles ever?");
					   printf("\n\nA.Elvis Presley\t\tB.Adele\n\nC.Dua Lipa\t\tD.Ed Sheeran");
					   	if (toupper(getch())=='A'){
			   			printf("\n\nCorrect!!!");
						counterscore++;
			    		getch();
			    		break;
						}
						else{
		           		printf("\n\nWrong Answer!!!");
		           		getch();
						goto score;
		       			break;
		      		 	}  
					case 6:
						printf("\n\nRich Brian's song that made him famous is'");
					   	printf("\n\nA.Bali\t\t\t\tB.100Degrees\n\nC.Glow like that\t\tD.Dat $tick");
					   	if (toupper(getch())=='D'){
			   			printf("\n\nCorrect!!!");
						counterscore++;
			    		getch();
			    		break;
						}
						else{
		           		printf("\n\nWrong Answer!!!");
		           		getch();
						goto score;
		       			break;
		      		 	}
					case 7:
					printf("\n\nWho played as Marty Mcfly in the movie Back to the Future?");
					   printf("\n\nA.Ralph Macchio\t\tB.River Phoenix\n\nC.Tom Hanks\t\tD.Michael J. Fox");
					   	if (toupper(getch())=='D'){
			   			printf("\n\nCorrect!!!");
						counterscore++;
			    		getch();
			    		break;
						}
						else{
		           		printf("\n\nWrong Answer!!!");
		           		getch();
						goto score;
		       			break;
		      		 	} 
					case 8:
					printf("\n\nthe movie Scarface (1983) set in which city?");
					   printf("\n\nA.Venice\tB.Los Angeles\n\nC.Cuba\t\tD.Miami");
					   	if (toupper(getch())=='D'){
			   			printf("\n\nCorrect!!!");
						counterscore++;
			    		getch();
			    		break;
						}
						else{
		           		printf("\n\nWrong Answer!!!");
		           		getch();
						goto score;
		       			break;
		      		 	} 
					case 9:
					printf("\n\nWho is the main character in the movie Dirty Harry?");
					   printf("\n\nA.Robert De Niro\t\tB.Arnold Schwarzenegger\n\nC.Clint Eastwood\t\tD.Adam Sandler");
					   	if (toupper(getch())=='C'){
			   			printf("\n\nCorrect!!!");
						counterscore++;
			    		getch();
			    		break;
						}
						else{
		           		printf("\n\nWrong Answer!!!");
		           		getch();
						goto score;
		       			break;
		      		 	} 
					case 10:
					printf("\n\nWho is Walter White's partner in the series Breaking Bad?");
					   printf("\n\nA.Hank Shrader\t\tB.Jesse Pinkman\n\nC.Michael Scofield\tD.Hector Salamanca");
					   	if (toupper(getch())=='B'){
			   			printf("\n\nCorrect!!!");
						counterscore++;
			    		getch();
			    		break;
						}
						else{
		           		printf("\n\nWrong Answer!!!");
		           		getch();
						goto score;
		       			break;
		      		 	}  	    	    	    	    	   	     	   
						   	   	     
				}
			}
			
		}
		else {
			goto mainmenu;
		}
		
		score:
		system ("cls");
		score = (float)counterscore*100;
		if(score>0 && score<1000 || score>1000 && score<2000 || score>2000 && score<3000 ){
			printf("\n\n\n\n\n\n\n\t\t\t\tTTTTTTTTTTTTTTTT CONGRATULATION TTTTTTTTTTTTTTTT");	
			printf("\n\t\t\t\t\t Your score : %.0f", score);
			goto back;
		}
		else if(score==1000){
			printf("\n\n\n\n\n\n\n\t\t\t\tTTTTTTTTTTTTTTTT CONGRATULATION TTTTTTTTTTTTTTTT");
	    	printf("\n\t\t\t\t YOU'VE REACHED THE END OF THE FIRST ROUND!!!!!!!");
	    	printf("\n\t\t\t\t\t Your score : %.0f\n\n",score);
			goto back;
		}
		else if(score==2000){
			printf("\n\n\n\n\n\n\n\t\t\t\tTTTTTTTTTTTTTTTT CONGRATULATION TTTTTTTTTTTTTTTT");
	    	printf("\n\t\t\t\t YOU'VE REACHED THE END OF THE SECOND ROUND!!!!!!!");
	    	printf("\n\t\t\t\t\t Your score : %.0f\n\n",score);
			goto back;
		}
		else if(score==3000){
			printf("\n\n\n\n\n\n\n\t\t\t\tTTTTTTTTTTTTTTTT CONGRATULATION TTTTTTTTTTTTTTTT");
	    	printf("\n\t\t\t\t YOU'VE REACHED THE END OF THE GAME!!!!!!!");
	    	printf("\n\t\t\t\t\t Your score : %.0f\n\n",score);
	    	printf(" \n\n\t\t\t\tPress any key if you want to go back to main menu");
			getch();
			calc_score(score, player);
			goto mainmenu;
		}
		else{
			printf("\n\n\n\n\n\n\n\t\tsorry.. better luck next time : ) ");
			printf(" \nt\tPress any key if you want to go back to main menu");
			getch();
			goto mainmenu;
		}
		
		back:
		if (score>0 && score<1000 || score>1000 && score<2000 || score>2000 && score<3000 ){
		printf("\n\n\t\tDo you want to reset the round or exit?\n\t\tPress Y to Reset or N to Exit");
		}
		else{
		printf("\n\n\t\tDo you want to continue the next round or exit?\n\t\tPress Y to continue or N to Exit");
		}
		if (toupper(getch())=='Y'){
			calc_score(score, player);
			goto game;
		}
		else{
			calc_score(score, player);
			goto mainmenu;
		}
		
		
		
	}
	else{
		system ("cls");
		printf("enter the right input.. press any key..\n");
		getch();
		goto mainmenu;
	}
     
 }
 

 
 
void view_score()
{
	system("cls");
	char playername[20];
	float scr;
	FILE *f;
	f=fopen("score.txt","r");
	
	if (f == NULL){
		printf("\n\n\n\n\n\n\t\t\tTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT");
		printf("\n\n\t\t\tNONE..");	
		printf("\n\n\t\t\tTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT");
		getch();
	}
	
	else{
	fscanf(f,"%s%f",&playername,&scr);
	printf("\n\n\n\n\n\n\t\t\tTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT");
	printf("\n\n\t\t\t %s has Reached the Highest Score %.0f",playername,scr);
	printf("\n\n\t\t\tTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT");
	fclose(f);
	getch();
	}
}
	


	    
void calc_score(float score, char players[20]){
	system("cls");
	float highscore;
	char plr[20];
	FILE *f;
	f=fopen("score.txt","r");
	fscanf(f,"%s%f",&plr,&highscore);
	if (score>=highscore)
	  { highscore=score;
	    fclose(f);
	    f=fopen("score.txt","w");
	    fprintf(f,"%s\n%.0f",players,highscore);
	    fclose(f);}
		}
	
void help(){
	system("cls");
    printf("\n\n                              HELP");
    printf("\n -------------------------------------------------------------------------");
    printf("\n >>	First of all, There would be 3 rounds available. You need to choose the topic you want ");
    printf("\n	to play first, and the topics are World  Geography and History, Famous People,  ");
    printf("\n	and the last one is Film and Music.");
	printf("\n >>	In this game, you will be ask 10 quetions in each topic.");
	printf("\n >>	Each right answer will be awarded 100 Points.");
	printf("\n >>	User allowed to reset the round when there's a wrong answer.");
	printf("\n >> 	There will be given 4 options and you have to press A, B ,C or D for the right option.");
	printf("\n >>	If you press anything other than all the options above, it will be considered wrong.");
}			    
