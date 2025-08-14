#include <stdio.h>
#include <string.h>
char newusername[20], password[10], password1[10];
int seats1 = 30, ns1 = 0, remainingseats1, seats2 = 40, ns2 = 0, remainingseats2, seats3 = 25, ns3 = 0, remainingseats3;
int seats4 = 40, ns4 = 0, remainingseats4, seats5 = 50, ns5 = 0, remainingseats5, cs1 = 0, cs2 = 0, cs3 = 0, cs4 = 0, cs5 = 0;

int flag = 1;

void registration();
void login();
void bus101();
void bus102();
void bus103();
void bus104();
void bus105();
void menu();
void busStatus101();
void busStatus102();
void busStatus103();
void busStatus104();
void busStatus105();
void buscancel101();
void buscancel102();
void buscancel103();
void buscancel104();
void buscancel105();

int main()
{
    int option, busno;

    while (1)
    {
        option = 0;
        printf("\n---- Bus Reservation System -------\n");
        printf("\n1. Sign Up");
        printf("\n2. Sign In");
        printf("\n3. Exit");
        printf("\nPlease enter your choice:");
        if (scanf("%d", &option) == 1)
        {
            if (option == 1)
            {
                registration();
            }
            else if (option == 2)
            {
                login();
                break;
            }
            else if (option == 3)
            {
                break;
            }
            else
            {
                printf("\nPlease enter correct option(1-3):");
            }
        }
        else
        {
            printf("\nEnter value in integer format\n");

            break;
        }
    }

    return 0;
}

void menu()
{
    while (1)
    {
        int choice, busno;
        while (1)
        {
            printf("\n------------------------Bus information------------------------\n");

            printf("\nBus Number  :  Source       Destination   Capacity    Type   Stops");
            printf("\n101         :  Delhi        Jammu            30     Sleeper    3");
            printf("\n102         :  Jodhpur      Gurugram         40     Recliner   2");
            printf("\n103         :  Hyderabad    Ahmedabad        25     Sleeper    5");
            printf("\n104         :  Surat        Uttrakhand       40     Recliner   7");
            printf("\n105         :  Udaipur      Jaipur           50     Seater     3");

            printf("\n=== User Menu ===\n");
            printf("\n1. Book a Ticket");
            printf("\n2. cancel a Ticket");
            printf("\n3. Check Bus Status");
            printf("\n4. Logout");
            printf("\nEnter Your Choice:");

            if (scanf("%d", &choice) == 1)
            {
                if (choice == 1 || choice == 2 || choice == 3 || choice == 4)
                {
                    break;
                }
                else
                {
                    printf("\nEnter correct option:");
                }
            }
            else
            {
                printf("\nPlease enter value in integer format");
                break;
            }
        }

        if (choice == 1)
        {
            printf("\nplease enter bus number");

            if (scanf("%d", &busno) == 1)
            {
                if (busno == 101)
                {
                    bus101();
                }
                else if (busno == 102)
                {
                    bus102();
                }
                else if (busno == 103)
                {
                    bus103();
                }
                else if (busno == 104)
                {
                    bus104();
                }
                else if (busno == 105)
                {
                    bus105();
                }
                else
                {
                    printf("\nEnter valid bus number:");
                }
            }
            else
            {
                printf("\nPlease enter value in integer format");
                break;
            }
        }
        else if (choice == 2)
        {

            printf("\nEnter bus number: ");

            if (scanf("%d", &busno) == 1)
            {
                if (busno == 101)
                {
                    buscancel101();
                }
                else if (busno == 102)
                {
                    buscancel102();
                }
                else if (busno == 103)
                {
                    buscancel103();
                }
                else if (busno == 104)
                {
                    buscancel104();
                }
                else if (busno == 105)
                {
                    buscancel105();
                }
                else
                {
                    printf("\nEnter correct bus no:");
                }
            }
            else
            {
                printf("\nPlease enter value in integer format");
                break;
            }
        }
        else if (choice == 3)
        {
            printf("\nEnter bus number: ");

            if (scanf("%d", &busno) == 1)
            {
                if (busno == 101)
                {
                    busStatus101();
                }
                else if (busno == 102)
                {
                    busStatus102();
                }
                else if (busno == 103)
                {
                    busStatus103();
                }
                else if (busno == 104)
                {
                    busStatus104();
                }
                else if (busno == 105)
                {
                    busStatus105();
                }
                else
                {
                    printf("\nEnter correct bus no:");
                }
            }
            else
            {
                printf("\nPleaase enter value in integer format");
                break;
            }
        }
        else if (choice == 4)
        {

            printf("\nloging out successful");
            break;
        }
        else
        {
            printf("\n Choose correct option:");
        }
    }
}
void registration()
{
    while (1)
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
        if (strcmp(password, password1) == 0)
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
            if (strcmp(username, newusername) == 0 && strcmp(pass, password) == 0)
            {
                printf("\nlogin successful, welcome %s", username);
                menu();
                break;
            }
        }
        else if (choice == 2)
        {

            break;
        }
        else
        {
            printf("\nplease enter correct choice");
        }
    }
}

