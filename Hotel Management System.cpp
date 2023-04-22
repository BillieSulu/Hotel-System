#include <stdio.h>
#include <stdlib.h>
#include <time.h>

short int i, bill, choice2, pay; //The variable i is used for the statement for to declare the arrays below an bill for the value of the meal the user selects

void breakfastMeal() //Initialization of the function breakfast meal that assists the user to choose his/her desired breakfast meal.

{
	
	int rand_num; //Declaration of the variable to assist in generating random numbers

    //This code is used to generate random numbers
    srand(time(NULL)); // seed the random number generator with current time
    rand_num = rand() % 90000 + 10000; // generate a random number between 10000 and 99999 to display the receipt number

	printf ("\t\t\t\tGood Morning.You have choosen to take a breakfast meal.\n");
	printf ("\t\t\t\tHere is the list of all the breakfast meals we offer\n\n");
	
	char bMeals_plain [] = "\t\t\t\t1.Tea - 20Ksh\n\t\t\t\t2.Coffee - 15Ksh\n\t\t\t\t3.Mandazi - 10Ksh\n\t\t\t\t4.Chapati - 20Ksh\n\t\t\t\t5.Bread - 55Ksh\n\n";
    char b_tea_Meals_combined [] = "\t\t\t\t6.Tea with Mandazi - 30Ksh\n\t\t\t\t7.Tea with Bread - 75Ksh\n\t\t\t\t8.Tea with Chapati - 40Ksh\n\n";
    char b_coffee_Meals_combined [] = "\t\t\t\t9.Coffee with Mandazi - 25Ksh\n\t\t\t\t10.Coffee with Bread - 70Ksh\n\t\t\t\t11.Coffee with Chapati - 35Ksh\n\n";
    
	//This code prints the menu lists for breakfast meals
	
	for (i = 0;bMeals_plain [i] != '\0'; i++)
	 {
        printf("%c" ,bMeals_plain [i]);//this prints the list of food stored in the variables below
     }
	 
	 for (i = 0;b_tea_Meals_combined [i] != '\0'; i++) 
	 {
        printf("%c" ,b_tea_Meals_combined [i]);
     }
     
     for (i = 0;b_coffee_Meals_combined [i] != '\0'; i++) 
	 {
        printf("%c" ,b_coffee_Meals_combined [i]);
     }
     
      printf ("\nPlease select the desired meal you would like to take:\n");
      scanf ("%d",&choice2); //The user's choice is stored in the variable choice2
      
     
      switch (choice2) //The following switch statement is used to filter the user's selection from 1-11 to display the food and the bill the user selected
      {
      	case 1:
      	printf ("\n\t\t\t\tYou have selected Tea.");
      	bill = 20;
      	printf ("Your bill is %dKsh",bill);
      	break;
      	
      	case 2:
      	printf ("\n\t\t\t\tYou have selected Coffee.");
      	bill = 15;
      	printf ("Your bill is %dKsh",bill);
      	break;
      	
	    case 3:
      	printf ("\n\t\t\t\tYou have selected Mandazi.");
      	bill = 10;
      	printf ("Your bill is %dKsh",bill);
      	break;
      	
      	case 4:
      	printf ("\n\t\t\t\tYou have selected Chapati.");
      	bill = 20;
      	printf ("Your bill is %dKsh",bill);
      	break;
      	
      	case 5:
      	printf ("\n\t\t\t\tYou have selected Bread.");
      	bill = 55;
      	printf ("Your bill is %dKsh",bill);
      	break;
      	
      	case 6:
      	printf ("\n\t\t\t\tYou have selected Tea with Mandazi.");
      	bill = 30;
      	printf ("Your bill is %dKsh",bill);
      	break;
      
      	case 7:
      	printf ("\n\t\t\t\tYou have selected Tea with Bread.");
      	bill = 75;
      	printf ("tYour bill is %dKsh",bill);
      	break;
      
      	case 8:
      	printf ("\n\t\t\t\tYou have selected Tea with Chapati.");
      	bill = 40;
      	printf ("Your bill is %dKsh",bill);
      	break;
      	
      	case 9:
      	printf ("\n\t\t\t\tYou have selected Coffee with Mandazi.");
      	bill = 25;
      	printf ("Your bill is %dKsh",bill);
      	break;
     
      	case 10:
      	printf ("\n\t\t\t\tYou have selected Coffee with Bread.");
      	bill = 70;
      	printf ("Your bill is %dKsh",bill);
      	break;
     
        case 11:
      	printf ("\n\t\t\t\tYou have selected Coffee with Chapati.");
      	bill = 35;
      	printf ("Your bill is %dKsh",bill);
      	break;
    
   }
        if (choice2>0 && choice2<12) //the if statement here is used to display the various payment options
        {
		
        printf ("\n\n\t\t\t\t1. Cash\n\t\t\t\t2. ATM Card\n\t\t\t\t3. M-Pesa\nChoose your payment method:\n");
        scanf ("%d", &pay); //The user's choice is stored in pay variable
        
        if( pay==1) //The following for statements is used to filter the user's selection and displays the payment options
        {
        	
        	printf ("\n\t\t\t\tPlease pay %dKsh to the cashier.",bill);
        	printf ("\n\t\t\t\tYour payment %dKsh  for the receipt %d has been received.Thank You\n\t\t\t\tPlease proceed to the Serving Wing to get your meal.\n", bill, rand_num);
        	
		}
		
		if(pay==2)
		{
			
			printf ("\n\t\t\t\tSwipe your ATM card at the bar scanner.Your bill is %dKsh.",bill);
			//The user swipes the ATM card and the payment is received
			printf ("\n\t\t\t\tYour payment %dKsh for the receipt %d has been received.Thank You\n\t\t\t\tPlease proceed to the Serving Wing to get your meal.\n", bill, rand_num);
		}
		
		if(pay==3)
		{
			
			printf ("\n\n\t\t\t\tGo to M-Pesa menu.");
			printf ("\n\t\t\t\tSelect Lipa Na M-Pesa.\n\t\t\t\tSelect Buy Goods and Services.\n\t\t\t\tOur Till Number is 230023.\n\t\t\t\tEnter bill %dKsh.\n\t\t\t\tEnter your M-Pesa Pin.\n",bill);
		    printf ("\n\t\t\t\tYour payment %dKsh  for the receipt %d has been received.Thank You\n\t\t\t\tPlease proceed to the Serving Wing to get your meal.\n", bill, rand_num);
        				
		}
   }
   
   else 
    printf ("\n\t\t\t\tInvalid choice.Please select the matching numbers\n");
	  
     
} //The function void breakfastMeal ends here

