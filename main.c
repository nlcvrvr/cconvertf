#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
 
    //to store arguments in variables, we need to declare as char and set as pointer. 
    //its a pointer to pointer.
    const char *value   = argv[1]; //here we get the first and secoud argument.
    const char *option  = argv[2]; //argv[0] will return the program name.
    
    float ftoc(float f);//We need to declare function prototype before first call
    float ctof(float c);//

    /*
    here we detect if some arguments have passed, or is empty
    */
    if (argc >= 2)
    {
        /*
        strcmp() function will compare first and second argument.
        we use this to know which argument have been passed
        */
        if (strcmp(option, "f") == 0)
        {
            printf("%s Fahrenheit to Celsius is: \t%f \n", value,ctof(atof(value)));
        }
        if (strcmp(option, "c") == 0)
        {
            printf("%s Celsius to Fahrenheit is: \t%f \n", value,ctof(atof(value)));
        } else 
        {
            printf("\nUse '<value> <f>' to convert value to Fahrenheit or <c> to Celsius.\nExample: 29 f \n");
        }

    } else //if no arguments have been passed
    {
        printf("\nUse '<value> <f>' to convert value to Fahrenheit or <c> to Celsius.\n\tExample: \n\t\t\t\t\t main 29 f \n");
    }

    return 0;
}

float ftoc(float f)
{
      //math is very simple: just reduce value by 32 and multiplicate by 5. then divide by 9. 
      float c = ((f-32) * 5) / 9;
      return c;
}

float ctof(float c)
{
    //just invert the operation ^_^
    float f = ((c*9)/5) + 32;
    return f;
}
    