void bus101()
{

    printf("\nTotal Seats = %d", seats1);
    remainingseats1 = seats1 - ns1;
    printf("\nAvailable seats=%d", remainingseats1);
    printf("\nEnter no of seats:");

    if (scanf("%d", &ns1) == 1)
    {
        if (ns1 > remainingseats1)
        {
            printf("\nNo seats available");
        }
        else
        {
            printf("\nBooking Successful ! %d Seats Booked in Bus No=101", ns1);
        }
    }
    else
    {
        printf("\nPlease enter value in integer format!!");
    }
}

void bus102()
{
    printf("\nTotal Seats = %d", seats2);
    remainingseats2 = seats2 - ns2;
    printf("\nAvailable seats=%d", remainingseats2);
    printf("\nEnter no of seats:");

    if (scanf("%d", &ns2) == 1)
    {
        if (ns2 > remainingseats2)
        {
            printf("\nNo seats available");
        }
        else
        {
            printf("\nBooking Successful ! %d Seats Booked in Bus No=102", ns2);
        }
    }
    else
    {
        printf("\nPlease enter value in integer format!!");
    }
}
void bus103()
{
    printf("\nTotal Seats = %d", seats3);
    remainingseats3 = seats3 - ns3;
    printf("\nAvailable seats=%d", remainingseats3);
    printf("\nEnter no of seats:");

    if (scanf("%d", &ns3) == 1)
    {
        if (ns3 > remainingseats3)
        {
            printf("\nNo seats available");
        }
        else
        {
            printf("\nBooking Successful ! %d Seats Booked in Bus No=103", ns3);
        }
    }
    else
    {
        printf("\nPlease enter value in integer format!!");
    }
}
void bus104()
{
    printf("\nTotal Seats = %d", seats4);
    remainingseats4 = seats4 - ns4;
    printf("\nAvailable seats=%d", remainingseats4);
    printf("\nEnter no of seats:");

    if (scanf("%d", &ns4) == 1)
    {
        if (ns4 > remainingseats4)
        {
            printf("\nNo seats available");
        }
        else
        {
            printf("\nBooking Successful ! %d Seats Booked in Bus No=104", ns4);
        }
    }
    else
    {
        printf("\nPlease enter value in integer format!!");
    }
}
void bus105()
{
    printf("\nTotal Seats = %d", seats5);
    remainingseats5 = seats5 - ns5;
    printf("\nAvailable seats=%d", remainingseats5);
    printf("\nEnter no of seats:");

    if (scanf("%d", &ns5) == 1)
    {
        if (ns5 > remainingseats5)
        {
            printf("\nNo seats available");
        }
        else
        {
            printf("\nBooking Successful ! %d Seats Booked in Bus No=105", ns5);
        }
    }
    else
    {
        printf("\nPlease enter value in integer format!!");
    }
}