void lunchMeal() //Initialization of the function breakfast meal that assists the user to choose his/her desired breakfast meal.
{
	
	int rand_num;

srand(time(NULL)); // seed the random number generator with current time
rand_num = rand() % 90000 + 10000; // generate a random number between 10000 and 99999

	
	printf ("\t\t\t\tGood Afternoon.You have choosen to take a lunch meal.\n");
	
	printf ("\t\t\t\tHere is the list of all the lunch meals we offer\n\n");
	
	char lMeals_main [] = "\t\t\t\t1.Ugali - 40Ksh\n\t\t\t\t2.Rice - 40Ksh\n\t\t\t\t3.Pilau - 70Ksh\n\t\t\t\t4.Chapati - 20Ksh\n\t\t\t\t5.Biriyani - 105Ksh\n\t\t\t\t6.Chicken - 240Ksh\n\t\t\t\t7.Fish - 200Ksh\n\t\t\t\t8.Omena - 60Ksh\n\n";
    char lMeals_sec [] = "\t\t\t\t9.Sukuma - 30Ksh\n\t\t\t\t10.Beans - 30Ksh\n\t\t\t\t11.Ndengu - 30Ksh\n\t\t\t\t12.Cabbage - 30Ksh\n\t\t\t\t13.Beef - 100Ksh\n\t\t\t\t14.Chips - 120Ksh\n\n";
    char l_Meals_combined [] = "\t\t\t\t15.Ugali with Sukuma/Cabbage and Beef - 170Ksh\n\t\t\t\t16.Ugali with Sukuma/Cabbage - 70Ksh\n\t\t\t\t17.Ugali with Beans/Ndengu  - 70Ksh\n\t\t\t\t18.Ugali with Beef - 140Ksh\n\t\t\t\t19.Ugali with Chicken - 280Ksh\n\t\t\t\t20.Ugali with Fish - 240Ksh\n\t\t\t\t21.Ugali with Omena - 100Ksh\n\n";
    char l_Meals_combined2 [] = "\t\t\t\t22.Rice with Sukuma/Cabbage and Beef - 170Ksh\n\t\t\t\t23.Rice with Sukuma/Cabbage - 70Ksh\n\t\t\t\t24.Rice with Beans/Ndengu - 70Ksh\n\t\t\t\t25.Rice with Beef - 140Ksh\n\t\t\t\t26.Rice with Chicken - 280Ksh\n\t\t\t\t27.Rice with Fish - 240Ksh\n\n";
	char l_Meals_combined3 [] = "\t\t\t\t28.Chapati with Beans or Ndengu - 50Ksh\n\t\t\t\t29.Chapati with Beef - 120Ksh\n\t\t\t\t30.Chips with Chicken - 340Ksh\n";
	//This code prints the menu lists for lunch meals
	
	for (i = 0;lMeals_main [i] != '\0'; i++)
	 {
        printf("%c" ,lMeals_main [i]);
     }
	 
	 for (i = 0;lMeals_sec [i] != '\0'; i++) 
	 {
        printf("%c" ,lMeals_sec [i]);
     }
     
     for (i = 0;l_Meals_combined [i] != '\0'; i++) 
	 {
        printf("%c" ,l_Meals_combined [i]);
     }
     
      for (i = 0;l_Meals_combined2 [i] != '\0'; i++) 
	 {
        printf("%c" ,l_Meals_combined2 [i]);
     }
     
      for (i = 0;l_Meals_combined3 [i] != '\0'; i++) 
	 {
        printf("%c" ,l_Meals_combined3 [i]);
     }
     
      printf ("\nPlease select the desired meal you would like to take:\n");
      scanf ("%d",&choice2); //The user's choice is stored in the variable choice2
      
     
      switch (choice2)
      {
      	case 1:
      	printf ("\n\t\t\t\tYou have selected Ugali.");
      	bill = 40;
      	printf ("Your bill is %dKsh",bill);
      	break;
      	
      	case 2:
      	printf ("\n\t\t\t\tYou have selected Rice.");
      	bill = 40;
      	printf ("Your bill is %dKsh",bill);
      	break;
      	
	    case 3:
      	printf ("\n\t\t\t\tYou have selected Pilau.");
      	bill = 70;
      	printf ("Your bill is %dKsh",bill);
      	break;
      	
      	case 4:
      	printf ("\n\t\t\t\tYou have selected Chapati.");
      	bill = 20;
      	printf ("Your bill is %dKsh",bill);
      	break;
      	
      	case 5:
      	printf ("\n\t\t\t\tYou have selected Biriyani.");
      	bill = 105;
      	printf ("Your bill is %dKsh",bill);
      	break;
      	
      	case 6:
      	printf ("\n\t\t\t\tYou have selected Chicken.");
      	bill = 240;
      	printf ("Your bill is %dKsh",bill);
      	break;
      
      	case 7:
      	printf ("\n\t\t\t\tYou have selected Fish.");
      	bill = 200;
      	printf ("Your bill is %dKsh",bill);
      	break;
      
      	case 8:
      	printf ("\n\t\t\t\tYou have selected Omena.");
      	bill = 60;
      	printf ("Your bill is %dKsh",bill);
      	break;
      	
      	case 9:
      	printf ("\n\t\t\t\tYou have selected Sukuma.");
      	bill = 30;
      	printf ("Your bill is %dKsh",bill);
      	break;
     
      	case 10:
      	printf ("\n\t\t\t\tYou have selected Beans.");
      	bill = 30;
      	printf ("Your bill is %dKsh",bill);
      	break;
     
        case 11:
      	printf ("\n\t\t\t\tYou have selected Ndengu.");
      	bill = 30;
      	printf ("Your bill is %dKsh",bill);
      	break;
      	
      	case 12:
      	printf ("\n\t\t\t\tYou have selected Cabbage.\t");
      	bill = 30;
      	printf ("Your bill is %dKsh",bill);
      	break;
      	
      	case 13:
      	printf ("\n\t\t\t\tYou have selected Beef.");
      	bill = 100;
      	printf ("Your bill is %dKsh",bill);
      	break;
      	
      	case 14:
      	printf ("\n\t\t\t\tYou have selected Chips.");
      	bill = 120;
      	printf ("Your bill is %dKsh",bill);
      	break;
      	
      	case 15:
      	printf ("\n\t\t\t\tYou have selected Ugali with Sukuma/Cabbage and Beef.");
      	bill = 170;
      	printf ("Your bill is %dKsh",bill);
      	break;
      	
      	case 16:
      	printf ("\n\t\t\t\tYou have selected Ugali with Sukuma/Cabbage.");
      	bill = 70;
      	printf ("Your bill is %dKsh",bill);
      	break;
      	
      	case 17:
      	printf ("\n\t\t\t\tYou have selected Ugali with Beans/Ndengu.");
      	bill = 70;
      	printf ("Your bill is %dKsh",bill);
      	break;
      	
      	case 18:
      	printf ("\n\t\t\t\tYou have selected Ugali with Beef.");
      	bill = 140;
      	printf ("Your bill is %dKsh",bill);
      	break;
      	
      	case 19:
      	printf ("\n\t\t\t\tYou have selected Ugali with Chicken.");
      	bill = 280;
      	printf ("Your bill is %dKsh",bill);
      	break;
      	
      	case 20:
      	printf ("\n\t\t\t\tYou have selected Ugali with Fish.");
      	bill = 240;
      	printf ("Your bill is %dKsh",bill);
      	break;
      	
      	case 21:
      	printf ("\n\t\t\t\tYou have selected Ugali with Omena.");
      	bill = 100;
      	printf ("Your bill is %dKsh",bill);
      	break;
      	
      	
      	case 22:
      	printf ("\n\t\t\t\tYou have selected Rice with Sukuma/Cabbage and Beef.");
      	bill = 170;
      	printf ("Your bill is %dKsh",bill);
      	break;
      	
      	case 23:
      	printf ("\n\t\t\t\tYou have selected Rice with Sukuma/Cabbage.");
      	bill = 70;
      	printf ("Your bill is %dKsh",bill);
      	break;
      	
      	case 24:
      	printf ("\n\t\t\t\tYou have selected Rice with Beans/Ndengu.");
      	bill = 70;
      	printf ("Your bill is %dKsh",bill);
      	break;
      	
      	case 25:
      	printf ("\n\t\t\t\tYou have selected Rice with Beef.");
      	bill = 140;
      	printf ("Your bill is %dKsh",bill);
      	break;
      	
      	case 26:
      	printf ("\n\t\t\t\tYou have selected Rice with Chicken.");
      	bill = 280;
      	printf ("Your bill is %dKsh",bill);
      	break;
      	
      	case 27:
      	printf ("\n\t\t\t\tYou have selected Rice with Fish.");
      	bill = 240;
      	printf ("Your bill is %dKsh",bill);
      	break;
      	
      	case 28:
      	printf ("\n\t\t\t\tYou have selected Chapati with Beans/Ndengu.");
      	bill = 50;
      	printf ("Your bill is %dKsh",bill);
      	break;
      	
      	case 29:
      	printf ("\n\t\t\t\tYou have selected Chapati with Beef.");
      	bill = 120;
      	printf ("Your bill is %dKsh",bill);
      	break;
      	
      	case 30:
      	printf ("\n\t\t\t\tYou have selected Chips with Chicken.");
      	bill = 340;
      	printf ("Your bill is %dKsh",bill);
      	break;
      
    }
    
    if (choice2>0 && choice2<31)
        {
		
        printf ("\n\n\t\t\t\t1. Cash\n\t\t\t\t2. ATM Card\n\t\t\t\t3. M-Pesa\nChoose your payment method:\n");
        scanf ("%d", &pay); //The user's choice is stored in pay variable
        
        if( pay==1)
        {
        	
        	printf ("\n\t\t\t\tPlease pay %dKsh to the cashier.",bill);
        	printf ("\n\t\t\t\tYour payment %dKsh  for the receipt %d has been received.Thank You\n\t\t\t\tPlease proceed to the Serving Wing to get your meal.\n", bill, rand_num);
        	
		}
		
		if(pay==2)
		{
			
			printf ("\n\t\t\t\tSwipe your ATM card at the bar scanner.Your bill is %dKsh.",bill);
			//The user swipes the ATM card and the payment is received
			printf ("\n\t\t\t\tYour payment %dKsh for the receipt %d has been received.Thank You\n\t\t\t\tPlease proceed to the Serving Wing to get your meal.\n", bill, rand_num);
		}
		
		if(pay==3)
		{
			
			printf ("\n\n\t\t\t\tGo to M-Pesa menu.");
			printf ("\n\t\t\t\tSelect Lipa Na M-Pesa.\n\t\t\t\tSelect Buy Goods and Services.\n\t\t\t\tOur Till Number is 230023.\n\t\t\t\tEnter bill %dKsh.\n\t\t\t\tEnter your M-Pesa Pin.\n",bill);
		    printf ("\n\t\t\t\tYour payment %dKsh  for the receipt %d has been received.Thank You\n\t\t\t\tPlease proceed to the Serving Wing to get your meal.\n", bill, rand_num);
        	
			
		}
   }
   
   else 
    printf ("\n\t\t\t\tInvalid choice.Please select the matching numbers\n");
    
        
}

