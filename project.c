#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

// Define color codes
#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN "\033[36m"

float total = 0, discount = 0, grandTotal = 0;
int i = 0, j = 0;
char basket[70][30];
int quantityList[70] = {0};
float priceList[70] = {0};
char serviceList[10][30];
float serviceChargeList[10] = {0};

// Food Outlets
// 1)Amul Store
typedef struct amulStore
{
    char product[30];
    float price;
} amulStore;
amulStore food1[50];

// 2)Banjara Night Canteen
typedef struct banjaraNightCanteen
{
    char product[30];
    float price;
} banjara;
banjara food2[50];

// 3)Chai Sutta Bar
typedef struct chaiSuttaBar
{
    char product[30];
    float price;
} csb;
csb food3[50];

// 4)Anti alcohol
typedef struct antiAlcohol
{
    char product[30];
    float price;
} anti;
anti food4[50];

// 5)Momo Nation Cafe
typedef struct momoNationCafe
{
    char product[30];
    float price;
} mnc;
mnc food5[50];

// 6)Nescafe
typedef struct nescafe
{
    char product[30];
    float price;
} nescafe;
nescafe food6[50];

// 7)Rolls Adda
typedef struct rollsAdda
{
    char product[30];
    float price;
} rollsAdda;
rollsAdda food7[50];

// Medicine stores
// 1)Apollo Pharmacy
typedef struct apolloPharmacy
{
    char product[30];
    float price;
} apollo;
apollo medicine1[50];

// Grocery and Stationary stores(GnS)
// 1)Departmental Store
typedef struct departmentalStore
{
    char product[30];
    float price;
} department;
department GnS1[50];

// 2)Food Court Store
typedef struct foodCourtStore
{
    char product[30];
    float price;
} foodCourtStore;
foodCourtStore GnS2[50];

// 3)Hubnet
typedef struct hubnet
{
    char product[30];
    float price;
} hubnet;
hubnet GnS3[50];

// Services
typedef struct services
{
    char product[30];
    float price;
} services;
services service1[50];

// Functions for food Ordering