void busStatus101()
{
    printf("\nBus number : 101");
    printf("\nSource city : Delhi");
    printf("\nDestination city : Jammu");
    printf("\nTotal seats : %d ", seats1);
    remainingseats1 = seats1 - ns1;
    printf("\nAvailable seats : %d ", remainingseats1);
    printf("\nfare : 650.00");
}
void busStatus102()
{
    printf("\nBus number : 102");
    printf("\nSource city : Jodhpur");
    printf("\nDestination city : Gurugram");
    printf("\nTotal seats : %d ", seats2);
    remainingseats2 = seats2 - ns2;
    printf("\nAvailable seats : %d ", remainingseats2);
    printf("\nfare : 600.00");
}
void busStatus103()
{
    printf("\nBus number : 103 ");
    printf("\nSource city : Hyderabad");
    printf("\nDestination city : Ahmedabad");
    printf("\nTotal seats : %d ", seats3);
    remainingseats3 = seats3 - ns3;
    printf("\nAvailable seats : %d ", remainingseats3);
    printf("\nfare : 200.00");
}
void busStatus104()
{
    printf("\nBus number :104 ");
    printf("\nSource city : Surat ");
    printf("\nDestination city : Uttrakhand ");
    printf("\nTotal seats : %d ", seats4);
    remainingseats4 = seats4 - ns4;
    printf("\nAvailable seats : %d ", remainingseats4);
    printf("\nfare : 500.00");
}
void busStatus105()
{
    printf("\nBus number : 105");
    printf("\nSource city : Udaipur ");
    printf("\nDestination city : Jaipur");
    printf("\nTotal seats : %d ", seats5);
    remainingseats5 = seats5 - ns5;
    printf("\nAvailable seats : %d  ", remainingseats5);
    printf("\nfare : 400.00");
}

void buscancel101()
{
    while (1)
    {
        printf("\nEnter number of seats:");

        if (scanf("%d", &cs1) == 1)
        {
            if (cs1 <= ns1)
            {
                ns1 = ns1 - cs1;
                printf("\nCancellation Successful !!%d seats canceled on bus number 101\n", cs1);
                break;
            }
            else
            {
                printf("\nYou have entered more number of seats than your have booked , Try Again !");
            }
        }
        else
        {
            printf("\nPlease enter value in integer format!!");
            break;
        }
    }
}
void buscancel102()
{
    while (1)
    {
        printf("\nEnter number of seats:");

        if (scanf("%d", &cs2) == 1)
        {
            if (cs2 <= ns2)
            {
                ns2 = ns2 - cs2;
                printf("\nCancellation Successful !!%d seats canceled on bus number 102\n", cs2);
                break;
            }
            else
            {
                printf("\nYou have entered more nnumber of seats than your have booked , Try Again !");
            }
        }
        else
        {
            printf("\nPlease enter value in integer format!!");
            break;
        }
    }
}
void buscancel103()
{
    while (1)
    {
        printf("\nEnter number of seats:");

        if (scanf("%d", &cs3) == 1)
        {
            if (cs3 <= ns3)
            {
                ns3 = ns3 - cs3;
                printf("\nCancellation Successful !!%d seats canceled on bus number 103\n", cs3);
                break;
            }
            else
            {
                printf("\nYou have entered more nnumber of seats than your have booked , Try Again !");
            }
        }
        else
        {
            printf("\nPlease enter value in integer format!!");
            break;
        }
    }
}
void buscancel104()
{
    while (1)
    {
        printf("\nEnter number of seats:");

        if (scanf("%d", &cs4) == 1)
        {
            if (cs4 <= ns4)
            {
                ns4 = ns4 - cs4;
                printf("\nCancellation Successful !!%d seats canceled on bus number 104\n", cs4);
                break;
            }
            else
            {
                printf("\nYou have entered more nnumber of seats than your have booked , Try Again !");
            }
        }
        else
        {
            printf("\nPlease enter value in integer format!!");
            break;
        }
    }
}
void buscancel105()
{
    while (1)
    {
        printf("\nEnter number of seats:");

        if (scanf("%d", &cs5) == 1)
        {
            if (cs5 <= ns5)
            {
                ns5 = ns5 - cs5;
                printf("\nCancellation Successful !!%d seats canceled on bus number 105\n", cs5);
                break;
            }
            else
            {
                printf("\nYou have entered more nnumber of seats than your have booked , Try Again !");
            }
        }
        else
        {
            printf("\nPlease enter value in integer format!!");
            break;
        }
    }
}
