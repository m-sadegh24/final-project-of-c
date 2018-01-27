#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <time.h>
#include <string.h>

typedef struct node{
	char word[50];
	struct node *next;
}node_info;

node_info *created(void){                                           //creat a nodelist
	node_info *nn=NULL;
	nn=(node_info*)malloc(sizeof(node_info));                         
	nn->next=NULL;
	return nn;
}

void add_end(node_info *head,char i[]){                      //add a member at the end of list
	node_info *cont=head;
	while(cont->next!=NULL){
		cont=cont->next;
	}
	cont->next=(node_info*)malloc(sizeof(node_info));
	cont=cont->next;
	for(int k=0 ; k<50 ; k++){
	cont->word[k]=i[k];
	}
	cont->next=NULL;
	
		
}

int pop(node_info ** head) {
    char retval ;
    node_info * next_node = NULL;

    if (*head == NULL) {
        return -1;
    }

    next_node = (*head)->next;
    free(*head);
    *head = next_node;

    return retval;
}

int remove_by_index(node_info ** head, int n) {
    
   
    node_info * current = *head;
    node_info * temp_node = NULL;

    if (n == 0) {
        return pop(head);
    }

    for (int i = 0; i < n-1; i++) {
        if (current->next == NULL) {
            return -1;
        }
        current = current->next;
    }

    temp_node = current->next;
    current->next = temp_node->next;
    free(temp_node);

}


void top_10()
{
  int i=0,j=0,k=0,score[20];
  for(int l=0 ; l<20 ; l++)
  	score[l]=0;
  	
  int temp;
  int temp1;
  char name[20];
  FILE* tp10;
  
  tp10=fopen("D:\\score.txt","a+");
  while(!feof(tp10)){
     fscanf(tp10,"%s %d",&name , &score[i]);            									 
  	 i++;
  }
  fclose(tp10);
  
  for(j=0;j<19;j++){
       for(k=j+1;k<20;k++){
       if(score[j]<score[k]){
         temp=score[j];
         score[j]=score[k];
         score[k]=temp;
       }
     }
  }
    
  j=0;                                            
  if(i<10){
    while(j<i){
    tp10=fopen("D:\\score.txt","r+");
    while(!feof(tp10)){
      fscanf(tp10,"%s %d",&name , &temp1);
      if(score[j]==temp1){
        printf("%s %d\n",name,temp1);
        break;
      }

    }
    fclose(tp10);
    j++;
  }
  }
  else{

  while(j<10){
    tp10=fopen("D:\\score.txt","a+");
    while(!feof(tp10)){
      fscanf(tp10,"%s %d",&name , &temp1);
      if(score[j]==temp1){
        printf("%s %d\n",name,temp1);
        break;
      }

    }
    j++;
    fclose(tp10);
  }
  }
  fclose(tp10);
}

void p1(void){

	printf("           +-----+\n");
	printf("           | . . |\n");
	printf("           |  |  |\n");
	printf("           | --- |\n");
	printf("           +-----+\n");
	printf("             | |  \n");
	printf("        +-----------+ \n");
	printf("       /|           |\\\ ");
	printf("\n");
	printf("      / /           \\ \\ ");
	printf("\n");
	printf("     / /|           |\\ \\ ");
	printf("\n");
	printf("        |           | \n");
	printf("        |           | \n");
	printf("        |           | \n");
	printf("        +-+-+---+-+-+ \n");
	printf("           | | | | \n");
	printf("           | | | | \n");
	printf("           | | | | \n");
	printf("           | | | | \n");
	printf("  /\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\  ");
	printf("\n");
	printf("  //////////////////////////  ");
	printf("\n");
	printf("  \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\ ");
}

void p2(void){

	printf("           +-----+\n");
	printf("           | o o |\n");
	printf("           |  |  |\n");
	printf("           | --- |\n");
	printf("           +-----+\n");
	printf("             | |  \n");
	printf("        +-----------+ \n");
	printf("       /|           |\\\ ");
	printf("\n");
	printf("      / /           \\ \\ ");
	printf("\n");
	printf("     / /|           |\\ \\ ");
	printf("\n");
	printf("        |           | \n");
	printf("        |           | \n");
	printf("        |           | \n");
	printf("        +-+-+---+-+-+ \n");
	printf("  /\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\  ");
	printf("\n");
	printf("  //////////////////////////  ");
	printf("\n");
	printf("  \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\ ");
}

void p3(void){

	printf("           +-----+\n");
	printf("           | 0 0 |\n");
	printf("           |  |  |\n");
	printf("           | --- |\n");
	printf("           +-----+\n");
	printf("             | |  \n");
	printf("        +-----------+ \n");
	printf("       /|           |\\\ ");
	printf("\n");
	printf("      / /           \\ \\ ");
	printf("\n");
	printf("     / /|           |\\ \\ ");
	printf("\n");
	printf("  /\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\  ");
	printf("\n");
	printf("  //////////////////////////  ");
	printf("\n");
	printf("  \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\ ");
}

