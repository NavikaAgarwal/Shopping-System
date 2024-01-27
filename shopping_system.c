#include <stdio.h>
#include <string.h>

int main() {
    static int totalCost;
    float TOTAL = 0;

    int i, j, choice, c = 1, a[9], cost[9], pin = 0, exit_choice = 1; // Initialize exit_choice
    char str[100];
    char items[4][100] = {
        "WHEAT 1 KG",
        "RICE 1 KG",
        "SUGAR 1 KG",
        "CLARIFIED BUTTER 1 KG"
    };

    for (i = 0; i < 9; i++)
        a[i] = 0;

    printf("***************PROGRAMMER'S BLOCK***************\n");
    printf("Made by Navika Agarwal\n");
    printf("Just implementation of the first programming language which I learned in my college in my 1st Year!\n");

    printf("Please Enter Your Name\n");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';  // Remove the newline character

    printf("Hello %s, Welcome to our Online Shopping.\n", str);
    printf("\n****************SECURITY CODE TO ACCESS BANKING SERVICE IS 1520****************\n");

    do {
        printf("Enter\n1 - SHOPPING STORE\n2 - BANKING OPTION\n3 - HELP OPTION\n - CLICK ANY OTHER KEY TO EXIT\n");
        scanf("%d", &choice);

        switch (choice) {
            case 1: {
                int SHOPPINGCHOICE;
                printf("Enter\n1 - WHEAT-Rs.20\n2 - RICE - Rs.100\n3 - SUGAR - Rs.40\n4 - CLARIFIED BUTTER - Rs.500\n5-PRESS ANY OTHER KEY TO EXIT\n");
                printf("All prices are of each commodity per kilogram\n");
                scanf("%d", &SHOPPINGCHOICE);

                cost[0] = 20;
                cost[1] = 100;
                cost[2] = 40;
                cost[3] = 500;

                switch (SHOPPINGCHOICE) {
                    case 1: {
                        int num;
                        printf("You chose WHEAT COSTING Rs.20 RUPEES PER KG. ARE you sure to buy. If 'Yes' Enter 1 else any number\n");
                        scanf("%d", &num);

                        if (num == 1) {
                            a[0]++;
                            totalCost += 20;
                            TOTAL = totalCost + (0.13 * totalCost);
                        }

                        printf("Your Cost in Cart is %f\n", TOTAL);
                        break;
                    }
                    case 2: {
                        int num;
                        printf("You chose RICE COSTING Rs.100 PER KG. Are you sure to buy. If 'Yes' Enter 1 else any number\n");
                        scanf("%d", &num);

                        if (num == 1) {
                            a[1]++;
                            totalCost += 100;
                            TOTAL = totalCost + (0.13 * totalCost);
                        }

                        printf("Your Cost in Cart is %f\n", TOTAL);
                        break;
                    }
                    case 3: {
                        int num;
                        printf("You chose SUGAR COSTING Rs.40 PER KG. Are you sure to buy. If 'Yes' Enter 1 else any number\n");
                        scanf("%d", &num);

                        if (num == 1) {
                            a[2]++;
                            totalCost += 40;
                            TOTAL = totalCost + (0.13 * totalCost);
                        }

                        printf("Your Cost in Cart is %f\n", TOTAL);
                        break;
                    }
                    case 4: {
                        int num;
                        printf("You chose CLARIFIED BUTTER COSTING Rs.500 PER KG. Are you sure to buy. If 'Yes' Enter 1 else any number\n");
                        scanf("%d", &num);

                        if (num == 1) {
                            a[3]++;
                            totalCost += 500;
                            TOTAL = totalCost + (0.13 * totalCost);
                        }

                        TOTAL = totalCost + (0.13 * totalCost);
                        printf("Your Cost in Cart is %f\n", TOTAL);
                        break;
                    }

                    default: {
                        printf("Exit from SHOPPING STORE\n");
                        break;
                    }
                }
                break;
            }

            case 2: {
                float amount = 1000, deposit;
                int k;
                char transaction = 'y';

                printf("\n***************SECURITY CODE TO ACCESS BANKING SERVICE IS 1520***************\n");

                while (pin != 1520) {
                    printf("ENTER YOUR SECRET PIN NUMBER:");
                    scanf("%d", &pin);

                    if (pin != 1520)
                        printf("PLEASE ENTER VALID PASSWORD\n");
                }

                do {
                    printf("***************Welcome to Banking System****************\n");
                    printf("1. Check Balance\n");
                    printf("2. Deposit Cash\n");
                    printf("3. Payment\n");
                    printf("4. Quit\n");
                    printf("*****?*****?*****\n\n");
                    printf("Enter your choice: ");
                    scanf("%d", &choice);

                    switch (choice) {
                        case 1:
                            printf("\n YOUR BALANCE IN Rs : %f ", amount);
                            break;

                        case 2:
                            printf("\n ENTER THE AMOUNT TO DEPOSIT");
                            scanf("%f", &deposit);
                            amount = amount + deposit;
                            printf("YOUR BALANCE IS %f", amount);
                            break;

                        case 3:
                            if (TOTAL > amount) {
                                printf("less balance increase the deposit");
                                break;
                            } else {
                                amount = amount - TOTAL;
                                printf("YOUR PAYMENT IS DONE AND BALANCE AMOUNT IN YOUR ACCOUNT IS %f", amount);
                                break;
                            }

                        case 4:
                            printf("\n THANK U USING BANKING SERVICE\n");
                            break;

                        default:
                            printf("\n INVALID CHOICE");
                    }

                    printf("\n\n\n DO U WISH TO HAVE ANOTHER TRANSACTION?(y/n): \n");
                    fflush(stdin);
                    scanf(" %c", &transaction);
                    if (transaction == 'n' || transaction == 'N')
                        k = 1;
                } while (!k);

                printf("\n\n THANKS FOR USING BANKING SERVICES\n\n");
                break;
            }

            case 3:
                printf("\n***************HELP CENTER***************\n");
                printf("FOLLOW THE FOLLOWING STEP TO OPERATE");
                printf("\n\n1-enter your name\n2-choose from the given option to enter the required part\n3-follow the step inside the particular specific");
                break;

            default: {
                printf("Exit from program\n");
                exit_choice = 0; // Update exit_choice to exit the loop
                break;
            }
        }
    } while (exit_choice == 1); // Update loop condition

    return 0;
}