// 1
void Amul_Store()
{
    // Amul Store Data
    // CLASSIC FLAVORS
    strcpy(food1[0].product, "Vanilla Ice Cream"); // 1
    food1[0].price = 25.0;
    strcpy(food1[1].product, "Chocolate Ice Cream"); // 2
    food1[1].price = 30.0;
    strcpy(food1[2].product, "Strawberry Ice Cream"); // 3
    food1[2].price = 35.0;
    strcpy(food1[3].product, "Mango Ice Cream"); // 4
    food1[3].price = 40.0;
    strcpy(food1[4].product, "Butterscotch Ice Cream"); // 5
    food1[4].price = 35.0;

    // SPECIAL FLAVORS
    strcpy(food1[5].product, "Cookies and Cream Ice Cream"); // 6
    food1[5].price = 45.0;
    strcpy(food1[6].product, "Mint Chocolate Chip Ice Cream"); // 7
    food1[6].price = 50.0;
    strcpy(food1[7].product, "Coffee Crunch Ice Cream"); // 8
    food1[7].price = 50.0;
    strcpy(food1[8].product, "Salted Caramel Ice Cream"); // 9
    food1[8].price = 45.0;
    strcpy(food1[9].product, "Pistachio Ice Cream"); // 10
    food1[9].price = 40.0;

    // FRUIT-BASED FLAVORS
    strcpy(food1[10].product, "Mango Sorbet"); // 11
    food1[10].price = 35.0;
    strcpy(food1[11].product, "Mixed Berry Sorbet"); // 12
    food1[11].price = 40.0;
    strcpy(food1[12].product, "Lemon Sherbet"); // 13
    food1[12].price = 35.0;
    strcpy(food1[13].product, "Watermelon Ice Cream"); // 14
    food1[13].price = 40.0;
    strcpy(food1[14].product, "Pineapple Coconut Ice Cream"); // 15
    food1[14].price = 45.0;

    // NUTTY DELIGHTS
    strcpy(food1[15].product, "Almond Crunch Ice Cream"); // 16
    food1[15].price = 50.0;
    strcpy(food1[16].product, "Peanut Butter Fudge Ice Cream"); // 17
    food1[16].price = 50.0;
    strcpy(food1[17].product, "Hazelnut Swirl Ice Cream"); // 18
    food1[17].price = 45.0;
    strcpy(food1[18].product, "Walnut Brownie Ice Cream"); // 19
    food1[18].price = 50.0;
    strcpy(food1[19].product, "Cashew Caramel Ice Cream"); // 20
    food1[19].price = 45.0;

    // EXOTIC CREATIONS
    strcpy(food1[20].product, "Red Velvet Ice Cream"); //21
    food1[20].price = 55.0;
    strcpy(food1[21].product, "Matcha Green Tea Ice Cream"); //22
    food1[21].price = 50.0;
    strcpy(food1[22].product, "Passion Fruit Gelato"); // 23
    food1[22].price = 50.0;
    strcpy(food1[23].product, "Lychee Rose Ice Cream"); // 24
    food1[23].price = 45.0;
    printf("\n******************************\n");
    printf("Here is the Menu of Amul Store \n");
    for (int i = 0; food1[i].price != 0; i++)
    {
        
        if(i==0){
            printf("----------------CLASSIC FLAVORS----------------\n");
        }
        else if(i==5){
            printf("----------------SPECIAL FLAVORS----------------\n");
        }
        else if(i==10){
            printf("----------------FRUIT-BASED FLAVORS----------------\n");
        }
        else if(i==15){
            printf("----------------NUTTY DELIGHTS----------------\n");
        }
        else if(i==20){
            printf("----------------EXOTIC CREATIONS----------------\n");
        }
        printf("%-30s - %.2fRs code-%-30d\n", food1[i].product, food1[i].price, i + 1);
    }
    int ch = 1;
    int code, quant;
    float tempPrice;
    while (ch == 1)
    {
        printf("Enter the product code you want to add to your basket : ");
        scanf("%d", &code);
        code = code - 1;
        printf("Enter quantity : ");
        scanf("%d", &quant);
        tempPrice = (quant * food1[code].price);
        // Updating Order Details
        strcpy(basket[i] , food1[code].product);
        quantityList[i] = quant;
        priceList[i] = tempPrice;
        i++;
        // Updating Total Price
        total += tempPrice;
        printf("Enter 1 to add more items to Basket Or any other value to exit :  ");
        scanf("%d", &ch);
    }
}
// 2
void Banjara_Night_Canteen()
{
    // Banjara Night Canteen
    // STARTER
    strcpy(food2[0].product, "French Fries"); // 1
    food2[0].price = 50.0;
    strcpy(food2[1].product, "Chicken Wings"); // 2
    food2[1].price = 80.0;
    strcpy(food2[2].product, "Garlic Bread"); // 3
    food2[2].price = 60.0;
    
    // MAIN COURSE
    strcpy(food2[3].product, "Butter Chicken"); // 4
    food2[3].price = 170.0;
    strcpy(food2[4].product, "Paneer Tikka Masala"); // 5
    food2[4].price = 120.0;
    strcpy(food2[5].product, "Biryani"); // 6
    food2[5].price = 200.0;
    strcpy(food2[6].product, "Dal Makhani"); // 7
    food2[6].price = 80.0;
    strcpy(food2[7].product, "Chicken Biryani"); // 8
    food2[7].price = 250.0;
    strcpy(food2[8].product, "Palak Paneer"); // 9
    food2[8].price = 100.0;
    strcpy(food2[9].product, "Chicken Curry"); // 10
    food2[9].price = 150.0;
    
    // INDIAN BREADS
    strcpy(food2[10].product, "Roti"); // 11
    food2[10].price = 10.0;
    strcpy(food2[11].product, "Paratha"); // 12
    food2[11].price = 20.0;
    strcpy(food2[12].product, "Rice"); // 13
    food2[12].price = 30.0;
    strcpy(food2[13].product, "Naan"); // 14
    food2[13].price = 25.0;
    
    // DESSERTS
    strcpy(food2[14].product, "Chocolate Brownie"); // 15
    food2[14].price = 80.0;
    strcpy(food2[15].product, "Ice Cream Sundae"); // 16
    food2[15].price = 70.0;
    strcpy(food2[16].product, "Cheesecake"); // 17
    food2[16].price = 90.0;
    printf("\n******************************\n");
    printf("Here is the Menu of Banjara Night Canteen \n");
    for (int i = 0; food2[i].price != 0; i++)
    {
        if(i==0){
            printf("----------------STARTER----------------\n");
        }
        else if(i==3){
            printf("----------------MAIN COURSE----------------\n");
        }
        else if(i==10){
            printf("----------------INDIAN BREADS----------------\n");
        }
        else if(i==14){
            printf("----------------DESSERTS----------------\n");
        }
        printf("%-30s - %.2fRs code-%-30d\n", food2[i].product, food2[i].price, i + 1);
    }
    int ch = 1;
    int code, quant;
    float tempPrice;
    while (ch == 1)
    {
        printf("Enter the product code you want to add to your basket : ");
        scanf("%d", &code);
        code = code - 1;
        printf("Enter quantity : ");
        scanf("%d", &quant);
        tempPrice = (quant * food2[code].price);
        // Updating Order Details
        strcpy(basket[i] , food2[code].product);
        quantityList[i] = quant;
        priceList[i] = tempPrice;
        i++;
        // Updating Total Price
        total += tempPrice;
        printf("Enter 1 to add more items to Basket Or any other value to exit :  ");
        scanf("%d", &ch);
    }
}
// 3
void Chai_Sutta_Bar()
{
    // Chai Sutta Bar
    //CHAI
    strcpy(food3[0].product, "Masala Chai"); // 1
    food3[0].price = 15.0;
    strcpy(food3[1].product, "Ginger Chai"); // 2
    food3[1].price = 18.0;
    strcpy(food3[2].product, "Elaichi Chai"); // 3
    food3[2].price = 20.0;
    strcpy(food3[3].product, "Cardamom Chai"); // 4
    food3[3].price = 22.0;
    strcpy(food3[4].product, "Kesar Chai"); // 5
    food3[4].price = 25.0;
    strcpy(food3[5].product, "Mint Green Tea"); // 6
    food3[5].price = 27.0;

    //COFFEE
    strcpy(food3[6].product, "Cold Coffee"); // 7
    food3[6].price = 30.0;
    strcpy(food3[7].product, "Chocolate Coffee"); // 8
    food3[7].price = 35.0;
    strcpy(food3[8].product, "Cappuccino"); // 9
    food3[8].price = 40.0;
    strcpy(food3[9].product, "Mocha Coffee"); // 10
    food3[9].price = 45.0;
    printf("\n******************************\n");
    printf("Here is the Menu of Chai Sutta Bar\n");
    for (int i = 0; food3[i].price != 0; i++)
    {
        if(i==0){
            printf("----------------CHAI----------------\n");
        }
        else if(i==6){
            printf("----------------COFFEE----------------\n");
        }
        printf("%-30s - %.2fRs code-%-30d\n", food3[i].product, food3[i].price, i + 1);
    }
    int ch = 1;
    int code, quant;
    float tempPrice;
    while (ch == 1)
    {
        printf("Enter the product code you want to add to your basket : ");
        scanf("%d", &code);
        code = code - 1;
        printf("Enter quantity : ");
        scanf("%d", &quant);
        tempPrice = (quant * food3[code].price);
        // Updating Order Details
        strcpy(basket[i] , food3[code].product);
        quantityList[i] = quant;
        priceList[i] = tempPrice;
        i++;
        // Updating Total Price
        total += tempPrice;
        printf("Enter 1 to add more items to Basket Or any other value to exit :  ");
        scanf("%d", &ch);
    }
}
// 4
void Anti_Alcohol()
{
    // Anti Alcohol
    strcpy(food4[0].product, "BlueLagoon"); // 1
    food4[0].price = 60.0;
    strcpy(food4[1].product, "PomogranateJuice"); // 2
    food4[1].price = 60.0;
    strcpy(food4[2].product, "PineappleKiwiSmoothie"); // 3
    food4[2].price = 70.0;
    strcpy(food4[3].product, "StrawberryShake"); // 4
    food4[3].price = 80.0;
    strcpy(food4[4].product, "ChocolateCaramelColdCoffee"); // 5
    food4[4].price = 90.0;
    strcpy(food4[5].product, "MangoMilkshake"); // 6
    food4[5].price = 65.0;
    strcpy(food4[6].product, "WatermelonJuice"); // 7
    food4[6].price = 55.0;
    strcpy(food4[7].product, "BananaSmoothie"); // 8
    food4[7].price = 75.0;
    strcpy(food4[8].product, "MintLemonade"); // 9
    food4[8].price = 70.0;
    strcpy(food4[9].product, "StrawberryCheesecakeMilkshake"); // 10
    food4[9].price = 85.0;
    printf("\n******************************\n");
    printf("Here is the Menu of Anti Alcohol\n");
    for (int i = 0; food4[i].price != 0; i++)
    {
        printf("%-30s - %.2fRs code-%-30d\n", food4[i].product, food4[i].price, i + 1);
    }
    int ch = 1;
    int code, quant;
    float tempPrice;
    while (ch == 1)
    {
        printf("Enter the product code you want to add to your basket : ");
        scanf("%d", &code);
        code = code - 1;
        printf("Enter quantity : ");
        scanf("%d", &quant);
        tempPrice = (quant * food4[code].price);
        // Updating Order Details
        strcpy(basket[i] , food4[code].product);
        quantityList[i] = quant;
        priceList[i] = tempPrice;
        i++;
        // Updating Total Price
        total += tempPrice;
        printf("Enter 1 to add more items to Basket Or any other value to exit :  ");
        scanf("%d", &ch);
    }
}
// 5
void Momo_Nation_Cafe()
{
    // Momo Nation Cafe
    //MOMOS
    strcpy(food5[0].product, "VegMomos"); // 1
    food5[0].price = 79.0;
    strcpy(food5[1].product, "Crispy Panner Momos"); // 2
    food5[1].price = 99.0;
    strcpy(food5[2].product, "Chilly Chicken Momos"); // 3
    food5[2].price = 109.0;

    //BURGER COMBOS
    strcpy(food5[3].product, "Veg Burger + Coke COMBO"); // 4
    food5[3].price = 119.0;
    strcpy(food5[4].product, "Chicken Burger + Coke COMBO"); // 5
    food5[4].price = 129.0;

    //PIZZA 
    strcpy(food5[5].product, "Cheese Burst Pizza"); // 6
    food5[5].price = 199.0;
    strcpy(food5[6].product, "Margherita Pizza"); // 7
    food5[6].price = 159.0;
    strcpy(food5[7].product, "Paneer Tikka Pizza"); // 8
    food5[7].price = 189.0;
    strcpy(food5[8].product, "Veggie Delight Pizza"); // 9
    food5[8].price = 169.0;
    strcpy(food5[9].product, "Chicken Supreme Pizza"); // 10
    food5[9].price = 209.0;
    printf("\n******************************\n");
    printf("Here is the Menu of Momo Nation Cafe \n");
    for (int i = 0; food5[i].price != 0; i++)
    {
        if(i==0){
            printf("----------------MOMOS----------------\n");
        }
        else if(i==3){
            printf("----------------BURGER COMBOS----------------\n");
        }
        else if(i==5){
            printf("----------------PIZZA----------------\n");
        }
        printf("%-30s - %.2fRs code-%-30d\n", food5[i].product, food5[i].price, i + 1);
    }
    int ch = 1;
    int code, quant;
    float tempPrice;
    while (ch == 1)
    {
        printf("Enter the product code you want to add to your basket : ");
        scanf("%d", &code);
        code = code - 1;
        printf("Enter quantity : ");
        scanf("%d", &quant);
        tempPrice = (quant * food5[code].price);
        // Updating Order Details
        strcpy(basket[i] , food5[code].product);
        quantityList[i] = quant;
        priceList[i] = tempPrice;
        i++;
        // Updating Total Price
        total += tempPrice;
        printf("Enter 1 to add more items to Basket Or any other value to exit :  ");
        scanf("%d", &ch);
    }
}
// 6
void Nescafe()
{
    // Nescafe
    strcpy(food6[0].product, "Tea"); // 1
    food6[0].price = 15.0;
    strcpy(food6[1].product, "Coffee"); // 2
    food6[1].price = 15.0;
    strcpy(food6[2].product, "ColdCoffee"); // 3
    food6[2].price = 30.0;
    strcpy(food6[3].product, "Chocolava"); // 4
    food6[3].price = 60.0;
    strcpy(food6[4].product, "Sandwich"); // 5
    food6[4].price = 45.0;
    strcpy(food6[5].product, "Muffin"); // 6
    food6[5].price = 25.0;
    strcpy(food6[6].product, "Croissant"); // 7
    food6[6].price = 35.0;
    strcpy(food6[7].product, "Chinese Puff"); // 8
    food6[7].price = 30.0;
    strcpy(food6[8].product, "Brownie"); // 9
    food6[8].price = 50.0;
    strcpy(food6[9].product, "Donut"); // 10
    food6[9].price = 30.0;
    printf("\n******************************\n");
    printf("Here is the Menu of Nescafe\n");
    for (int i = 0; food6[i].price != 0; i++)
    {
        printf("%-30s - %.2fRs code-%-30d\n", food6[i].product, food6[i].price, i + 1);
    }
    int ch = 1;
    int code, quant;
    float tempPrice;
    while (ch == 1)
    {
        printf("Enter the product code you want to add to your basket : ");
        scanf("%d", &code);
        code = code - 1;
        printf("Enter quantity : ");
        scanf("%d", &quant);
        tempPrice = (quant * food6[code].price);
        // Updating Order Details
        strcpy(basket[i] , food6[code].product);
        quantityList[i] = quant;
        priceList[i] = tempPrice;
        i++;
        // Updating Total Price
        total += tempPrice;
        printf("Enter 1 to add more items to Basket Or any other value to exit :  ");
        scanf("%d", &ch);
    }
}
// 7
void Rolls_Adda()
{
    // Rolls Adda
    //VEG ROLLS
    strcpy(food7[0].product, "Veg Roll"); // 1
    food7[0].price = 50.0;
    strcpy(food7[1].product, "Panneer Roll"); // 2
    food7[1].price = 60.0;
    strcpy(food7[2].product, "Paneer Chilly Roll"); // 3
    food7[2].price = 70.0;
    strcpy(food7[3].product, "Paneer Tikka Roll"); // 4
    food7[3].price = 75.0;
    strcpy(food7[4].product, "Cheese Burst Roll"); // 5
    food7[4].price = 80.0;

    //NON-VEG ROLLS
    strcpy(food7[5].product, "Egg Roll"); // 6
    food7[5].price = 60.0;
    strcpy(food7[6].product, "Chicken Roll"); // 7
    food7[6].price = 70.0;
    strcpy(food7[7].product, "Chicken Kebab Roll"); // 8
    food7[7].price = 85.0;
    strcpy(food7[8].product, "Double Egg Chicken Roll"); // 9
    food7[8].price = 90.0;
    strcpy(food7[9].product, "MuttonKathiRoll"); // 10
    food7[9].price = 90.0;
    printf("\n******************************\n");
    printf("Here is the Menu of Rolls Adda\n");
    for (int i = 0; food7[i].price != 0; i++)
    {
        if(i==0){
            printf("----------------VEG ROLLS----------------\n");
        }
        else if(i==5){
            printf("----------------NON-VEG ROLLS----------------\n");
        }
        printf("%-30s - %.2fRs code-%-30d\n", food7[i].product, food7[i].price, i + 1);
    }
    int ch = 1;
    int code, quant;
    float tempPrice;
    while (ch == 1)
    {
        printf("Enter the product code you want to add to your basket : ");
        scanf("%d", &code);
        code = code - 1;
        printf("Enter quantity : ");
        scanf("%d", &quant);
        tempPrice = (quant * food7[code].price);
        // Updating Order Details
        strcpy(basket[i] , food7[code].product);
        quantityList[i] = quant;
        priceList[i] = tempPrice;
        i++;
        // Updating Total Price
        total += tempPrice;
        printf("Enter 1 to add more items to Basket Or any other value to exit :  ");
        scanf("%d", &ch);
    }
}
//
void food()
{
    printf("\n******************************\n");
    printf("Enter 1 for Amul Store \n");
    printf("Enter 2 for Banjara Night Canteen \n");
    printf("Enter 3 for Chai Sutta Bar \n");
    printf("Enter 4 for Anti Alcohol \n");
    printf("Enter 5 for Momo Nation Cafe \n");
    printf("Enter 6 for Nescafe \n");
    printf("Enter 7 for Rolls Adda \n");
label2:
    printf("Enter The Hotel or Resturant Name (1-7) : ");
    int k;
    scanf("%d", &k);
    switch (k)
    {
    case 1:
        Amul_Store();
        break;
    case 2:
        Banjara_Night_Canteen();
        break;
    case 3:
        Chai_Sutta_Bar();
        break;
    case 4:
        Anti_Alcohol();
        break;
    case 5:
        Momo_Nation_Cafe();
        break;
    case 6:
        Nescafe();
        break;
    case 7:
        Rolls_Adda();
        break;
    default:
        printf("Enter a valid choice !!!\n ************************\n");
        goto label2;
    }
}