void p4(void){

	printf("           +-----+\n");
	printf("           | O O |\n");
	printf("           |  |  |\n");
	printf("           | --- |\n");
	printf("           +-----+\n");
	printf("             | |  \n");
	printf("  /\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\  ");
	printf("\n");
	printf("  //////////////////////////  ");
	printf("\n");
	printf("  \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\ ");
}

void p5(void){

	printf("           +-----+\n");
	printf("           | * * |\n");
	printf("           |  |  |\n");
	printf("  /\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\  ");
	printf("\n");
	printf("  //////////////////////////  ");
	printf("\n");
	printf("  \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\ ");
}

void p6(void){

	printf("          Bye Bye!!!\n");
	printf("  /\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\  ");
	printf("\n");
	printf("  //////////////////////////  ");
	printf("\n");
	printf("  \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\ ");
}
	

	
main(){
	srand(time(0));
	
	int z=1,s=1,t=0,err=0,p=1,w=0,uns=0,ex=0,sc=0,cnt=0,r,i=0,m=0,time1,time2,score_max=0,new_top=0;
	char c,name[10],top[20],guess[50]={'\0'},name_check[10],word[50],word_i[50];
	FILE *to,*ac,*mo,*an,*sp,*scoref;
	FILE *new_to;
	char newn_topic[10];
	float score=0;
	
	scoref=fopen("D:\\score.txt","r+");
	to=fopen("D:\\topic.txt","r+");                                 //open the file of topics
	if (to==NULL){
		printf("not open");
		return -1;
	}
		
	printf("Enter Your Name\n");                         
	scanf("%s",&name);
	printf("\n");
	printf("Welcome %s\n",name ); 
	printf("[1] new game\n");
	printf("[2] resume game\n");
	printf("[3] Show Top_10 \n");
	scanf("%d",&s);
	
	system("cls");
	
	if(s==3){
		top_10();
		printf("\n\n");
}	
	Sleep(8000);
	system("cls");
	
	if(s==2)
	{	int n=0;
		while(!feof(scoref)){                                       //continue or new Game
			fscanf(scoref,"%s %d",&name_check , &sc);   
			while(name_check[i]!='\0'){
			if(name_check[i]!=name[i])
				n++;
				i++;
			}	
			if(n==0){
				score_max=sc;
				 break;
			}
			n=0;
			i=0;
		}
			n=0;
			printf("%d\n",score_max);
		}
	fclose(scoref);	
	
	while(1){
	to=fopen("D:\\topic.txt","r+");
	printf("plz choose a topic\n\n");
	
	while(!feof(to)){
		fgets(top, 10 , to);
		printf("%s",top);
	}
	
	fclose(to);
	
		
	
	printf("Do You Want To Created New Topic (y/n)\n");                   // enter new topic
	scanf("%s",&c);
	if(c=='y'){
		char new_word[]={'\0'};
		

		while(1){
			new_to=fopen("D:\\new.txt","a+");
			printf("Enter Words: \n");
			scanf("%s",&new_word);
	
			fseek(new_to,0,SEEK_END);
			fprintf(new_to,"%s \n",new_word);

			fclose(new_to);
			printf("Do You Have Any Words(y/n)\n");
			scanf("%s",&c);
			if(c=='n')
				break;
		}
		new_top=1;
		printf("Enter Your Topic\n\n");
		scanf("%s",&newn_topic);
		
	}
	if(new_top==1)
		printf("(e) %s\n",newn_topic);

		
	node_info *head=created();
	
	while (z){                   								    //open the file and creat nodelist of word
		printf("plz enter correct letter\n");                                     
		scanf("%s",&c);  
		                    
		switch (c){
			case 'a':
				sp=fopen("D:\\sport.txt","r+");
				if (sp==NULL){
				printf("not open");
				return -1;
				}
				z=0;
				while(!feof(sp)){
				fscanf(sp,"%s",word);
				add_end(head,word);
				t++;
				}
				fclose(sp);
				break;
				
			case 'b':
				mo=fopen("D:\\movie.txt","r+");
				if (mo==NULL){
				printf("not open");
				return -1;
				}
				z=0;
				while(!feof(mo)){
				fscanf(mo,"%s",word);
				add_end(head,word);
				t++;
				}
				fclose(mo);
				break;
				
			case 'c':
				an=fopen("D:\\animal.txt","r+");
				if (an==NULL){
				printf("not open");
				return -1;
				}
				z=0;
				while(!feof(an)){
				fscanf(an,"%s",word);
				add_end(head,word);
				t++;
				}
				fclose(an);
				break;
					
			case 'd':
				ac=fopen("D:\\actor.txt","r+");
				if (ac==NULL){
				printf("not open");
				return -1;
				}
				z=0;
				while(!feof(ac)){
				fscanf(ac,"%s",word);
				add_end(head,word);
				t++;
				}
				fclose(ac);
				break;	
			
			default:
				if(new_top==1){
				new_to=fopen("D:\\new.txt","r+");
				if (new_to==NULL){
				printf("not open");
				return -1;
				}
				z=0;
				while(!feof(new_to)){
				fscanf(new_to,"%s",word);
				add_end(head,word);
				t++;
				}
				fclose(new_to);
				break;	
				}
			}
	}
	z=1;
	time1=time(NULL);
	
	Sleep(800);
	system("cls");
	
	printf("\n   GAME STARTED   \n");
	
	Sleep(800);
	system("cls");
	
	
while(1){

	r = rand() %(t+1) ;             //choose a random word of list
	if(r==0)
		r=r+1; 
		
			printf("node list:%d\n",t) ;
			printf("adad random:%d\n",r) ;               

	node_info* current=head;
	i=0;
	while(i!=r){
		current=current->next;
		i++;
	}
	
	m=0;	
	while(current->word[m]!='\0'){
			word_i[m]=current->word[m];
			m++;}
			
	word_i[m]='\0';
			m=0;
			
			while(word_i[m]!='\0'){
				printf("%c",word_i[m]);
				m++;}
				
		printf("\n");
				
	cnt=0;                                               //cont number of letter 
	cnt=strlen(word_i);
	
	p1();                                                   //show start of word
	printf("\n");
	printf("\n");
	for(int j=0 ; j<cnt ; j++){
		printf("_ ");
	}
	printf("\n");
	
	while(w==0){  	                                      //get letters over and over
	printf("\n plz enter a letter \n");                          
	scanf("%s",&c);
	
	if(c=='Q'){
	    ex=1;
	    system("cls");
		break;
	}
	
		Sleep(800);
		system("cls");
	
	for(int j=0 ; j<cnt ; j++){
		if(word_i[j]==c){
			err=1;
			guess[j]=c;		
		}
	}
	
	if(err==0){
		uns++;	
		p++;
	}
		
	
	switch(p){
		case 1:
			p1();
			printf("\n");
			for(int j=0 ; j<cnt ; j++){
				if(guess[j]=='\0')
					printf("_ ");
				else
					printf("%c ",guess[j]);	
			}
			break;
			
		case 2:
			p2();
			printf("\n");
			for(int j=0 ; j<cnt ; j++){
				if(guess[j]=='\0')
					printf("_ ");
				else
					printf("%c ",guess[j]);	
			}
			break;
		case 3:
			p3();
			printf("\n");
			for(int j=0 ; j<cnt ; j++){
				if(guess[j]=='\0')
					printf("_ ");
				else
					printf("%c ",guess[j]);	
			}
			break;	
			
		case 4:
			p4();
			printf("\n");
			for(int j=0 ; j<cnt ; j++){
				if(guess[j]=='\0')
					printf("_ ");
				else
					printf("%c ",guess[j]);	
			}
			break;	
		case 5:
			p5();
			printf("\n");
			for(int j=0 ; j<cnt ; j++){
				if(guess[j]=='\0')
					printf("_ ");
				else
					printf("%c ",guess[j]);	
			}
			break;	
		case 6:
			p6();
			printf("\n");
			for(int j=0 ; j<cnt ; j++){
				if(guess[j]=='\0')
					printf("_ ");
				else
					printf("%c ",guess[j]);	
			}			
		}
	
	err=0;
	int s=0;
	if(p!=6){
		for(int k=0 ; k<cnt ; k++){
			if(guess[k]=='\0')
				s++;
		}
		if(s==0)
			w=1;
	}
	else 
		w=2;
		
	if(w==1)
		printf("\n\n You Succeed \n");	
	else if(w==2)
		printf("\n\n fail \n");
		
}

	if(ex==1)
		break;
		
	if(w==1){                                                //calculat score
		score+=3*cnt-uns;
	}
	
	w=0;
	t--;
	p=1;
	uns=0;
	for(int l=0 ; l<50 ; l++)
		guess[l]='\0';
	
	node_info **head1=&head;                                //delet word of nodelist
	remove_by_index(head1,r);
	
	printf("\n Do You Want To Continue Word Of This Topic?(y/n) \n");
	scanf("%s",&c);
	system("cls");
	if(c=='n')
		break;

	if(t==0){
		break;
	}
}	
	time2=time(NULL);
    float u1=time2-time1;;
    u1=u1/3600.0;
    score=score/u1;
	printf("%f",score);                                     
	if(score_max<score)
		score_max=score;
		
	
	t=0;
	w=0;
	p=1;
	s=1;
	ex=0;
	err=0;
	score=0;
	printf("\n Do You Want To Continue Game?(y/n) \n");
	scanf("%s",&c);
	system("cls");
	if(c=='n')
		break;

}

	printf("Your Best Score Is : %d\n",score_max);

	printf("Do You Want To Save It?(y/n)");
		scanf("%s",&c);
	if(c=='y'){
			scoref=fopen("D:\\score.txt","a+");                         //Save Game
			fseek(scoref,0,SEEK_END);
			fprintf(scoref,"%s %d",name , score_max);   	        
			}
	}
	
	
	
		

