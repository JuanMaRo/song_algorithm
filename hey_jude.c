#include <stdio.h>

void main() {
  int var;

  printf("\n");
  printf(" --- Hey Jude ---\n");
  printf("\n");

  for(var=1; var<=4; var++){
    if(var==1 || var==2 || var==3 || var==4){
      printf("Hey Jude, don't ");
      if(var==1 || var==4){
        printf("make it bad\n");
        printf("Take a sad song and make it better\n");
      }
      else if(var==2){
        printf("be afraid\n");
        printf("You were made to go out and get her\n");
      }
      else if(var==3){
        printf("let me down\n");
        printf("You have found her, now go and get her\n");
      }
    }

    if(var==1 || var==2 || var==3 || var==4){
      printf("Remember to ");
      if(var==1 || var==3){
        printf("let her into your heart\n");
      }
      else if(var==2 || var==4){
        printf("let her under you skin\n");
      }
    }

    if(var==1 || var==2 || var==3 || var==4){
      printf("Then you ");
      if(var==1 || var==3){
        printf("can start ");
      }
      else if(var==2 || var==4){
        printf("begin ");
      }
      printf("to make it better\n");
      printf("\n");
    }
  }
}
