/*Problem Statement:
Write a program in C that simulates a 3D matrix-based "color intensity map" for an image processing application. The program should:

Define and initialize a 3D array of size 
X×Y×Z (where 𝑋=4, 𝑌=3, Z=3):
X: Represents rows of pixels.
Y: Represents columns of pixels.
Z: Represents RGB color intensities.
Populate the 3D array with random integers between 0 and 255 (representing RGB color intensities) using a user-defined function called generateRandomColors.

Display the original RGB matrix and the calculated average intensities for each color.

Example Output:
plaintext
Copy code
Random Color Intensity Map (RGB values per pixel):
Pixel (0,0): R=123 G=45 B=67
Pixel (0,1): R=200 G=123 B=56
Pixel (0,2): R=34 G=98 B=222

Pixel (1,0): R=67 G=89 B=100
Pixel (1,1): R=255 G=45 B=120
Pixel (1,2): R=12 G=190 B=90

Pixel (2,0): R=75 G=67 B=89
Pixel (2,1): R=180 G=220 B=150
Pixel (2,2): R=45 G=67 B=89

Pixel (3,0): R=200 G=123 B=78
Pixel (3,1): R=34 G=98 B=222
Pixel (3,2): R=67 G=89 B=100

Average Intensities:
Red: 106
Green: 95
Blue: 115
Requirements:
Use a 3D array to store the pixel data.
Use the rand() function to generate random numbers between 0 and 255.
Write at least two user-defined functions:
generateRandomColors to populate the 3D array.
Use loops to display the 3D array data in a structured format.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int generateRandomColors();
int main(){
    int toplam_red=0, toplam_green=0,toplam_blue=0;
    srand(time(NULL));
    int arr[4][3][3];
    for(int x=0;x<4;x++){
        for(int y=0;y<3;y++){
            for(int z=0;z<3;z++){
            arr[x][y][z] = generateRandomColors();
            }
        }
    
    }
    float toplam_renk=4*3;
        for(int x=0;x<4;x++){
            for(int y=0;y<3;y++){
                printf("pixel(%d,%d)",x,y);
                for(int z=0;z<3;z++){
                    switch(z){
                        case 0:
                           printf("red=%d ",arr[x][y][z]);
                           toplam_red = toplam_red+(arr[x][y][z]);
                           break;
                        case 1:
                            printf("green=%d ",arr[x][y][z]);
                            toplam_green = toplam_green+(arr[x][y][z]);
                            break;
                        case 2:
                            printf("blue=%d ",arr[x][y][z]);
                            toplam_blue= toplam_blue+(arr[x][y][z]);
                            break;
                    }
                }
            printf("\n");
            }
        }

printf("Average Intensities:\nRed: %.2f\nGreen: %.2f\nBlue: %.2f\n",toplam_red/toplam_renk,toplam_green/toplam_renk,toplam_blue/toplam_renk);

}
int generateRandomColors(){
    int color=rand()%256;
    return color;
}
