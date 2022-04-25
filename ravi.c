// // (0°C × 9/5) + 32 = 32°F

// int func( int a);

// #include<stdio.h>
// int main() {
//     float user1;
//     printf("print your celsius value\n");
//     scanf("%f",&user1);

//     float user2;
//     user2=func(user1*9/5)+32;
//     printf("your ferhanhit value is%f",user2);

    
//<------------------------------------------ C LANGUAGE ------------------------------------------------------>


   
   
// return 0;

// }

// int func(int a){
//     int c;
//     c=a;
//     return c;
    
// }

// int func(int x);

// #include<stdio.h>
// int main() {
//     int a;
//     printf("print the value\n");
//     scanf("%d",&a);

    
//     printf("your factorial is %d",func(a));

// return 0;
// }

// int func(int x){

//     if (x==1||x==0)
//     {
//         return 1;
//     }
//     else{
//         return x+func(x-1);
//     }

// }

// C code to illustrate working of
// getch() to accept hidden inputs

// #include <conio.h>
// #include <dos.h> // delay()
// #include <stdio.h>
// #include <string.h>

// void main()
// {

// 	// Taking the password of 8 characters
// 	char pwd[9];
// 	int i;

// 	// To clear the screen
// 	// clrscr();

// 	printf("Enter Password: ");
// 	for (i = 0; i < 8; i++) {

// 		// Get the hidden input
// 		// using getch() method
// 		pwd[i] = getch();

// 		// Print * to show that
// 		// a character is entered
// 		printf("*");
// 	}
// 	pwd[i] = '\0';
// 	printf("\n");

// 	// Now the hidden input is stored in pwd[]
// 	// So any operation can be done on it

// 	// Here we are just printing
// 	printf("Entered password: ");
// 	for (i = 0; pwd[i] != '\0'; i++)
// 		printf("%c", pwd[i]);

// 	// Now the console will wait
// 	// for a key to be pressed
// 	getch();
// }






