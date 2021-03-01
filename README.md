# IT-Project-Group-35
#include<stdio.h>
//Declaring function
void ViewCart(void);

//Declaring Global variables
char food[42][50]={
"Corn Soup           ","Paneer Pakoda       ","Spring Roll         ","Crispy Corn         ",//Starters
"Tandoori Roti       ","Tawa Roti           ","Missi Roti          ","Naan                ",//Roti
"Dal Fry             ","Kadhi Paneer        ","Palak Paneer        ","Shahi Paneer        ","Matar Paneer        ","Aloo Gobi           ","Dum Aloo            ",//Main Course
"Pav Bhaji           ","Chola Kulcha        ","Vegetable Burger    ","Paani Puri          ","Bhel Puri           ","Dahi Puri           ",//Snacks
"Steamed Rice        ","Jeera Rice          ","Schezwan Rice       ","Veg Biryani         ", "Pulao              ","Khichadi            ",//Rice
"Masala Dosa         ","Paper Dosa          ","Uttapam             ","Onion Uttapam       ","Idli Sambar         ","Medu Vada           ","Vada Sambar         ",//South Indian
"Chocolate Ice Cream ","Vanilla Ice Cream   ","Strawberry Ice Cream",//Ice Cream
"Masala Tea          ","Mango Lassi         ","Plain Lassi         ","Chocolate Milk Shake","Badam Milk Shake    " //Appetizers
};

int cart[42];
const int cost[42];
int totalCost,toggle=1;
char name[15];



