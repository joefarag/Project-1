#include <stdio.h>

int main() {
    
    char message[100];
    int i, x, key;
    
    printf("Enter a message: ");
    scanf("%s", &message); //inputs message
    
    printf("Enter a key: ");
    scanf("%d", &key); //inputs key
    
    printf("Choose a task: \n");
    printf("1 Encrypt rotation cypher \n");
    printf("2 Decrypt rotation cypher \n");
    printf("3 Encrypt substition cypher \n");
    printf("4 Decrypt substition cypher \n");
    printf("Task: ");
    scanf("%d", &x);
    
    switch(x){
        case 1: //encrypt rotation cypher
          for(i=0; message[i] != '\0'; i++)
          if(message[i] >= 'A' && message[i] <= 'Z')
          {
            message[i] = message[i] + key; //encrypts message
            if(message[i] > 'Z')
            {
              message[i] = message[i] - 26; //loops letter back to start of alphabet
            }
          }
            printf("Encryption: %s", message);
            break;
        case 2: //decrypt rotation cypher
          for(i=0; message[i] != '\0'; i++)
          if(message[i] >= 'A' && message[i] <= 'Z')
          {
            message[i] = message[i] - key; //decrypts message
            if(message[i] < 'A')
            {
              message[i] = message[i] + 26; //loops letter back to end of alphabet
            }
          }
            printf("Decryption: %s", message);
            break;
    } 

  return 0;
}
