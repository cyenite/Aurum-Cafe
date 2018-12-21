#include <stdio.h>
#include <stdlib.h>

int main()
{
    int meal_choice;
    printf("\t\t\tAURUM CAFE\n");
    printf("Choose Your Meal Type:\n");
    printf("1. Snacks\n2. Breakfast\n3. Lunch\n4. Dinner\n5. Supper\n6. Beverages and drinks\n--->");
    scanf("%d",&meal_choice);
    if(meal_choice==1)
    {
        snacks();
    }
     else if(meal_choice==2)
    {
        breakfast();
    }
     else if(meal_choice==3)
    {
        lunch();
    }
     else if(meal_choice==4)
    {
        dinner();
    }
     else if(meal_choice==5)
    {
        supper();
    }
     else
     {
         beverages();
     }
    return 0;
}
void breakfast()
{
    printf("\t\tBREAKFAST\n1.Black tea\n2.Black coffee\n3.White coffee\n4.Plain Milk\n5.Chai China\n6.Chai\n7.Fried Eggs\n8.Omelette");
}
void lunch()
{
    printf("\t\tMAIN DISHES\n1.Pilau ngombe\n2.Pilau Mbuzi\n3.Karanga mbuzi\n4.Beans\n5.Beef soup\n6.Maini\n7.Chips\n8.Plain rice");
}
void dinner()
{
    printf("\t\tMAIN DISHES\n1.Kachumbari\n2.Chips\n3.Spagheti\n4.Salads\n5.Beef soup\n6.Pilau\n7.Chips\n8.Plain rice");
}
void supper()
{
    printf("\t\tMAIN DISHES\n1.Pilau ngombe\n2.Pilau Mbuzi\n3.Karanga mbuzi\n4.Beans\n5.Beef soup\n6.Maini\n7.Chips\n8.Plain rice");
}
void snacks()
{
    printf("\t\tSNACKS\n1.Samosa\n2.Kebab\n3.Beef sausage\n4.Chapati\n5.Doughnuts\n6.Cake\n7.Sandwitch bread\n8.Pan-fried potatoes");
}
void beverages()
{
    printf("\t\tBEVERAGES AND DRINKS\n1.Mango juice\n2.Banana milk shake\n3.Orange juice\n4.Soda\n5.Water\n6.Tamarine juice\n7.Avocado juice\n8.Beetroot juice");
}