void dinnerMeal()

{
	
		int rand_num;

srand(time(NULL)); // seed the random number generator with current time
rand_num = rand() % 90000 + 10000; // generate a random number between 10000 and 99999

	
	printf ("\t\t\t\tGood Evening.You have choosen to take a dinner meal.\n");
	
	printf ("\t\t\t\tHere is the list of all the dinner meals we offer\n\n");
	
	char dMeals_main [] = "\t\t\t\t1.Ugali - 40Ksh\n\t\t\t\t2.Rice - 40Ksh\n\t\t\t\t3.Pilau - 70Ksh\n\t\t\t\t4.Chapati - 20Ksh\n\t\t\t\t5.Biriyani - 105Ksh\n\t\t\t\t6.Chicken - 240Ksh\n\t\t\t\t7.Fish - 200Ksh\n\t\t\t\t8.Omena - 60Ksh\n\n";
    char dMeals_sec [] = "\t\t\t\t9.Sukuma - 30Ksh\n\t\t\t\t10.Beans - 30Ksh\n\t\t\t\t11.Ndengu - 30Ksh\n\t\t\t\t12.Cabbage - 30Ksh\n\t\t\t\t13.Beef - 100Ksh\n\t\t\t\t14.Chips - 120Ksh\n\n";
    char d_Meals_combined [] = "\t\t\t\t15.Ugali with Sukuma/Cabbage and Beef - 170Ksh\n\t\t\t\t16.Ugali with Sukuma/Cabbage - 70Ksh\n\t\t\t\t17.Ugali with Beans/Ndengu  - 70Ksh\n\t\t\t\t18.Ugali with Beef - 140Ksh\n\t\t\t\t19.Ugali with Chicken - 280Ksh\n\t\t\t\t20.Ugali with Fish - 240Ksh\n\t\t\t\t21.Ugali with Omena - 100Ksh\n\n";
    char d_Meals_combined2 [] = "\t\t\t\t22.Rice with Sukuma/Cabbage and Beef - 170Ksh\n\t\t\t\t23.Rice with Sukuma/Cabbage - 70Ksh\n\t\t\t\t24.Rice with Beans/Ndengu - 70Ksh\n\t\t\t\t25.Rice with Beef - 140Ksh\n\t\t\t\t26.Rice with Chicken - 280Ksh\n\t\t\t\t27.Rice with Fish - 240Ksh\n\n";
	char d_Meals_combined3 [] = "\t\t\t\t28.Chapati with Beans or Ndengu - 50Ksh\n\t\t\t\t29.Chapati with Beef - 120Ksh\n\t\t\t\t30.Chips with Chicken - 340Ksh\n";
	//This code prints the menu lists for lunch meals
	
	for (i = 0;dMeals_main [i] != '\0'; i++)
	 {
        printf("%c" ,dMeals_main [i]);
     }
	 
	 for (i = 0;dMeals_sec [i] != '\0'; i++) 
	 {
        printf("%c" ,dMeals_sec [i]);
     }
     
     for (i = 0;d_Meals_combined [i] != '\0'; i++) 
	 {
        printf("%c" ,d_Meals_combined [i]);
     }
     
      for (i = 0;d_Meals_combined2 [i] != '\0'; i++) 
	 {
        printf("%c" ,d_Meals_combined2 [i]);
     }
     
      for (i = 0;d_Meals_combined3 [i] != '\0'; i++) 
	 {
        printf("%c" ,d_Meals_combined3 [i]);
     }
     
      printf ("Please select the desired meal you would like to take:\n");
      scanf ("%d",&choice2); //The user's choice is stored in the variable choice2
      
     
      switch (choice2)
      {
      	case 1:
      	printf ("\n\t\t\t\tYou have selected Ugali.");
      	bill = 40;
      	printf ("Your bill is %dKsh",bill);
      	break;
      	
      	case 2:
      	printf ("\n\t\t\t\tYou have selected Rice.");
      	bill = 40;
      	printf ("Your bill is %dKsh",bill);
      	break;
      	
	    case 3:
      	printf ("\n\t\t\t\tYou have selected Pilau.");
      	bill = 70;
      	printf ("Your bill is %dKsh",bill);
      	break;
      	
      	case 4:
      	printf ("\n\t\t\t\tYou have selected Chapati.");
      	bill = 20;
      	printf ("Your bill is %dKsh",bill);
      	break;
      	
      	case 5:
      	printf ("\n\t\t\t\tYou have selected Biriyani.");
      	bill = 105;
      	printf ("Your bill is %dKsh",bill);
      	break;
      	
      	case 6:
      	printf ("\n\t\t\t\tYou have selected Chicken.");
      	bill = 240;
      	printf ("Your bill is %dKsh",bill);
      	break;
      
      	case 7:
      	printf ("\n\t\t\t\tYou have selected Fish.");
      	bill = 200;
      	printf ("Your bill is %dKsh",bill);
      	break;
      
      	case 8:
      	printf ("\n\t\t\t\tYou have selected Omena.");
      	bill = 60;
      	printf ("Your bill is %dKsh",bill);
      	break;
      	
      	case 9:
      	printf ("\n\t\t\t\tYou have selected Sukuma.");
      	bill = 30;
      	printf ("Your bill is %dKsh",bill);
      	break;
     
      	case 10:
      	printf ("\n\t\t\t\tYou have selected Beans.");
      	bill = 30;
      	printf ("Your bill is %dKsh",bill);
      	break;
     
        case 11:
      	printf ("\n\t\t\t\tYou have selected Ndengu.");
      	bill = 30;
      	printf ("Your bill is %dKsh",bill);
      	break;
      	
      	case 12:
      	printf ("\n\t\t\t\tYou have selected Cabbage.");
      	bill = 30;
      	printf ("Your bill is %dKsh",bill);
      	break;
      	
      	case 13:
      	printf ("\n\t\t\t\tYou have selected Beef.");
      	bill = 100;
      	printf ("Your bill is %dKsh",bill);
      	break;
      	
      	case 14:
      	printf ("\n\t\t\t\tYou have selected Chips.");
      	bill = 120;
      	printf ("Your bill is %dKsh",bill);
      	break;
      	
      	case 15:
      	printf ("\n\t\t\t\tYou have selected Ugali with Sukuma/Cabbage and Beef.");
      	bill = 170;
      	printf ("Your bill is %dKsh",bill);
      	break;
      	
      	case 16:
      	printf ("\n\t\t\t\tYou have selected Ugali with Sukuma/Cabbage.");
      	bill = 70;
      	printf ("Your bill is %dKsh",bill);
      	break;
      	
      	case 17:
      	printf ("\n\t\t\t\tYou have selected Ugali with Beans/Ndengu.");
      	bill = 70;
      	printf ("Your bill is %dKsh",bill);
      	break;
      	
      	case 18:
      	printf ("\n\t\t\t\tYou have selected Ugali with Beef.");
      	bill = 140;
      	printf ("Your bill is %dKsh",bill);
      	break;
      	
      	case 19:
      	printf ("\n\t\t\t\tYou have selected Ugali with Chicken.");
      	bill = 280;
      	printf ("Your bill is %dKsh",bill);
      	break;
      	
      	case 20:
      	printf ("\n\t\t\t\tYou have selected Ugali with Fish.");
      	bill = 240;
      	printf ("Your bill is %dKsh",bill);
      	break;
      	
      	case 21:
      	printf ("\n\t\t\t\tYou have selected Ugali with Omena.");
      	bill = 100;
      	printf ("Your bill is %dKsh",bill);
      	break;
      	
      	
      	case 22:
      	printf ("\n\t\t\t\tYou have selected Rice with Sukuma/Cabbage and Beef.");
      	bill = 170;
      	printf ("Your bill is %dKsh",bill);
      	break;
      	
      	case 23:
      	printf ("\n\t\t\t\tYou have selected Rice with Sukuma/Cabbage.");
      	bill = 70;
      	printf ("Your bill is %dKsh",bill);
      	break;
      	
      	case 24:
      	printf ("\n\t\t\t\tYou have selected Rice with Beans/Ndengu.");
      	bill = 70;
      	printf ("Your bill is %dKsh",bill);
      	break;
      	
      	case 25:
      	printf ("\n\t\t\t\tYou have selected Rice with Beef.");
      	bill = 140;
      	printf ("Your bill is %dKsh",bill);
      	break;
      	
      	case 26:
      	printf ("\n\t\t\t\tYou have selected Rice with Chicken.");
      	bill = 280;
      	printf ("Your bill is %dKsh",bill);
      	break;
      	
      	case 27:
      	printf ("\n\t\t\t\tYou have selected Rice with Fish.");
      	bill = 240;
      	printf ("Your bill is %dKsh",bill);
      	break;
      	
      	case 28:
      	printf ("\n\t\t\t\tYou have selected Chapati with Beans/Ndengu.");
      	bill = 50;
      	printf ("Your bill is %dKsh",bill);
      	break;
      	
      	case 29:
      	printf ("\n\t\t\t\tYou have selected Chapati with Beef.");
      	bill = 120;
      	printf ("Your bill is %dKsh",bill);
      	break;
      	
      	case 30:
      	printf ("\n\t\t\t\tYou have selected Chips with Chicken.");
      	bill = 340;
      	printf ("Your bill is %dKsh",bill);
      	break;
      
    }
      
	    if (choice2>0 && choice2<31)
		
        {
		
        printf ("\n\n\t\t\t\t1. Cash\n\t\t\t\t2. ATM Card\n\t\t\t\t3. M-Pesa\nChoose your payment method:\n");
        scanf ("%d", &pay); //The user's choice is stored in pay variable
        
        if( pay==1)
        {
        	
        	printf ("\n\t\t\t\tPlease pay %dKsh to the cashier.",bill);
        	printf ("\n\t\t\t\tYour payment %dKsh  for the receipt %d has been received.Thank You\n\t\t\t\tPlease proceed to the Serving Wing to get your meal.\n", bill, rand_num);
        	
		}
		
		if(pay==2)
		{
			
			printf ("\n\t\t\t\tSwipe your ATM card at the bar scanner.Your bill is %dKsh.",bill);
			//The user swipes the ATM card and the payment is received
			printf ("\n\t\t\t\tYour payment %dKsh for the receipt %d has been received.Thank You\n\t\t\t\tPlease proceed to the Serving Wing to get your meal.\n", bill, rand_num);
		}
		
		if(pay==3)
		{
			
			printf ("\n\n\t\t\t\tGo to M-Pesa menu.");
			printf ("\n\t\t\t\tSelect Lipa Na M-Pesa.\n\t\t\t\tSelect Buy Goods and Services.\n\t\t\t\tOur Till Number is 230023.\n\t\t\t\tEnter bill %dKsh.\n\t\t\t\tEnter your M-Pesa Pin.\n",bill);
		    printf ("\n\t\t\t\tYour payment %dKsh  for the receipt %d has been received.Thank You\n\t\t\t\tPlease proceed to the Serving Wing to get your meal.\n", bill, rand_num);
        	
			
		}
   }
   
   else 
    printf ("\n\t\t\t\tInvalid choice.Please select the matching numbers\n");
    
}