// Fuctions for Medicine Ordering
// Appolo Pharmacy
void medicine()
{
    // Apollo Pharmacy
    strcpy(medicine1[0].product, "Paracetamol"); // 1
    medicine1[0].price = 28.0;
    strcpy(medicine1[1].product, "Cetrizine"); // 2
    medicine1[1].price = 22.0;
    strcpy(medicine1[2].product, "Vicks Vaporov"); // 3
    medicine1[2].price = 40.0;
    strcpy(medicine1[3].product, "ORS"); // 4
    medicine1[3].price = 20.0;
    strcpy(medicine1[4].product, "Horlicks Classic Malt(1KG)"); // 5
    medicine1[4].price = 382.0;
    strcpy(medicine1[5].product, "Band-Aid"); // 6
    medicine1[5].price = 15.0;
    strcpy(medicine1[6].product, "Antacid Tablets"); // 7
    medicine1[6].price = 50.0;
    strcpy(medicine1[7].product, "Eye Drops"); // 8
    medicine1[7].price = 30.0;
    strcpy(medicine1[8].product, "Cough Syrup"); // 9
    medicine1[8].price = 45.0;
    strcpy(medicine1[9].product, "Multivitamin Supplement"); // 10
    medicine1[9].price = 120.0;
    printf("\n******************************\n");
    printf("Here is the List of Medicines Available at Appolo Pharmacy \n");
    for (int i = 0; medicine1[i].price != 0; i++)
    {
        printf("%-30s - %.2fRs code-%-30d\n", medicine1[i].product, medicine1[i].price, i + 1);
    }
    int ch = 1;
    int code, quant;
    float tempPrice;
    while (ch == 1)
    {
        printf("Enter the product code you want to add to your basket : ");
        scanf("%d", &code);
        code = code - 1;
        printf("Enter quantity : ");
        scanf("%d", &quant);
        tempPrice = (quant * medicine1[code].price);
        // Updating Order Details
        strcpy(basket[i] , medicine1[code].product);
        quantityList[i] = quant;
        priceList[i] = tempPrice;
        i++;
        // Updating Total Price
        total += tempPrice;
        printf("Enter 1 to add more items to Basket Or any other value to exit :  ");
        scanf("%d", &ch);
    }
}

