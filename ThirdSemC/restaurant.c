#include "stdio.h"
#include "stdint.h"
#include "stdlib.h"

//Restaurant Finder
//Group 4

typedef struct brand{
    char *name;
    int XAxis;
    int YAxis;
}
brand;

brand** toBeDefined();  //Prototype of toBeDefined

//Prototype of shortest path function. Change the return type accordingly
//xUserInput == X Coordinate of User given as input
//yUserInput == Y Coordinate of User given as input
//arrOfBrands ==  Array of strutures containing information about the brands
void shortestPathFunction(brand** arrOfBrands, int xUserInput, int yUserInput); 

int main()
{
    //Returns an array containing the list of all restaurants, in the form of
    //an array of structures
    brand** arrOfBrands = toBeDefined();   
         
    printf("Welcome to the Restaurant Finder!");
    
    //User coordinates
    int xUser = 0, yUser = 0;
    do
    {
        printf("Enter your coordinates(in a 10X10 grid)\n");
        printf("Enter X coordinate: ");
        scanf("%d", &xUser);
        printf("Enter Y coordinate: ");
        scanf("%d", &yUser);
    } while ((!(xUser >= 0 && xUser < 10)) && (!(yUser >= 0 && yUser < 10)));
    
    shortestPathFunction(arrOfBrands, xUser, yUser);    //To code the shortest path function

    //After above function call ends, this frees all allocated memory
    free(arrOfBrands);
    return 0;
}

brand** toBeDefined()   // Returns an array of structures, containing information regarding restaurants
{
    brand** mainArray = malloc(sizeof(brand) * 10);

    brand* mcd1 = malloc(sizeof(brand));
    mcd1->name = "McDonalds Main Branch";
    mcd1->XAxis = 0;
    mcd1->YAxis = 1;
    mainArray[0] = mcd1;

    brand* mcd2 = malloc(sizeof(brand));
    mcd2->name = "McDonalds, XYZ Branch";
    mcd2->XAxis = 2;
    mcd2->YAxis = 3;
    mainArray[1] = mcd2;

    brand* la1 = malloc(sizeof(brand));
    la1->name = "La Pino's Main Branch";
    la1->XAxis = 0;
    la1->YAxis = 3;
    mainArray[2] = la1;

    brand* la2 = malloc(sizeof(brand));
    la2->name = "La Pino's, ZYX Branch";
    la2->XAxis = 2;
    la2->YAxis = 3;
    mainArray[3] = la2;
    return mainArray;

    brand* do1 = malloc(sizeof(brand));
    do1->name = "Domino's Pizza";
    do1->XAxis = 5;
    do1->YAxis = 7;
    mainArray[4] = do1;

    brand* kfc = malloc(sizeof(brand));
    kfc->name = "KFC";
    kfc->XAxis = 9;
    kfc->YAxis = 7;
    mainArray[5] = kfc;

    brand* bcw1 = malloc(sizeof(brand));
    bcw1->name = "Belgian Waffle, HQ";
    bcw1->XAxis = 7;
    bcw1->YAxis = 9;
    mainArray[6] = bcw1;

    brand* bcw2 = malloc(sizeof(brand));
    bcw2->name = "Belgian Waffle, DWHQ";
    bcw2->XAxis = 5;
    bcw2->YAxis = 5;
    mainArray[7] = bcw2;

    brand* hc1 = malloc(sizeof(brand));
    hc1->name = "Hocco Eatery, Main Branch";
    hc1->XAxis = 8;
    hc1->YAxis = 8;
    mainArray[8] = hc1;

    brand* neem = malloc(sizeof(brand));
    neem->name = "Under the Neem Tree";
    neem->XAxis = 3;
    neem->YAxis = 7;
    mainArray[9] = neem;

    return mainArray;
}

//xUserInput == X Coordinate of User given as input
//yUserInput == Y Coordinate of User given as input
//arrOfBrands ==  Array of strutures containing information about the brands
void shortestPathFunction(brand** arrOfBrands, int xUserInput, int yUserInput)
{

}