#include<stdio.h>

#define category 7 //corresponding to sub-menu
#define subMenu_Items 15 //corresponding to items in sub-menu
//Declaring function
void ViewCart(void);

void textColour(int type);

//Declaring Global variables
char food[category][subMenu_Items][30]={
{"Corn Soup           ","Paneer Pakoda       ","Spring Roll         ","Crispy Corn         ","Today's Special     "},//Starters

{"Tandoori Roti       ","Tawa Roti           ","Missi Roti          ","Naan                ",//Roti

 "Dal Fry             ","Kadhi Paneer        ","Palak Paneer        ","Shahi Paneer        ","Matar Paneer        ","Aloo Gobi           ","Dum Aloo            "},//Main Course

{"Pav Bhaji           ","Chola Kulcha        ","Vegetable Burger    ","Paani Puri          ","Bhel Puri           ","Dahi Puri           "},//Snacks

{"Steamed Rice        ","Jeera Rice          ","Schezwan Rice       ","Veg Biryani         ","Pulao               ","Khichadi            "},//Rice

{"Masala Dosa         ","Paper Dosa          ","Uttapam             ","Onion Uttapam       ","Idli Sambar         ","Medu Vada           ","Vada Sambar         "},//South Indian

{"Chocolate Ice Cream ","Vanilla Ice Cream   ","Strawberry Ice Cream"},//Ice Cream

{"Masala Tea          ","Mango Lassi         ","Plain Lassi         ","Chocolate Milk Shake","Badam Milk Shake    "} //Appetizers
};

 const int cost[category][subMenu_Items]={
    {99, 149, 179, 149, 399}, //starters
    {11, 9, 14, 19, //Roti
    89, 239, 199, 219, 209, 149, 129}, //main Course
    {79, 79, 99, 29, 49, 59}, //snacks
    {89, 99, 129, 149, 139, 69}, //Rice
    {79, 89, 89, 99, 79, 69, 79}, //South Indian
    {89, 69, 79}, //Ice Cream
    {19, 39, 29, 119, 129} //Appetizers
 };

 int cart[category][subMenu_Items] = {0};

 float totalCost;
 int toggle=1;
 char name[30];
 
 //Main Program Starts
 int main()
 {
  int choice;
  
// Starting Screen
    printf("Please Enter Your Name : \n");      //Enters Name
    fgets(name, 15, stdin);
    
    printf("☻ ☻ ☻ ☻ ☻ ☻ ☻ ☻ ☻ ☻ ☻ ☻ ☻ ☻ ☻ ☻ ☻ ☻ ☻ ☻ ☻ ☻ ☻ ☻ ☻ ☻ ☻ ☻ ☻ ☻ ☻ \n");
    textColour(16);
    printf("Hello %s",name);        //Welcome Line
    printf("Welcome to our SastaKhana.com\nA non-profitable Organisation\n");
    textColour(0);
    
    printf("--------------------------------------------------------------\n");

    do          //Starts Do While Loop
    {
//toggle = 1 will show menu
        if(toggle==1)
        {
            textColour(11);
            printf("Enter a number to view food items from the following");
            textColour(0);
            
            textColour(13);
            printf("\n♦ 1 - Starters\n♦ 2 - Rotis & Main Course\n♦ 3 - Snacks\n♦ 4 - Rice\n♦ 5 - South Indian\n♦ 6 - Ice Cream\n♦ 7 - Beverages\n** Any other number to return to main menu\n");
            textColour(0);
            
            printf("--------------------------------------------------------------\n");
            scanf("%d",&choice);            //Asks Choice
//sub-menu or choice of category on menu
            
            switch(choice)
                {

                case 1:             //This Case is for STARTERS
                {
                    printf("• •• •• •• •• •• •• •• •• •• •• •• •• •• •• •• •• •• •• •• •• •• •• •• •• •• •• •\n");
                    
                    textColour(11);
                    printf("You have selected STARTERS. \nEnter the corresponding number to add the item to your CART\n");
                    textColour(0);
                    
                    textColour(15);
                    printf("No.      Item                      Cost\n");
                    textColour(0);
                    
                    for(int count = 0;count<subMenu_Items;count++)
                    if(cost[choice-1][count]!=0)
                    printf("○ %2d. %-40s %d \n",count+1,food[choice-1][count], cost[choice-1][count]);
                    
                    printf("---------------------------------------------------------------\n");

                    int option;
                    scanf("%d",&option);        //Asks which option we choose
                    
                    if(option>0&&cost[choice-1][option - 1]!=0){    //Ensures Option is correct
                        cart[choice-1][option-1]++;
                        printf("---------------------------------------------------------------\n");
                        totalCost+=cost[choice-1][option-1];
                        }
                    else
                    goto Invalid;   //goes to display print invalid id
                }

                break;


                case 2:         //This case is for Main Course
                {

                    printf("• •• •• •• •• •• •• •• •• •• •• •• •• •• •• •• •• •• •• •• •• •• •• •• •• •• •• •\n");
                    
                    textColour(11);
                    printf("You have selected ROTIS & MAIN COURSE. \nEnter the corresponding number to add the item to your CART\n");
                    textColour(0);
                    
                    textColour(15);
                    printf("No.      Item                      Cost\n");
                    textColour(0);
                    
                    for(int count = 0;count<subMenu_Items;count++)
                    if(cost[choice-1][count]!=0)
                    printf("○ %2d. %-40s %d \n",count+1,food[choice-1][count], cost[choice-1][count]);
                    
                    printf("---------------------------------------------------------------\n");

                    int option;
                    scanf("%d",&option);
                    
                    if(option>0&&cost[choice-1][option - 1]!=0){
                        cart[choice-1][option-1]++;
                        printf("---------------------------------------------------------------\n");
                        totalCost+=cost[choice-1][option-1];
                        }

                    else
                    goto Invalid;
                }

                break;


                case 3:             //This Case is for SNACKS
                {
                    printf("• •• •• •• •• •• •• •• •• •• •• •• •• •• •• •• •• •• •• •• •• •• •• •• •• •• •• •\n");
                    
                    textColour(11);
                    printf("You have selected SNACKS. \nEnter the corresponding number to add the item to your CART\n");
                    textColour(0);

                    textColour(15);
                    printf("No.      Item                      Cost\n");
                    textColour(0);
                    
                    for(int count = 0;count<subMenu_Items;count++)
                    if(cost[choice-1][count]!=0)
                    printf("○ %2d. %-40s %d \n",count+1,food[choice-1][count], cost[choice-1][count]);
                    
                    printf("---------------------------------------------------------------\n");
                    
                    int option;
                    scanf("%d",&option);
                    
                    if(option>0&&cost[choice-1][option - 1]!=0)
                    {
                        cart[choice-1][option-1]++;
                        printf("---------------------------------------------------------------\n");
                        totalCost+=cost[choice-1][option-1];
                    }

                    else
                    goto Invalid;
                }

                break;


                case 4:             //This Case is for RICE
                {
                    printf("• •• •• •• •• •• •• •• •• •• •• •• •• •• •• •• •• •• •• •• •• •• •• •• •• •• •• •\n");
                    
                    textColour(11);
                    printf("You have selected RICE. \nEnter the corresponding number to add the item to your CART\n");
                    textColour(0);

                    textColour(15);
                    printf("No.      Item                      Cost\n");
                    textColour(0);
                    
                    for(int count = 0;count<subMenu_Items;count++)
                    if(cost[choice-1][count]!=0)
                    printf("○ %2d. %-40s %d \n",count+1,food[choice-1][count], cost[choice-1][count]);
                    
                    printf("---------------------------------------------------------------\n");

                    int option;
                    scanf("%d",&option);

                    if(option>0&&cost[choice-1][option - 1]!=0){
                        cart[choice-1][option-1]++;
                        printf("---------------------------------------------------------------\n");
                        totalCost+=cost[choice-1][option-1];
                    }
                    else
                    goto Invalid;
                }

                break;




                case 5:               //This Case is for SOUTH INDIAN
                {
                    printf("• •• •• •• •• •• •• •• •• •• •• •• •• •• •• •• •• •• •• •• •• •• •• •• •• •• •• •\n");
                    textColour(11);
                    printf("You have selected SOUTH INDIAN. \nEnter the corresponding number to add the item to your CART\n");
                    textColour(0);

                    textColour(15);
                    printf("No.      Item                      Cost\n");
                    textColour(0);
                    
                    for(int count = 0;count<subMenu_Items;count++)
                    if(cost[choice-1][count]!=0)
                    printf("○ %2d. %-40s %d \n",count+1,food[choice-1][count], cost[choice-1][count]);
                    
                    printf("---------------------------------------------------------------\n");
                    
                    int option;
                    scanf("%d",&option);
                    
                    if(option>0&&cost[choice-1][option - 1]!=0)
                    {
                        cart[choice-1][option-1]++;
                        printf("---------------------------------------------------------------\n");
                        totalCost+=cost[choice-1][option-1];
                    }

                else
                goto Invalid;
                }

                break;



                case 6:             //This Case is for ICE CREAM
                {
                    printf("• •• •• •• •• •• •• •• •• •• •• •• •• •• •• •• •• •• •• •• •• •• •• •• •• •• •• •\n");
                    
                    textColour(11);
                    printf("You have selected ICE CREAM. \nEnter the corresponding number to add the item to your CART\n");
                    textColour(0);

                    textColour(15);
                    printf("No.      Item                      Cost\n");
                    textColour(0);
                    
                    for(int count = 0;count<subMenu_Items;count++)
                    if(cost[choice-1][count]!=0)
                    printf("○ %2d. %-40s %d \n",count+1,food[choice-1][count], cost[choice-1][count]);
                    
                    printf("---------------------------------------------------------------\n");
                    
                    int option;
                    scanf("%d",&option);
                    
                    if(option>0&&cost[choice-1][option - 1]!=0)
                    {
                        cart[choice-1][option-1]++;
                        printf("---------------------------------------------------------------\n");
                        totalCost+=cost[choice-1][option-1];
                    }

                    else
                    goto Invalid;
                }

                break;



                case 7:             //This Case is for BEVERAGES
                {
                    printf("• •• •• •• •• •• •• •• •• •• •• •• •• •• •• •• •• •• •• •• •• •• •• •• •• •• •• •\n");
                    
                    textColour(11);
                    printf("You have selected BEVERAGES. \nEnter the corresponding number to add the item to your CART\n");
                    textColour(0);
                    
                    textColour(15);
                    printf("No.      Item                      Cost\n");
                    textColour(0);
                    
                    for(int count = 0;count<subMenu_Items;count++)
                    if(cost[choice-1][count]!=0)
                    printf("○ %2d. %-40s %d \n",count+1,food[choice-1][count], cost[choice-1][count]);
                    
                    printf("---------------------------------------------------------------\n");

                    int option;
                    scanf("%d",&option);

                    if(option>0&&cost[choice-1][option - 1]!=0)
                    {
                        cart[choice-1][option-1]++;
                        printf("---------------------------------------------------------------\n");
                        totalCost+=cost[choice-1][option-1];
                    }

                    else
                    goto Invalid;

                }
                    break;

                    default:
                    break;

            }

            //Menu is finished
            
            //Displays Cart
            printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
            
            textColour(11);
            printf("Here is your cart %s\n", name);
            textColour(0);
            
            ViewCart();
            //invalid message for option. A fallacy

            if(0==1)
            {
                
                Invalid:
                textColour(10);
                printf("\n\n*** PLEASE ENTER VALID INPUT ***\a");
                textColour(0);
            }
        }



//Deletes an item

        if(toggle==2)
        {
            int id,category_id,subMenu_Items_id;
            printf("→ Enter id to delete item\n");
            scanf("%d",&id);
            
            if(id == 999)
            goto Choose_Action;
            
            category_id = id/100;
            subMenu_Items_id = id%100;
            
            if(cart[category_id][subMenu_Items_id]!=0)
            {
                
                totalCost=totalCost-(cost[category_id][subMenu_Items_id]*cart[category_id][subMenu_Items_id]);
                cart[category_id][subMenu_Items_id]=0;
                
                printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
                textColour(11);
                printf("Here are your revised items %s\n", name);
                textColour(0);
                
                ViewCart();
            }

            else
            {
                textColour(11);
                printf("** Enter Valid id **\a\n");
                textColour(0);
                textColour(10);
                printf("Press 999 to choose different action...");
                textColour(0);
                
            }
            
        }



        //Changes quantity of an item

        if(toggle==3)
        {
            int id,quantity,category_id,subMenu_Items_id;

            printf("---------------------------------------------------------------\n");
            
            textColour(13);
            printf("→ Enter id to Change quantity of an item\n");
            textColour(0);
            
            scanf("%d",&id);
            printf("---------------------------------------------------------------\n");
            
            
            if(id == 999)
            goto Choose_Action;
            
            category_id = id/100;
            subMenu_Items_id = id%100;
            textColour(13);
        
            printf("→ Enter quantity to be changed of an item\n");
            textColour(0);
            scanf("%d",&quantity);
            
            if(cost[category_id][subMenu_Items_id]!=0)
            {
                if(quantity>0 && cart[category_id][subMenu_Items_id]>0 )
                {
                    totalCost += cost[category_id][subMenu_Items_id]*(quantity-cart[category_id][subMenu_Items_id]);
                    cart[category_id][subMenu_Items_id] = quantity;
                    
                    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
                    textColour(11);
                    printf("Here are your revised items %s\n", name);
                    textColour(0);
                    ViewCart();
                }

                else
                {
                    textColour(11);
                    printf("** Item has no Quantity.Please Try again **\a\n");
                    textColour(0);
                    
                    textColour(10);
                    printf("Press 999 to choose different action...");
                    textColour(0);
                }
            }

            else
            {
                textColour(11);
                printf("** Enter Valid id **\a\n");
                textColour(0);
                
                textColour(10);
                printf("Press 999 to choose different action...");
                textColour(0);
            }
        }
        
        if (0==1) // a fallacy
        {
            Choose_Action:
            
            textColour(13);
            printf("\n◘ 1 to Add Item\n◘ 2 to Delete Items\n◘ 3 to Change Quantity\n◘ Press any other number to Confirm your order and view your final cart\n");
            scanf("%d",&toggle);
            textColour(0);
            
        }
    
    

        printf("\n");
    }

    while(toggle==1 || toggle==2 ||toggle==3);
    
      
    float discount, amountToBePaid;
    float tax=totalCost*0.18;
    if(totalCost<=100)
    {
        textColour(14);
        printf("ITEM ID                ITEM NAME            QUANTITY        COST\n");
        textColour(0);
        
        for(int i=0;i<category;i++)
        for(int j=0;j<subMenu_Items;j++)
        {
            if(cart[i][j]!=0)
            {
                printf("%d%d            %s            %d            %d\n",i,j,food[i][j],cart[i][j],(cost[i][j]*cart[i][j]));
            }
        }

        printf("▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬\n");
        
        textColour(16);
        printf("Total Cost is              ₹ %0.2f\n",totalCost);
        printf("Applicable Taxes 18%% are      ₹ %0.2f\n ", tax);
        totalCost+=tax;
        printf("You have to pay: ₹ %0.2f\n", totalCost);
        textColour(0);
        
        printf("▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬\n");

    }
    else
    {
        printf(".................................................................................................\n");
        
        textColour(11);
        printf("YOU HAVE BEEN A WONDERFUL CUSTOMER, \nIT IS OUR RESPONSIBILITY TO SERVE YOU RIGHT.\n"); 
        printf("WE WHOLEHEARTEDLY GIFT YOU A DISCOUNT BASED ON YOUR PURCHASE AMOUNT !!!\n");
        printf("☺ ☺ ☺ ☺ ☺\n");
        textColour(0);
        
        textColour(14);
        printf("ITEM ID                ITEM NAME            QUANTITY        COST\n");
        textColour(0);
        
        for(int i=0;i<category;i++)
        for(int j=0;j<subMenu_Items;j++)
        {
            if(cart[i][j]!=0)
            {
                printf("%d%02d            %s            %-2d           %d\n",i,j,food[i][j],cart[i][j],(cost[i][j]*cart[i][j]));
            }
        }

        printf("▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬\n");
        
        textColour(16);
        printf("Total Cost is              ₹ %0.2f\n",totalCost);
        printf("Applicable Taxes 18%% are      ₹ %0.2f\n ", tax);
        totalCost+=tax;
        
        textColour(0);
        
        if(totalCost>100 && totalCost<=200)
        {
            discount = (totalCost*5)/100;
            amountToBePaid = totalCost-discount;
            
            textColour(12);
            printf("AFTER APPLYING DISCOUNT, YOU ONLY HAVE TO PAY     ₹ %0.2f\n", amountToBePaid);
            textColour(0);
        }
        else if(totalCost>200 && totalCost<=400)
        {
            discount = (totalCost*10)/100;
            amountToBePaid = totalCost-discount;
            
            textColour(12);
            printf("AFTER APPLYING DISCOUNT, YOU ONLY HAVE TO PAY     ₹ %0.2f\n", amountToBePaid);
            textColour(0);
        }
        else if(totalCost>400 && totalCost<=800)
        {
            discount = (totalCost*20)/100;
            amountToBePaid = totalCost-discount;
            
            textColour(12);
            printf("AFTER APPLYING DISCOUNT, YOU ONLY HAVE TO PAY     ₹ %0.2f\n", amountToBePaid);
            textColour(0);
        }
        else
        {
            discount = (totalCost*25)/100;
            amountToBePaid = totalCost-discount;
            
            textColour(12);
            printf("AFTER APPLYING DISCOUNT, YOU ONLY HAVE TO PAY     ₹ %0.2f\n", amountToBePaid);
            textColour(0);
        }
        printf("▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬\n");
    }
    
    textColour(15);
    printf("☻ ☻ ☻ ☻ ☻ ☻ ☻ ☻ ☻ ☻ ☻ ☻ ☻ ☻ ☻ ☻ ☻ ☻ ☻ ☻ ☻ ☻ ☻ ☻ ☻ ☻ ☻ ☻ ☻ ☻ ☻ ☻ ☻ \n");
    printf("Thank You %sFor Choosing SastaKhana.com \nDo Visit us again.\n", name);
    printf("☻ ☻ ☻ ☻ ☻ ☻ ☻ ☻ ☻ ☻ ☻ ☻ ☻ ☻ ☻ ☻ ☻ ☻ ☻ ☻ ☻ ☻ ☻ ☻ ☻ ☻ ☻ ☻ ☻ ☻ ☻ ☻ ☻ \n");
    textColour(0);
    
    printf(".................................................................................................\n");
}