// Functions For Grocery and Stationary
// 1)
void departmental_store()
{
    // Departmental Store
    strcpy(GnS1[0].product, "ToothBrush"); // 1
    GnS1[0].price = 25.0;
    strcpy(GnS1[1].product, "ToothPaste(100gm)"); // 2
    GnS1[1].price = 55.0;
    strcpy(GnS1[2].product, "DoveShampoo(250ML)"); // 3
    GnS1[2].price = 110.0;
    strcpy(GnS1[3].product, "DaburChyawanprash(1KG)"); // 4
    GnS1[3].price = 293.0;
    strcpy(GnS1[4].product, "AmulSpray(1KG)"); // 5
    GnS1[4].price = 390.0;
    strcpy(GnS1[5].product, "HandSanitizer(500ml)"); // 6
    GnS1[5].price = 75.0;
    strcpy(GnS1[6].product, "HairOil(200ml)"); // 7
    GnS1[6].price = 90.0;
    strcpy(GnS1[7].product, "BathingSoap"); // 8
    GnS1[7].price = 35.0;
    strcpy(GnS1[8].product, "ShavingCream(100gm)"); // 9
    GnS1[8].price = 50.0;
    strcpy(GnS1[9].product, "FaceWash(150ml)"); // 10
    GnS1[9].price = 120.0;
    printf("\n******************************\n");
    printf("Here is the List of Products Available at Departmental Store \n");
    for (int i = 0; GnS1[i].price != 0; i++)
    {
        printf("%-30s - %.2fRs code-%-30d\n", GnS1[i].product, GnS1[i].price, i + 1);
    }
    int ch = 1;
    int code, quant;
    float tempPrice;
    while (ch == 1)
    {
        printf("Enter the product code you want to add to your basket : ");
        scanf("%d", &code);
        code = code - 1;
        printf("Enter quantity : ");
        scanf("%d", &quant);
        tempPrice = (quant * GnS1[code].price);
        // Updating Order Details
        strcpy(basket[i] , GnS1[code].product);
        quantityList[i] = quant;
        priceList[i] = tempPrice;
        i++;
        // Updating Total Price
        total += tempPrice;
        printf("Enter 1 to add more items to Basket Or any other value to exit :  ");
        scanf("%d", &ch);
    }
}
// 2)
void food_court_store()
{
    // Food Court Store
    strcpy(GnS2[0].product, "Kurkure Masala Munch"); // 1
    GnS2[0].price = 10.0;
    strcpy(GnS2[1].product, "Maggie"); // 2
    GnS2[1].price = 14.0;
    strcpy(GnS2[2].product, "Sugar(1KG)"); // 3
    GnS2[2].price = 40.0;
    strcpy(GnS2[3].product, "TATA Tea(500gm)"); // 4
    GnS2[3].price = 77.0;
    strcpy(GnS2[4].product, "Cashew Nuts(250gm)"); // 5
    GnS2[4].price = 225.0;
    strcpy(GnS2[5].product, "Rice(5KG)"); // 6
    GnS2[5].price = 150.0; 
    strcpy(GnS2[6].product, "Wheat Flour(1KG)"); // 7
    GnS2[6].price = 50.0;
    strcpy(GnS2[7].product, "Pulses(1KG)"); // 8
    GnS2[7].price = 80.0;
    printf("\n******************************\n");
    printf("Here is the List of Products Available at Food Court Store \n");
    for (int i = 0; GnS2[i].price != 0; i++)
    {
        printf("%-30s - %.2fRs code-%-30d\n", GnS2[i].product, GnS2[i].price, i + 1);
    }
    int ch = 1;
    int code, quant;
    float tempPrice;
    while (ch == 1)
    {
        printf("Enter the product code you want to add to your basket : ");
        scanf("%d", &code);
        code = code - 1;
        printf("Enter quantity : ");
        scanf("%d", &quant);
        tempPrice = (quant * GnS2[code].price);
        // Updating Order Details
        strcpy(basket[i] , GnS2[code].product);
        quantityList[i] = quant;
        priceList[i] = tempPrice;
        i++;
        // Updating Total Price
        total += tempPrice;
        printf("Enter 1 to add more items to Basket Or any other value to exit :  ");
        scanf("%d", &ch);
    }
}
// 3)
void hub_net()
{
    // HubNet
    strcpy(GnS3[0].product, "NoteBook"); // 1
    GnS3[0].price = 40.0;
    strcpy(GnS3[1].product, "Pencil Set(2H+2B+HB)"); // 2
    GnS3[1].price = 20.0;
    strcpy(GnS3[2].product, "Practical Copy"); // 3
    GnS3[2].price = 65.0;
    strcpy(GnS3[3].product, "SetSquare Set"); // 4
    GnS3[3].price = 80.0;
    strcpy(GnS3[4].product, "Roller Drafter"); // 5
    GnS3[4].price = 75.0;
    strcpy(GnS3[5].product, "ED Sheets"); // 6
    GnS3[5].price = 110.0;
    strcpy(GnS3[6].product, "Calculator"); // 7
    GnS3[6].price = 150.0;
    strcpy(GnS3[7].product, "Highlighter Set"); // 8
    GnS3[7].price = 30.0;
    strcpy(GnS3[8].product, "Fountain Pen"); // 9
    GnS3[8].price = 50.0;
    strcpy(GnS3[9].product, "Eraser"); // 10
    GnS3[9].price = 5.0;
    printf("\n******************************\n");
    printf("Here is the List of Products Available at Hubnet \n");
    for (int i = 0; GnS3[i].price != 0; i++)
    {
        printf("%-30s - %.2fRs code-%-30d\n", GnS3[i].product, GnS3[i].price, i + 1);
    }
    int ch = 1;
    int code, quant;
    float tempPrice;
    while (ch == 1)
    {
        printf("Enter the product code you want to add to your basket : ");
        scanf("%d", &code);
        code = code - 1;
        printf("Enter quantity : ");
        scanf("%d", &quant);
        tempPrice = (quant * GnS3[code].price);
        // Updating Order Details
        strcpy(basket[i] , GnS3[code].product);
        quantityList[i] = quant;
        priceList[i] = tempPrice;
        i++;
        // Updating Total Price
        total += tempPrice;
        printf("Enter 1 to add more items to Basket Or any other value to exit :  ");
        scanf("%d", &ch);
    }
}
//
void GnS()
{
    printf("\n******************************\n");
    printf("Enter 1 for Departmental Store \n");
    printf("Enter 2 for Food Court Store \n");
    printf("Enter 3 for Hubnet \n");
label3:
    printf("Enter The Grocery OR Stationary Store Name (1-3) : ");
    int k;
    scanf("%d", &k);
    switch (k)
    {
    case 1:
        departmental_store();
        break;
    case 2:
        food_court_store();
        break;
    case 3:
        hub_net();
        break;
    default:
        printf("Enter a valid choice !!!\n ************************\n");
        goto label3;
    }
}

