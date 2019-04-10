#include <stdio.h>

int main() {
    
    char message[] = "ABCDEFGHIJKLMNOPQRSTUVWYZ";
    int i, x, key;
    
    printf("Enter a message: ");
    scanf("%s", message);
    
    printf("Enter a key: ");
    scanf("%d", &key);
    
    printf("Choose a task: \n");
    printf("1 Encrypt rotation cypher \n");
    printf("2 Decrypt rotation cypher \n");
    printf("3 Encrypt substition cypher \n");
    printf("4 Decrypt substition cypher \n");
    printf("Task: ");
    scanf("%d", &x);
    
    switch(x){
        case 1:
          for(i=0; message[i] != '\0'; i++)
          if(message[i] >= 'A' && message[i] <= 'Z')
          {
            message[i] = message[i] + key;
            if(message[i] > 'Z')
            {
              message[i] = message[i] - 26;
            }
          }
            printf("Encryption: %s", message);
            break;
        case 2:
          for(i=0; message[i] != '\0'; i++)
          if(message[i] >= 'A' && message[i] <= 'Z')
          {
            message[i] = message[i] - key;
            if(message[i] < 'A')
            {
              message[i] = message[i] + 26;
            }
          }
            printf("Decryption: %s", message);
            break;
    } 

  return 0;
}