void drinksMeal()

{
   
   		int rand_num;

srand(time(NULL)); // seed the random number generator with current time
rand_num = rand() % 90000 + 10000; // generate a random number between 10000 and 99999

	
	printf ("\n\t\t\t\tGood Evening.You have choosen to take a drink.\n");
	
	printf ("\t\t\t\tHere is the types of drinks we offer.\n\t\t\t\t1.Cocktails\n\t\t\t\t2.Alcoholic Drinks\n\t\t\t\t3.Non-Alcoholic Drinks\n\n");
	
	char drMeals_cock [] = "\t\t\t\t1.Dawa Cocktail - 200Ksh\n\t\t\t\t2.Tusker Maltini - 240Ksh\n\t\t\t\t3.Safari Margarita - 300Ksh\n\t\t\t\t4.Pina Colada - 350Ksh\n\t\t\t\t5.Mojito - 150Ksh\n\t\t\t\t6.Espresso Martini - 350Ksh\n\n";
    char drMeals_alc [] = "\t\t\t\t7.Tusker - 220Ksh\n\t\t\t\t8.Pilsner - 230Ksh\n\t\t\t\t9.White Cap - 230Ksh\n\t\t\t\t10.Vodka - 330Ksh\n\t\t\t\t11.Gin - 200Ksh\n\t\t\t\t12.Whiskey - 420Ksh\n\t\t\t\t13.Smirnoff - 250Ksh\n\t\t\t\t14.Jonnie Walker - 420Ksh\n\t\t\t\t15.Bacardi - 330Ksh\n\n";
    char dr_Meals_nonAlc [] = "\t\t\t\t16.Coca-Cola - 70Ksh\n\t\t\t\t17.Fanta - 70Ksh\n\t\t\t\t18.Sprite  - 70Ksh\n\t\t\t\t19.Pepsi - 100Ksh\n\t\t\t\t20.Krest - 70Ksh\n\t\t\t\t21.Stoney Tangawizi - 70Ksh\n\t\t\t\t22.Water - 60Ksh\n\t\t\t\t23.Madafu - 110Ksh\n\n";
    char dr_Meals_nonAlc2 [] = "\t\t\t\t24.Milkshakes - 150Ksh\n"; 
    char dr_Meals_nonAlc3 [] = "\t\t\t\t25.Smoothies - 150Ksh\n\n";	
	                            
	for (i = 0;drMeals_cock [i] != '\0'; i++)
	 {
        printf("%c" ,drMeals_cock [i]);
     }
	 
	 for (i = 0;drMeals_alc [i] != '\0'; i++) 
	 {
        printf("%c" ,drMeals_alc [i]);
     }
     
     for (i = 0;dr_Meals_nonAlc [i] != '\0'; i++) 
	 {
        printf("%c" ,dr_Meals_nonAlc [i]);
     }
     
      for (i = 0;dr_Meals_nonAlc2 [i] != '\0'; i++) 
	 {
        printf("%c" ,dr_Meals_nonAlc2 [i]);
     }
     
      for (i = 0;dr_Meals_nonAlc3 [i] != '\0'; i++) 
	 {
        printf("%c" ,dr_Meals_nonAlc3 [i]);
     }
     
      printf ("\t\t\t\tPlease select the desired drink you would like to take:\n");
      scanf ("%d",&choice2); //The user's choice is stored in the variable choice2
      
      
     switch (choice2)
     {
     	
     	case 1:
     	printf ("\n\t\t\t\tYou have selected Dawa Cocktail.");
     	bill = 200;
     	printf ("Your bill is %dKsh",bill);
     
	 
	    case 2:
      	printf ("\n\t\t\t\tYou have selected Tusker Maltini.");
      	bill = 240;
      	printf ("Your bill is %dKsh",bill);
      	break;
      	
      	case 3:
      	printf ("\n\t\t\t\tYou have selected Safari Magarita.");
      	bill = 300;
      	printf ("Your bill is %dKsh",bill);
      	break;
      	
	    case 4:
      	printf ("\n\t\t\t\tYou have selected Pina Colada.");
      	bill = 350;
      	printf ("Your bill is %dKsh",bill);
      	break;
      	
      	case 5:
      	printf ("\n\t\t\t\tYou have selected Mojito.");
      	bill = 150;
      	printf ("Your bill is %dKsh",bill);
      	break;
      	
      	case 6:
      	printf ("\n\t\t\t\tYou have selected Espresso Martini.");
      	bill = 350;
      	printf ("Your bill is %dKsh",bill);
      	break;
      	
      	case 7:
      	printf ("\n\t\t\t\tYou have selected Tusker.");
      	bill = 220;
      	printf ("Your bill is %dKsh",bill);
      	break;
      
      	case 8:
      	printf ("\n\t\t\t\tYou have selected Pilsner.");
      	bill = 230;
      	printf ("Your bill is %dKsh",bill);
      	break;
      
      	case 9:
      	printf ("\n\t\t\t\tYou have selected White Cap.");
      	bill = 230;
      	printf ("Your bill is %dKsh",bill);
      	break;
      	
      	case 10:
      	printf ("\n\t\t\t\tYou have selected Vodka.");
      	bill = 330;
      	printf ("Your bill is %dKsh",bill);
      	break;
     
      	case 11:
      	printf ("\n\t\t\t\tYou have selected Gin.");
      	bill = 200;
      	printf ("Your bill is %dKsh",bill);
      	break;
     
        case 12:
      	printf ("\n\t\t\t\tYou have selected Whiskey.");
      	bill = 420;
      	printf ("Your bill is %dKsh",bill);
      	break;
    
        case 13:
      	printf ("\n\t\t\t\tYou have selected Smirnoff.");
      	bill = 250;
      	printf ("Your bill is %dKsh",bill);
      	break;
      	
      	case 14:
      	printf ("\n\t\t\t\tYou have selected Jonnie Walker.");
      	bill = 420;
      	printf ("Your bill is %dKsh",bill);
      	break;
      	
      	case 15:
      	printf ("\n\t\t\t\tYou have selected Bacardi.");
      	bill = 350;
      	printf ("Your bill is %dKsh",bill);
      	break;
      	
      	case 16:
      	printf ("\n\t\t\t\tYou have selected Coca-Cola.");
      	bill = 70;
      	printf ("Your bill is %dKsh",bill);
      	break;
      	
      	case 17:
      	printf ("\n\t\t\t\tYou have selected Fanta.");
      	bill = 70;
      	printf ("Your bill is %dKsh",bill);
      	break;
      	
      	case 18:
      	printf ("\n\t\t\t\tYou have selected Sprite.");
      	bill = 70;
      	printf ("Your bill is %dKsh",bill);
      	break;
      	
      	case 19:
      	printf ("\n\t\t\t\tYou have selected Pepsi.");
      	bill = 100;
      	printf ("Your bill is %dKsh",bill);
      	break;
      	
      	case 20:
      	printf ("\n\t\t\t\tYou have selected Krest.");
      	bill = 70;
      	printf ("Your bill is %dKsh",bill);
      	break;
      	
      	case 21:
      	printf ("\n\t\t\t\tYou have selected Stoney Tangawizi.");
      	bill = 70;
      	printf ("Your bill is %dKsh",bill);
      	break;
      	
      	case 22:
      	printf ("\n\t\t\t\tYou have selected Water.");
      	bill = 60;
      	printf ("Your bill is %dKsh",bill);
      	break;
      	
      	case 23:
      	printf ("\n\t\t\t\tYou have selected Madafu.");
      	bill = 110;
      	printf ("Your bill is %dKsh",bill);
      	break;
      	
      	case 24:
      	int m;
		printf ("\n\t\t\t\tYou have selected Milkshakes.\n\t\t\t\tPlease choose your desired milkshake\n\t\t\t\t1.Mango\n\t\t\t\t2.Passion\n\t\t\t\t3.Pineapple\n\t\t\t\t4.Watermelon\n\t\t\t\t5.Orange\n ");
      	scanf ("%d",&m);
      	bill = 100;
      	
		switch (m)
		{
		   case 1:
		   printf ("\t\t\t\tYou have selected a Mango Milkshake.\n");	
      	   printf ("Your bill is %dKsh",bill);
      	   break;
      	   
      	   case 2:
		   printf ("\t\t\t\tYou have selected a Passion Milkshake.\n");	
      	   printf ("Your bill is %dKsh",bill);
      	   break;
      	   
      	   case 3:
		   printf ("\t\t\t\tYou have selected a Pineapple Milkshake.");	
      	   printf ("Your bill is %dKsh",bill);
      	   break;
      	   
      	   case 4:
		   printf ("\t\t\t\tYou have selected a Watermelon Milkshake.");	
      	   printf ("Your bill is %dKsh",bill);
      	   break;
      	   
      	   case 5:
		   printf ("\t\t\t\tYou have selected a Orange Milkshake.");	
      	   printf ("Your bill is %dKsh",bill);
      	   break;
      }
        break;
        
        
        case 25:
      	printf ("\n\t\t\t\tYou have selected Smoothie.\n\t\t\t\tPlease choose your desired smoothie\n\t\t\t\t1.Mango\\t\t\t\t.Banana\n\t\t\t\t3.Avocado\n\t\t\t\t4.Passion\n\t\t\t\t5.Orange\n ");
      	scanf ("%d",& m);
      	bill = 100;
      	
		switch (m)
		{
		   case 1:
		   printf ("\t\t\t\tYou have selected a Mango Smoothie.");	
      	   printf ("Your bill is %dKsh",bill);
      	   break;
      	   
      	   case 2:
		   printf ("\t\t\t\tYou have selected a Banana Smoothie.");	
      	   printf ("Your bill is %dKsh",bill);
      	   break;
      	   
      	   case 3:
		   printf ("\t\t\t\tYou have selected a Avocado Smoothie.");	
      	   printf ("Your bill is %dKsh",bill);
      	   break;
      	   
      	   case 4:
		   printf ("\t\t\t\tYou have selected a Passion Smoothie.");	
      	   printf ("Your bill is %dKsh",bill);
      	   break;
      	   
      	   case 5:
		   printf ("\t\t\t\tYou have selected a Orange Smoothie.");	
      	   printf ("Your bill is %dKsh",bill);
      	   break;
      }
      
        break;	
   }
        if (choice2>0 && choice2<26)
        {
		
        printf ("\n\n\t\t\t\t1. Cash\n\t\t\t\t2. ATM Card\n\t\t\t\t3. M-Pesa\nChoose your payment method:\n");
        scanf ("%d", &pay); //The user's choice is stored in pay variable
        
        if( pay==1)
        {
        	
        	printf ("\n\t\t\t\tPlease pay %dKsh to the cashier.",bill);
        	printf ("\n\t\t\t\tYour payment %dKsh  for the receipt %d has been received.Thank You\n\t\t\t\tPlease proceed to the Serving Wing to get your drink.\n", bill, rand_num);
        	
		}
		
		if(pay==2)
		{
			
			printf ("\n\t\t\t\tSwipe your ATM card at the bar scanner.Your bill is %dKsh.",bill);
			//The user swipes the ATM card and the payment is received
			printf ("\n\t\t\t\tYour payment %dKsh for the receipt %d has been received.Thank You\n\t\t\t\tPlease proceed to the Serving Wing to get your drink.\n", bill, rand_num);
		}
		
		if(pay==3)
		{
			
			printf ("\n\n\t\t\t\tGo to M-Pesa menu.");
			printf ("\n\t\t\t\tSelect Lipa Na M-Pesa.\n\t\t\t\tSelect Buy Goods and Services.\n\t\t\t\tOur Till Number is 230023.\n\t\t\t\tEnter bill %dKsh.\n\t\t\t\tEnter your M-Pesa Pin.\n",bill);
		    printf ("\n\t\t\t\tYour payment %dKsh  for the receipt %d has been received.Thank You\n\t\t\t\tPlease proceed to the Serving Wing to get your drink.\n", bill, rand_num);
        	
			
		}
   }
   
   else 
    printf ("\n\t\t\t\tInvalid choice.Please select the matching numbers\n");
    
	 	
	 
	
	
}		
int main ()