// Function for Services
void service()
{
    // Services
    strcpy(service1[0].product, "BrakeRepairing"); // 1
    service1[0].price = 20.0;
    strcpy(service1[1].product, "PunctureRepairing"); // 2
    service1[1].price = 30.0;
    strcpy(service1[2].product, "Laundry"); // 3
    service1[2].price = 30.0;
    strcpy(service1[3].product, "Taxi(toBihtaStation)"); // 4
    service1[3].price = 220.0;
    strcpy(service1[4].product, "Taxi(toPatnaStation)"); // 5
    service1[4].price = 550.0;
    strcpy(service1[5].product, "Taxi(toPatnaAirport)"); // 6
    service1[5].price = 650.0;
    strcpy(service1[6].product, "HairCut"); // 7
    service1[6].price = 70.0;
    strcpy(service1[7].product, "HairCut+Shaving"); // 8
    service1[7].price = 110.0;
    printf("\n******************************\n");
    printf("Here is the List of Services Available at IITP \n");
    for (int i = 0; service1[i].price != 0; i++)
    {
        printf("%-30s - %.2fRs code-%-30d\n", service1[i].product, service1[i].price, i + 1);
    }
    int ch = 1;
    int code;
    float tempPrice;
    while (ch == 1)
    {
        printf("Enter the product code you want to add to your basket : ");
        scanf("%d", &code);
        code = code - 1;
        if (code == 2)  //Laundry
        { 
            int quant;
            printf("Enter quantity : ");
            scanf("%d", &quant);
            tempPrice = (quant * service1[code].price);
            // Updating Order Details
            strcpy(basket[i] , service1[code].product);
            quantityList[i] = quant;
            priceList[i] = tempPrice;
            i++;
            // Updating Total Price
            total += tempPrice;
        }
        else
        {
            tempPrice = service1[code].price;
            strcpy(serviceList[j] , service1[code].product);
            serviceChargeList[j] = tempPrice;
            j++;
            // Updating Total Price
            total += tempPrice;
        }
        printf("Enter 1 to add more items to Basket Or any other value to exit :  ");
        scanf("%d", &ch);
    }
}