void ViewCart(void)
    {
        textColour(14);
        printf("ITEM ID                ITEM NAME            QUANTITY        COST\n");
        textColour(0);
        
        for(int i=0;i<category;i++)
        for(int j=0;j<subMenu_Items;j++)
        {
            if(cart[i][j]!=0)
            {
                printf("%d%02d            %s            %-2d           %d\n",i,j,food[i][j],cart[i][j],(cost[i][j]*cart[i][j]));
            }
        }

        printf("▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬\n");
        
        textColour(16);
        printf("Total Cost is              ₹ %0.2f\n",totalCost);
        textColour(0);
        
        printf("▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬\n");
        printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");
        
        textColour(13);
        printf("If you wish to buy anything more Enter\n◘ 1 to Add Item\n◘ 2 to Delete Items\n◘ 3 to Change Quantity\n◘ Press any other number to Confirm your order and view your final cart\n");
        scanf("%d",&toggle);
        textColour(0);
        
        return;
    }

void textColour(int type)
{
    switch(type)
    {
        //return to default
        case 0:
        printf("\033[0m");
        break;
        
        //Red
        case 1:
        printf("\033[0;31m");
        break;
        
        //Green
        case 2:
        printf("\033[0;32m");
        break;
        
        //Yellow
        case 3:
        printf("\033[0;33m");
        break;
        
        //Blue
        case 4:
        printf("\033[0;34m");
        break;
        
        //Purple
        case 5:
        printf("\033[0;35m");
        break;
        
        //Cyan
        case 6:
        printf("\033[0;36m");
        break;
        
        //White
        case 7:
        printf("\033[0;37m");
        break;
        
        //Cases For Bold Colours
        
        //Bold Grey
        case 10:
        printf("\033[1;30m");
        break;
        
        //Red
        case 11:
        printf("\033[1;31m");
        break;
        
        //Green
        case 12:
        printf("\033[1;32m");
        break;
        
        //Yellow
        case 13:
        printf("\033[1;33m");
        break;
        
        //Blue
        case 14:
        printf("\033[1;34m");
        break;
        
        //Purple
        case 15:
        printf("\033[1;35m");
        break;
        
        //Cyan
        case 16:
        printf("\033[1;36m");
        break;
        
        //White
        case 17:
        printf("\033[1;37m");
        break;
    }
}