{
	short int choice;
	//This outputs a welcoming message to the user
	printf ("\t\t\t\t----------------Welcome to AfriGlobal Cuisines----------------------\n");
	
	printf ("\t\t\t\tWhat service would you like us to offer to you\n");
	
	printf ("\t\t\t\tChoose the matching numbers\n");
	
	printf ("\t\t\t\tAfter choosing your preferred number key it in and press enter.\n ");
	
	printf ("\n\t\t\t\t1. Breakfast meal\n\t\t\t\t2. Lunch Meal\n\t\t\t\t3. Dinner Meal\n\t\t\t\t4. Drinks\n");
	scanf ("%d",&choice); //The user selection is saved in the short int choice
	
	switch (choice)
	{
		// If the user options with selection one (breakfast meal) the code runs to output breakfast meal choices
		case 1 :
		breakfastMeal ();
		break;
	    
	    // If the user options with selection two (lunch meal) the code runs to output lunch meal choices
	    case 2 :
	    lunchMeal ();
	    break;
	    
	    // If the user options with selection two (dinner meal) the code runs to output dinner meal choices
	    case 3 :
	    dinnerMeal ();
	    break;
	    
	    // If the user options with selection two (drinks meal) the code runs to output drinks meal choices
	    case 4:
	    drinksMeal ();
	    break;
	
		default :
			 printf ("\n\t\t\t\tInvalid choice.Please select the matching numbers\n");
	  
	}
		
	return 0;
}