int main()
{
    // About
    printf("CampusMart is a versatile delivery service platform at IIT Patna. ");
    printf("It offers food, grocery, stationary, and medicine delivery, along with services ");
    printf("like salon and taxi booking. With its comprehensive range of offerings, ");
    printf("CampusMart caters to the diverse needs of the IIT Patna community, providing ");
    printf("convenience and efficiency in one place.\n");
    printf("\n******************************\n");
    printf("Welcome to CampusMart :) \n");
    printf("We Have Some Great Offers For You :) \n");
    printf("25 %% Discount on Shopping Above 5000.00 Rs \n");
    printf("10 %% Discount on Shopping Above 1000.00 Rs \n");
    printf("5 %% Discount on Shopping Above 500.00 Rs \n");
    
    int choice = 1;
    while (choice == 1)
    {
        printf("\n******************************\n");
        printf("Enter 1 for Food\n");
        printf("Enter 2 for Medicine\n");
        printf("Enter 3 for Grocery or Stationary\n");
        printf("Enter 4 for Other Services\n");
    label1:
        printf("Choose Category For Shoping (1-4): ");
        int n;
        scanf("%d", &n);

        switch (n)
        {
        case 1:
            food();
            break;
        case 2:
            medicine();
            break;
        case 3:
            GnS();
            break;
        case 4:
            service();
            break;
        default:
            printf("Enter a valid choice !!!\n ************************\n");
            goto label1;
        }
        printf("***********************************************\n");
        printf("Want to Shop more Items :) Press 1 : ");
        scanf("%d", &choice);
    }

    //Delhivery Details
    printf("******************************************\n");
    
    printf("Enter Your First Name : ");
    char first[30];
    scanf("%s",first);
    
    printf("Enter Your Last Name : ");
    char last[30];
    scanf("%s",last);
   
    printf("Enter Your Roll No.(ex-2201CS99) : ");
    char roll[9];
    scanf("%s",roll);
    
    printf("Enter Your Room No. : ");
    char room[7];
    scanf("%s",room);
    
    printf("Enter Your Hostel Name : ");
    char hostel[20];
    scanf("%s",hostel);
   
    printf("Enter Your Mobile No. : ");
    char mobile[11];
    scanf("%s",mobile);
    
    printf("Enter Your email adress : ");
    char email[50];
    scanf("%s",email);
    printf("\n******************************\n");

    // Bill Printing
    printf("Download Your Bill :)\n");
    
    //  Clear the screen
    system("clear"); // For UNIX/Linux
    system("cls"); // For Windows
    
    // Initialize the random number generator with the current time
    srand(time(0));

    // Generate a random number between 0 and 99
    int invoice = rand() % 100000;

    //For Printing Date and Time
    time_t currentTime;
    time(&currentTime);
    struct tm *localTime = localtime(&currentTime);
    int year = localTime->tm_year + 1900;
    int month = localTime->tm_mon + 1;
    int day = localTime->tm_mday;
    int hour = localTime->tm_hour;
    int minute = localTime->tm_min;
    int second = localTime->tm_sec;
    
    // Print a header
    printf("\n%s********** CampusMart Pvt. Ltd. **********%s\n\n", GREEN, RESET);
    printf("INVOICE NO. : IITP#%d\n",invoice);
    printf("Date and time: %04d-%02d-%02d %02d:%02d:%02d\n", year, month, day, hour, minute, second);
    printf("Name - %s %s\n",first,last);
    printf("Address\n");
    printf("Room No - %s \n",room);
    printf("Hostel - %s \n",hostel);
    printf("Mobile Number - %s \n",mobile);
    printf("Email ID - %s \n",email);
    printf("Payment Mode - Cash On Delivery \n\n");

    // Print item details
    printf("%-30s %-30s %-30s\n", "Item", "Quantity", "Price");
    printf("------------------------------------------------------------------------\n");
    for (int v = 0; quantityList[v] != 0; v++)
    {
        printf("%-30s %-30d %-30.2f\n", basket[v], quantityList[v], priceList[v]);
    }
    for (int x = 0; serviceChargeList[x] != 0; x++)
    {
        printf("%-30s %-30s %-30.2f\n", serviceList[x], "NA", serviceChargeList[x]);
    }
    printf("------------------------------------------------------------------------\n");

    // Calculate the total
    if (total > 5000)
    {
        discount = 0.25 * total;
        grandTotal = total - discount;
    }
    else if (total <= 5000 && total > 1000)
    {
        discount = 0.10 * total;
        grandTotal = total - discount;
    }
    else if (total <= 1000 && total > 500)
    {
        discount = 0.05 * total;
        grandTotal = total - discount;
    }
    else
    {
        discount = 0;
        grandTotal = total;
    }

    // Print the total with formatting
    printf("\n%sTotal:%s %s%.2f%s\n", YELLOW, RESET, GREEN, total, RESET);
    printf("\n%sDiscount:%s %s%.2f%s\n", YELLOW, RESET, GREEN, discount, RESET);
    printf("\n%sGrand Total:%s %s%.2f%s\n", YELLOW, RESET, GREEN, grandTotal, RESET);

    // Print a footer
    printf("Pay %.2f On Delivery.\nThank you for Ordering Via CampusMart :) ",grandTotal);
    printf("\n%s********** Thank You! **********%s\n", BLUE, RESET);

    return 0;
}