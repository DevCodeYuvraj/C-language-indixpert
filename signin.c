#include <stdio.h>
#include <string.h>
char newusername[20],password[10],password1[10];

void registration();
void login();
int main()
{
    int option;
    while(1)
    {
        printf("\n---- Bus Reservation System -------\n")
        printf("\n1. Sign Up");
        printf("\n2. Sign In");
        printf("\n3. Exit");
        printf("\nPlease enter your choice:");
        scanf("%d",&option);
        if(option==1)
        {
            registration();
        }
        else if(option==2)
        {
            login();
            break;
        }
        else if(option==3)
        {
            break;
        }
        else
        {
            printf("\nPlease enter correct option(1-3):");
        }

    }    
    return 0;
}
void registration()
{
    while(1)
    {
        printf("\n*****User Registration*****");
        printf("\nPlease create a user name:");
        scanf(" %s", &newusername);
        // printf("%s",newusername);
        printf("\nPlease create your password:");
        scanf(" %[^\n]", &password);
        // printf(" %s",password);
        printf("\nPlease confirm password:");
        scanf(" %[^\n]", &password1);
        // printf("%s",password1);
        if(strcmp(password,password1)==0)
        {
            printf("\nAccount Created\n");
            break;
        }
        else
        {
            printf("\nPlease check your password:");
        }
    }
        
}

void login()
{
    int choice;
    char username[20], pass[20];
    while (1)
    {
        printf("\n1. login");
        printf("\n2. exit");
        printf("\nPlease enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            printf("\nPlease enter user name:");
            scanf(" %[^\n]", &username);
            // printf("%s",username);
            printf("\nPlease enter password:");
            scanf(" %[^\n]", &pass);
            // printf("%s",pass);
            if(strcmp(username,newusername)==0 && strcmp(pass,password)==0)
            {
                printf("\nlogin successful, welcome %s", username);
                flag=1;
                break;
            }
            
        }
        else if (choice == 2)
        {
            break;
        }
        else
        {
            printf("please enter correct choice");
        }
    }
}