//Main Program Starts
int main()
{
 

 int choice;
 for(int i=0;i<43;i++)
 cart[i]=0;
  
  
// Starting Screen
 printf("Please Enter Your Name : \n");
 fgets(name, 15, stdin);
 printf("☻ ☻ ☻ ☻ ☻ ☻ ☻ ☻ ☻ ☻ ☻ ☻ ☻ ☻ ☻ ☻ ☻ ☻ ☻ ☻ ☻ ☻ ☻ ☻ ☻ ☻ ☻ ☻ ☻ ☻ ☻ \n");
 printf("\033[1;36m");
 printf("Hello %s",name);
 printf("Welcome to our SastaKhana.com\nA non-profitable Organisation\n");
 printf("\033[0m");
 printf("--------------------------------------------------------------\n");
 
do{
	//toggle = 1 will show menu
	if(toggle==1){
	printf("\033[0;31m");
	printf("Enter a number to view food items from the following");
	printf("\033[0m");

	printf("\033[0;33m");
	printf("\n♦ 1 - Starters\n♦ 2 - Rotis & Main Course\n♦ 3 - Snacks\n♦ 4 - Rice\n♦ 5 - South Indian\n♦ 6 - Ice Cream\n♦ 7 - Appetizers\n♦ Any other number to exit\n");
	printf("\033[0m");
	printf("--------------------------------------------------------------\n");
	scanf("%d",&choice);
	//sub-menu or choice of category on menu
	switch(choice)
	{
    
    case 1:
    {printf("◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙\n");
    printf("\033[0;31m");
    printf("You have selected STARTERS. \nEnter the corresponding number to add the item to your CART\n");
    printf("\033[0m");
    
    printf("\033[0;32m");
    for(int count = 0;count<4;count++)
    printf("○ %d. %s\n",count+1,food[count]);
    printf("\033[0m");
    printf("---------------------------------------------------------------\n");
    int option;
    scanf("%d",&option);
    if(option>0&&option<=4){
    cart[option-1]++;
    printf("---------------------------------------------------------------\n");
    totalCost+=cost[option-1];
    }
        else
        goto Invalid;
    }
    break;
    
    
    case 2:
    {
					printf("◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙\n");
    	printf("\033[0;31m");
    	printf("You have selected ROTIS & MAIN COURSE. \nEnter the corresponding number to add the item to your CART\n");
    	printf("\033[0m");
    	printf("\033[0;32m");
    	for(int count = 4;count<15;count++)
    	printf("○ %d. %s\n",count-3,food[count]);
    	printf("\033[0m");
    	printf("---------------------------------------------------------------\n");
    	
					int option;
    	scanf("%d",&option);
     if(option>0&&option<=11){
    	cart[option+3]++;
    	printf("---------------------------------------------------------------\n");
    	totalCost+=cost[option+3];
    }
        else
        goto Invalid;
    }
    break;
    
    
    case 3:
    {printf("◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙\n");
    printf("\033[0;31m");
    printf("You have selected SNACKS. \nEnter the corresponding number to add the item to your CART\n");
    printf("\033[0m");
    
    printf("\033[0;32m");
    for(int count = 15;count<21;count++)
    printf("○ %d. %s\n",count-14,food[count]);
    printf("\033[0m");
    printf("---------------------------------------------------------------\n");
    int option;
    scanf("%d",&option);
    if(option>0&&option<=6){
    cart[option+14]++;
    printf("---------------------------------------------------------------\n");
    totalCost+=cost[option+14];
    }
        else
        goto Invalid;
    }
    break;
    
    
    case 4:
    {printf("◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙\n");
    printf("\033[0;31m");
    printf("You have selected RICE. \nEnter the corresponding number to add the item to your CART\n");
    printf("\033[0m");

    printf("\033[0;32m");
    for(int count = 21;count<27;count++)
    printf("○ %d. %s\n",count-20,food[count]);
    printf("\033[0m");
    printf("---------------------------------------------------------------\n");
    int option;
    scanf("%d",&option);
    if(option>0&&option<=6){
    cart[option+20]++;
    printf("---------------------------------------------------------------\n");
    totalCost+=cost[option+20];
    }
        else
        goto Invalid;
    }
    break;
    
    
    case 5:
    {printf("◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙\n");
    printf("\033[0;31m");
    printf("You have selected SOUTH INDIAN. \nEnter the corresponding number to add the item to your CART\n");
    printf("\033[0m");
    
    printf("\033[0;32m");
    for(int count = 27;count<34;count++)
    printf("○ %d. %s\n",count-26,food[count]);
    printf("\033[0m");
    printf("---------------------------------------------------------------\n");
    int option;
    scanf("%d",&option);
    if(option>0&&option<=7){
    cart[option+26]++;
    printf("---------------------------------------------------------------\n");
    totalCost+=cost[option+26];
    }
        else
        goto Invalid;
    }
    break;
    
    
    case 6:
    {printf("◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙\n");
    printf("\033[0;31m");
    printf("You have selected ICE CREAM. \nEnter the corresponding number to add the item to your CART\n");
    printf("\033[0m");
    
    printf("\033[0;32m");
    for(int count = 34;count<37;count++)
    printf("○ %d. %s\n",count-33,food[count]);
    printf("\033[0m");
    printf("---------------------------------------------------------------\n");
    int option;
    scanf("%d",&option);
    if(option>0&&option<=3){
    cart[option+33]++;
    printf("---------------------------------------------------------------\n");
    totalCost+=cost[option+33];
    }
        else
        goto Invalid;
    }
    break;
    
    case 7:
    {printf("◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙◙\n");
    printf("\033[0;31m");
    printf("You have selected BEVERAGES. \nEnter the corresponding number to add the item to your CART\n");
    printf("\033[0m");

    printf("\033[0;32m");
    for(int count = 37;count<42;count++)
    printf("○ %d. %s\n",count-36,food[count]);
    printf("\033[0m");
    printf("---------------------------------------------------------------\n");
    int option;
    scanf("%d",&option);
    if(option>0&&option<=5){
    cart[option+36]++;
    printf("---------------------------------------------------------------\n");
    totalCost+=cost[option+36];
    }
        else
        goto Invalid;
    }
    break;
    
    
    default:
    break;
    
}
}
//Menu is finished
//invalid message for option. A fallacy
if(0==1){
  printf("\033[0;31m");
  Invalid:printf("\n\n Please Enter Valid Input");
  printf("\033[0m");
}

//Displays Cart
  
		printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
 
		printf("\033[0;31m");
  
		printf("Here is your cart %s\n", name);
  
		printf("\033[0m");
 
	ViewCart();
 


//Deletes a item
  
  if(toggle==2)
  {
   int id;
   
			printf("►Enter id to delete item\n");
   
			scanf("%d",&id);
   
			if(id<42&&id>=0){
   
			totalCost=totalCost-(cost[id]*cart[id]);
   
			cart[id]=0;
   }
   
			else{
    printf("** Enter Valid id **\n");
   }
       
							printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
       printf("\033[0;31m");
       printf("Here are your revised items %s\n", name);
       printf("\033[0m");     
		
		ViewCart();
  }
  
  //Changes quantity of an item
  
  if(toggle==3)
  {
   int id,quantity;
   
   printf("---------------------------------------------------------------\n");
   
			printf("\033[0;33m");
   
			printf("► Enter id to Change quantity of an item\n");
   
			scanf("%d",&id);
   
			printf("---------------------------------------------------------------\n");
   
			printf("► Enter quantity to be changed of an item\n");
   
			scanf("%d",&quantity);
   
			if(id<42 && id>=0){
    if(quantity>0 && cart[id]>0){ 
        totalCost += cost[id]*(quantity-cart[id]);
        cart[id] = quantity;
           
    }
    else{
       printf("► Item has no Quantity.Please Try again\n");
    }
     }
     else{
    printf("► Enter Valid id\n");
   }
       
							printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
      	printf("\033[0;31m");
       printf("Here are your revised items %s\n", name);
       printf("\033[0m");

ViewCart();
  } 
 

printf("\n");
}while(toggle==1 || toggle==2 ||toggle==3);


 
	printf("☻ ☻ ☻ ☻ ☻ ☻ ☻ ☻ ☻ ☻ ☻ ☻ ☻ ☻ ☻ ☻ ☻ ☻ ☻ ☻ ☻ ☻ ☻ ☻ ☻ ☻ ☻ ☻ ☻ ☻ ☻ \n");
 
	printf("\033[1;36m");
 
	printf("¶¶¶ Your Final Cost is ₹ %d\n",totalCost);
 
	printf("Thank You %sFor Choosing SastaKhana. \nDo Visit us again.\n", name);
 
	printf("\033[0m");
 
	printf("☻ ☻ ☻ ☻ ☻ ☻ ☻ ☻ ☻ ☻ ☻ ☻ ☻ ☻ ☻ ☻ ☻ ☻ ☻ ☻ ☻ ☻ ☻ ☻ ☻ ☻ ☻ ☻ ☻ ☻ ☻ \n");
}

void ViewCart(void)
{
		
		printf("\033[0;34m");
  printf("ITEM ID\t\t\t\tITEM NAME\t\t\tQUANTITY\t\tCOST\n");
  printf("\033[0m");
  
		for(int i=0;i<42;i++)
  {
   
			if(cart[i]!=0)
   {
				
				printf("%d\t\t\t%s\t\t\t%d\t\t\t%d\n",i,food[i],cart[i],(cost[i]*cart[i]));
				
   }
  }
  printf("▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬\n");
  
		printf("\033[0;36m");
  printf("Total Cost is \t\t\t₹ %d\n",totalCost);
  printf("\033[0m");
  
		printf("▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬\n");
  printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");
  
		printf("\033[0;33m");
  
		printf("If you wish to buy anything more Enter\n◘ 1 to Add Item\n◘ 2 to Delete Items\n◘ 3 to Change Quantity \n◘ Any other number to Exit\n");
  
		scanf("%d",&toggle);
  
		printf("\033[0m");
  
		return;
}
