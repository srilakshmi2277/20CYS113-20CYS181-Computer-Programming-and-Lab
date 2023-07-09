#include<stdio.h>
#define MAX_STUDENTS 3
struct student{
    char name[30];
    int age;
    enum Score{
        A,B,C,D,F
    }score;
}s[MAX_STUDENTS];

int main(){
    int choice,list,n;
   n=0;
    do{
    scanf("%d",&choice);
    
      switch(choice){
          
        case 1:
         if (n < MAX_STUDENTS) {
                   
                    scanf("%s", s[n].name);
                    
                    scanf("%d", &s[n].age);
                    
                    char score;
                    scanf(" %c", &score);

                    switch (score) {
                        case 'A':
                            s[n].score = 0;
                            break;
                        case 'B':
                            s[n].score = 1;
                            break;
                        case 'C':
                            s[n].score = 2;
                            break;
                        case 'D':
                            s[n].score = 3;
                            break;
                        case 'F':
                            s[n].score = 4;
                            break;
                        default:
                            printf("Invalid score. \n");
                            
                            break;
                    }

                    printf("Student added successfully.\n");
                    n++;
                }  else {
                     printf("Maximum number of students reached.\n");
                     }
        break;
        
        case 2:
        printf("List of students:\n");
        for(int i=0;i<n;i++){
          printf("Student %d\n",i+1);
            printf("Name: %s\n",s[i].name);
            printf("Age: %d\n",s[i].age);
           switch (s[i].score){
           case 0:
            printf("Score: A\n");
            break;
            case 1:
            printf("Score: B\n");
            break;
            case 2:
            printf("Score: C\n");
            break;
             case 3:
            printf("Score: D\n");
            break;
             case 4:
            printf("Score: F\n");
            break;
            default:
            printf("enter valid grade\n");
            break;
           }
        }
        break;
        
        case 3:
              printf("Highest-scoring student:\n");
          break;
          
         case 4:
                printf("Exiting the program. Thank you for using our system!\n");
                break;
                
        default:
          printf("Invalid choice. Please enter a valid option.\n");
       break;
      }
    }while(choice!=4);
    
    return 0;
}
