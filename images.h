#ifndef graphics_H
#define graphics_H
#include "C12832.h" 

static char EyesNeutral[] = {
0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
0b00000011, 0b11111111, 0b10000000, 0b00000111, 0b11111111, 0b00000000,
0b00011111, 0b11111111, 0b11110000, 0b00111111, 0b11111111, 0b11100000,
0b00011111, 0b11111111, 0b11110000, 0b00111111, 0b11111111, 0b11100000,
0b00011111, 0b11111111, 0b11110000, 0b00111111, 0b11111111, 0b11100000,
0b00111111, 0b11111111, 0b11111000, 0b01111111, 0b11111111, 0b11110000,
0b00111111, 0b11111111, 0b11111000, 0b01111111, 0b11111111, 0b11110000,
0b00111111, 0b11111111, 0b11111000, 0b01111111, 0b11111111, 0b11110000,
0b00111111, 0b11111111, 0b11111000, 0b01111111, 0b11111111, 0b11110000,
0b00111111, 0b11111111, 0b11111000, 0b01111111, 0b11111111, 0b11110000,
0b00111111, 0b11111111, 0b11111000, 0b01111111, 0b11111111, 0b11110000,
0b00111111, 0b11111111, 0b11111000, 0b01111111, 0b11111111, 0b11110000,
0b00111111, 0b11111111, 0b11111000, 0b01111111, 0b11111111, 0b11110000,
0b00111111, 0b11111111, 0b11111000, 0b01111111, 0b11111111, 0b11110000,
0b00111111, 0b11111111, 0b11111000, 0b01111111, 0b11111111, 0b11110000,
0b00111111, 0b11111111, 0b11111000, 0b01111111, 0b11111111, 0b11110000,
0b00111111, 0b11111111, 0b11111000, 0b01111111, 0b11111111, 0b11110000,
0b00111111, 0b11111111, 0b11111000, 0b01111111, 0b11111111, 0b11110000,
0b00111111, 0b11111111, 0b11111000, 0b01111111, 0b11111111, 0b11110000,
0b00111111, 0b11111111, 0b11111000, 0b01111111, 0b11111111, 0b11110000,
0b00111111, 0b11111111, 0b11111000, 0b01111111, 0b11111111, 0b11110000,
0b00111111, 0b11111111, 0b11111000, 0b01111111, 0b11111111, 0b11110000,
0b00111111, 0b11111111, 0b11111000, 0b01111111, 0b11111111, 0b11110000,
0b00111111, 0b11111111, 0b11111000, 0b01111111, 0b11111111, 0b11110000,
0b00011111, 0b11111111, 0b11110000, 0b00111111, 0b11111111, 0b11100000,
0b00011111, 0b11111111, 0b11110000, 0b00111111, 0b11111111, 0b11100000,
0b00011111, 0b11111111, 0b11110000, 0b00111111, 0b11111111, 0b11100000,
0b00000011, 0b11111111, 0b10000000, 0b00000111, 0b11111111, 0b00000000,
0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
};

Bitmap eyesNeutral = {
  46, // XSize
  31, // YSize 
  6,  // Bytes in Line
  EyesNeutral ,  // Pointer to picture data 
};


static char EyesLeft[] = {
0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
0b00001111, 0b11111100, 0b00000000, 0b00011111, 0b11111000, 0b00000000,
0b00011111, 0b11111111, 0b00000000, 0b00111111, 0b11111110, 0b00000000,
0b00111111, 0b11111111, 0b10000000, 0b01111111, 0b11111111, 0b00000000,
0b01111111, 0b11111111, 0b10000000, 0b11111111, 0b11111111, 0b00000000,
0b01111111, 0b11111111, 0b11000000, 0b11111111, 0b11111111, 0b10000000,
0b01111111, 0b11111111, 0b11000000, 0b11111111, 0b11111111, 0b10000000,
0b11111111, 0b11111111, 0b11100001, 0b11111111, 0b11111111, 0b11000000,
0b11111111, 0b11111111, 0b11100001, 0b11111111, 0b11111111, 0b11000000,
0b11111111, 0b11111111, 0b11100001, 0b11111111, 0b11111111, 0b11000000,
0b11111111, 0b11111111, 0b11100001, 0b11111111, 0b11111111, 0b11000000,
0b11111111, 0b11111111, 0b11110001, 0b11111111, 0b11111111, 0b11100000,
0b11111111, 0b11111111, 0b11110001, 0b11111111, 0b11111111, 0b11100000,
0b11111111, 0b11111111, 0b11110001, 0b11111111, 0b11111111, 0b11100000,
0b11111111, 0b11111111, 0b11110001, 0b11111111, 0b11111111, 0b11100000,
0b11111111, 0b11111111, 0b11110001, 0b11111111, 0b11111111, 0b11100000,
0b11111111, 0b11111111, 0b11110001, 0b11111111, 0b11111111, 0b11100000,
0b11111111, 0b11111111, 0b11110001, 0b11111111, 0b11111111, 0b11100000,
0b11111111, 0b11111111, 0b11110001, 0b11111111, 0b11111111, 0b11100000,
0b11111111, 0b11111111, 0b11110001, 0b11111111, 0b11111111, 0b11100000,
0b11111111, 0b11111111, 0b11100001, 0b11111111, 0b11111111, 0b11000000,
0b11111111, 0b11111111, 0b11100001, 0b11111111, 0b11111111, 0b11000000,
0b11111111, 0b11111111, 0b11100000, 0b11111111, 0b11111111, 0b11000000,
0b01111111, 0b11111111, 0b11000000, 0b11111111, 0b11111111, 0b10000000,
0b01111111, 0b11111111, 0b11000000, 0b11111111, 0b11111111, 0b10000000,
0b00111111, 0b11111111, 0b11000000, 0b01111111, 0b11111111, 0b10000000,
0b00011111, 0b11111111, 0b10000000, 0b00111111, 0b11111111, 0b00000000,
0b00001111, 0b11111110, 0b00000000, 0b00011111, 0b11111100, 0b00000000,
0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
};
Bitmap eyesLeft = {
  46, // XSize
  31, // YSize 
  6,  // Bytes in Line
  EyesLeft ,  // Pointer to picture data 
};

static char EyesRight[] = {
0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
0b00000000, 0b01111111, 0b11100000, 0b00000000, 0b11111111, 0b11000000,
0b00000001, 0b11111111, 0b11110000, 0b00000011, 0b11111111, 0b11100000,
0b00000011, 0b11111111, 0b11111000, 0b00000111, 0b11111111, 0b11110000,
0b00000011, 0b11111111, 0b11111100, 0b00000111, 0b11111111, 0b11111000,
0b00000111, 0b11111111, 0b11111100, 0b00001111, 0b11111111, 0b11111000,
0b00000111, 0b11111111, 0b11111100, 0b00001111, 0b11111111, 0b11111000,
0b00001111, 0b11111111, 0b11111110, 0b00011111, 0b11111111, 0b11111100,
0b00001111, 0b11111111, 0b11111110, 0b00011111, 0b11111111, 0b11111100,
0b00001111, 0b11111111, 0b11111110, 0b00011111, 0b11111111, 0b11111100,
0b00001111, 0b11111111, 0b11111110, 0b00011111, 0b11111111, 0b11111100,
0b00011111, 0b11111111, 0b11111110, 0b00111111, 0b11111111, 0b11111100,
0b00011111, 0b11111111, 0b11111110, 0b00111111, 0b11111111, 0b11111100,
0b00011111, 0b11111111, 0b11111110, 0b00111111, 0b11111111, 0b11111100,
0b00011111, 0b11111111, 0b11111110, 0b00111111, 0b11111111, 0b11111100,
0b00011111, 0b11111111, 0b11111110, 0b00111111, 0b11111111, 0b11111100,
0b00011111, 0b11111111, 0b11111110, 0b00111111, 0b11111111, 0b11111100,
0b00011111, 0b11111111, 0b11111110, 0b00111111, 0b11111111, 0b11111100,
0b00011111, 0b11111111, 0b11111110, 0b00111111, 0b11111111, 0b11111100,
0b00011111, 0b11111111, 0b11111110, 0b00111111, 0b11111111, 0b11111100,
0b00001111, 0b11111111, 0b11111110, 0b00011111, 0b11111111, 0b11111100,
0b00001111, 0b11111111, 0b11111110, 0b00011111, 0b11111111, 0b11111100,
0b00001111, 0b11111111, 0b11111100, 0b00011111, 0b11111111, 0b11111100,
0b00000111, 0b11111111, 0b11111100, 0b00001111, 0b11111111, 0b11111000,
0b00000111, 0b11111111, 0b11111100, 0b00001111, 0b11111111, 0b11111000,
0b00000111, 0b11111111, 0b11111000, 0b00001111, 0b11111111, 0b11110000,
0b00000011, 0b11111111, 0b11110000, 0b00000111, 0b11111111, 0b11100000,
0b00000000, 0b11111111, 0b11100000, 0b00000001, 0b11111111, 0b11000000,
0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
};

Bitmap eyesRight = {
  46, // XSize
  31, // YSize 
  6,  // Bytes in Line
  EyesRight ,  // Pointer to picture data 
};

static char EyesAngry[] = {

0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00011111, 0b00000000,
0b00011110, 0b00000000, 0b00000000, 0b00000000, 0b01111111, 0b11100000,
0b00011111, 0b10000000, 0b00000000, 0b00000001, 0b11111111, 0b11100000,
0b00011111, 0b11000000, 0b00000000, 0b00000011, 0b11111111, 0b11100000,
0b00111111, 0b11110000, 0b00000000, 0b00001111, 0b11111111, 0b11110000,
0b00111111, 0b11111111, 0b00000000, 0b01111111, 0b11111111, 0b11110000,
0b00111111, 0b11111111, 0b11111000, 0b01111111, 0b11111111, 0b11110000,
0b00111111, 0b11111111, 0b11111000, 0b01111111, 0b11111111, 0b11110000,
0b00111111, 0b11111111, 0b11111000, 0b01111111, 0b11111111, 0b11110000,
0b00111111, 0b11111111, 0b11111000, 0b01111111, 0b11111111, 0b11110000,
0b00111111, 0b11111111, 0b11111000, 0b01111111, 0b11111111, 0b11110000,
0b00111111, 0b11111111, 0b11111000, 0b01111111, 0b11111111, 0b11110000,
0b00111111, 0b11111111, 0b11111000, 0b01111111, 0b11111111, 0b11110000,
0b00111111, 0b11111111, 0b11111000, 0b01111111, 0b11111111, 0b11110000,
0b00111111, 0b11111111, 0b11111000, 0b01111111, 0b11111111, 0b11110000,
0b00111111, 0b11111111, 0b11111000, 0b01111111, 0b11111111, 0b11110000,
0b00111111, 0b11111111, 0b11111000, 0b01111111, 0b11111111, 0b11110000,
0b00111111, 0b11111111, 0b11111000, 0b01111111, 0b11111111, 0b11110000,
0b00111111, 0b11111111, 0b11111000, 0b01111111, 0b11111111, 0b11110000,
0b00111111, 0b11111111, 0b11111000, 0b01111111, 0b11111111, 0b11110000,
0b00111111, 0b11111111, 0b11111000, 0b01111111, 0b11111111, 0b11110000,
0b00111111, 0b11111111, 0b11111000, 0b01111111, 0b11111111, 0b11110000,
0b00111111, 0b11111111, 0b11111000, 0b01111111, 0b11111111, 0b11110000,
0b00011111, 0b11111111, 0b11110000, 0b00111111, 0b11111111, 0b11100000,
0b00011111, 0b11111111, 0b11000000, 0b00000111, 0b11111111, 0b11100000,
0b00011111, 0b11111111, 0b00000000, 0b00000001, 0b11111111, 0b11100000,
0b00000011, 0b11111110, 0b00000000, 0b00000000, 0b11111111, 0b00000000,
0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,

};

Bitmap eyesAngry = {
  46, // XSize
  31, // YSize 
  6,  // Bytes in Line
  EyesAngry ,  // Pointer to picture data 
};

static char EyesDiscomfort[] = {

0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
0b00000000, 0b00000011, 0b10000000, 0b00000000, 0b00000000, 0b00000000,
0b00000000, 0b00011111, 0b11110000, 0b00000000, 0b00000000, 0b00000000,
0b00000000, 0b01111111, 0b11110000, 0b00001111, 0b00000000, 0b00000000,
0b00000011, 0b11111111, 0b11110000, 0b00111111, 0b11100000, 0b00000000,
0b00011111, 0b11111111, 0b11111000, 0b00111111, 0b11111000, 0b00000000,
0b00111111, 0b11111111, 0b11111000, 0b01111111, 0b11111111, 0b00000000,
0b00111111, 0b11111111, 0b11111000, 0b01111111, 0b11111111, 0b11100000,
0b00111111, 0b11111111, 0b11111000, 0b01111111, 0b11111111, 0b11110000,
0b00111111, 0b11111111, 0b11111000, 0b01111111, 0b11111111, 0b11110000,
0b00111111, 0b11111111, 0b11111000, 0b01111111, 0b11111111, 0b11110000,
0b00111111, 0b11111111, 0b11111000, 0b01111111, 0b11111111, 0b11110000,
0b00111111, 0b11111111, 0b11111000, 0b01111111, 0b11111111, 0b11110000,
0b00011111, 0b11111111, 0b11110000, 0b00111111, 0b11111111, 0b11100000,
0b00000111, 0b11111111, 0b11110000, 0b00111111, 0b11111111, 0b10000000,
0b00000011, 0b11111111, 0b11110000, 0b00111111, 0b11111110, 0b00000000,
0b00000000, 0b00011111, 0b10000000, 0b00000111, 0b11110000, 0b00000000,
0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
};

Bitmap eyesDiscomfort = {
  46, // XSize
  31, // YSize 
  6,  // Bytes in Line
  EyesDiscomfort ,  // Pointer to picture data 
};

static char EyesUnfit[] = {
0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
0b00000000, 0b01111111, 0b10000000, 0b00000111, 0b11100000, 0b00000000,
0b00000000, 0b11111111, 0b11110000, 0b00111111, 0b11111000, 0b00000000,
0b00000001, 0b11111111, 0b11110000, 0b00111111, 0b11111100, 0b00000000,
0b00000011, 0b11111111, 0b11110000, 0b00111111, 0b11111111, 0b00000000,
0b00000111, 0b11111111, 0b11111000, 0b01111111, 0b11111111, 0b10000000,
0b00000111, 0b11111111, 0b11111000, 0b01111111, 0b11111111, 0b11000000,
0b00001111, 0b11111111, 0b11111000, 0b01111111, 0b11111111, 0b11100000,
0b00011111, 0b11111111, 0b11111000, 0b01111111, 0b11111111, 0b11100000,
0b00011111, 0b11111111, 0b11111000, 0b01111111, 0b11111111, 0b11110000,
0b00011111, 0b11111111, 0b11111000, 0b01111111, 0b11111111, 0b11110000,
0b00111111, 0b11111111, 0b11111000, 0b01111111, 0b11111111, 0b11110000,
0b00111111, 0b11111111, 0b11111000, 0b01111111, 0b11111111, 0b11110000,
0b00111111, 0b11111111, 0b11111000, 0b01111111, 0b11111111, 0b11110000,
0b00111111, 0b11111111, 0b11111000, 0b01111111, 0b11111111, 0b11110000,
0b00111111, 0b11111111, 0b11111000, 0b01111111, 0b11111111, 0b11110000,
0b00111111, 0b11111111, 0b11111000, 0b01111111, 0b11111111, 0b11110000,
0b00111111, 0b11111111, 0b11111000, 0b01111111, 0b11111111, 0b11110000,
0b00111111, 0b11111111, 0b11111000, 0b00111111, 0b11111111, 0b11110000,
0b00111111, 0b11111111, 0b11111000, 0b00111111, 0b11111111, 0b11100000,
0b00111111, 0b11111111, 0b11110000, 0b00111111, 0b11111111, 0b11100000,
0b00011111, 0b11111111, 0b11110000, 0b00000111, 0b11111111, 0b10000000,
0b00011111, 0b11111111, 0b11110000, 0b00000000, 0b00000000, 0b00000000,
0b00000111, 0b11111111, 0b10000000, 0b00000000, 0b00000000, 0b00000000,
0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,

};

Bitmap eyesUnfit = {
  46, // XSize
  31, // YSize 
  6,  // Bytes in Line
  EyesUnfit ,  // Pointer to picture data 
};

static char EyesTired[] = {

0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
0b00000000, 0b00000111, 0b11100000, 0b00000000, 0b00000000, 0b00000000,
0b00000001, 0b11111111, 0b11100000, 0b00000000, 0b00000000, 0b00000000,
0b00000111, 0b11111111, 0b11110000, 0b00000000, 0b00000000, 0b00000000,
0b00000111, 0b11111111, 0b11110000, 0b00000000, 0b00000000, 0b00000000,
0b00011111, 0b11111111, 0b11110000, 0b00111111, 0b11000000, 0b00000000,
0b00111111, 0b11111111, 0b11111000, 0b00111111, 0b11111111, 0b11110000,
0b00111111, 0b11111111, 0b11111000, 0b01111111, 0b11111111, 0b11110000,
0b00011111, 0b11111111, 0b11110000, 0b00111111, 0b11111111, 0b11100000,
0b00011111, 0b11111111, 0b11110000, 0b00111111, 0b11111111, 0b11100000,
0b00001111, 0b11111111, 0b11110000, 0b00000000, 0b00111111, 0b11100000,
0b00000011, 0b11110000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,

};

Bitmap eyesTired = {
  46, // XSize
  31, // YSize 
  6,  // Bytes in Line
  EyesTired ,  // Pointer to picture data 
};

static char EyesHungry[] = {

0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00011111, 0b00000000,
0b00011110, 0b00000000, 0b00000000, 0b00000000, 0b01111111, 0b11100000,
0b00011111, 0b10000000, 0b00000000, 0b00000001, 0b11111111, 0b11100000,
0b00011111, 0b11000000, 0b00000000, 0b00000011, 0b11111111, 0b11100000,
0b00111111, 0b11110000, 0b00000000, 0b00001111, 0b11111111, 0b11110000,
0b00111111, 0b11111111, 0b00000000, 0b01111111, 0b11111111, 0b11110000,
0b00111111, 0b11111111, 0b11111000, 0b01111111, 0b11111111, 0b11110000,
0b00111111, 0b11111111, 0b11111000, 0b01111111, 0b11111111, 0b11110000,
0b00111111, 0b11111111, 0b11111000, 0b01111111, 0b11111111, 0b11110000,
0b00111111, 0b11111111, 0b11111000, 0b01111111, 0b11111111, 0b11110000,
0b00111111, 0b11111111, 0b11111000, 0b01111111, 0b11111111, 0b11110000,
0b00111111, 0b11111111, 0b11111000, 0b01111111, 0b11111111, 0b11110000,
0b00111111, 0b11111111, 0b11111000, 0b01111111, 0b11111111, 0b11110000,
0b00111111, 0b11111111, 0b11111000, 0b01111111, 0b11111111, 0b11110000,
0b00111111, 0b11111111, 0b11111000, 0b01111111, 0b11111111, 0b11110000,
0b00111111, 0b11111111, 0b11111000, 0b01111111, 0b11111111, 0b11110000,
0b00111111, 0b11111111, 0b11111000, 0b01111111, 0b11111111, 0b11110000,
0b00111111, 0b11111111, 0b11111000, 0b01111111, 0b11111111, 0b11110000,
0b00111111, 0b11111111, 0b11111000, 0b01111111, 0b11111111, 0b11110000,
0b00111111, 0b11111111, 0b11111000, 0b01111111, 0b11111111, 0b11110000,
0b00111111, 0b11111111, 0b11111000, 0b01111111, 0b11111111, 0b11110000,
0b00111111, 0b11111111, 0b11111000, 0b01111111, 0b11111111, 0b11110000,
0b00111111, 0b11111111, 0b11111000, 0b01111111, 0b11111111, 0b11110000,
0b00011111, 0b11111111, 0b11110000, 0b00111111, 0b11111111, 0b11100000,
0b00011111, 0b11111111, 0b11000000, 0b00000111, 0b11111111, 0b11100000,
0b00011111, 0b11111111, 0b00000000, 0b00000001, 0b11111111, 0b11100000,
0b00000011, 0b11111110, 0b00000000, 0b00000000, 0b11111111, 0b00000000,
0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,

};

Bitmap eyesHungry = {
  46, // XSize
  31, // YSize 
  6,  // Bytes in Line
  EyesHungry ,  // Pointer to picture data 
};

static char EyesAsleep[] = {

0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
0b00011100, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b11100000,
0b00111110, 0b00000000, 0b00111000, 0b01110000, 0b00000001, 0b11110000,
0b00111111, 0b11110000, 0b01111000, 0b01111000, 0b00111111, 0b11110000,
0b00011111, 0b11111111, 0b11110000, 0b00111111, 0b11111111, 0b11100000,
0b00011111, 0b11111111, 0b11110000, 0b00111111, 0b11111111, 0b11100000,
0b00000000, 0b01111111, 0b11110000, 0b00111111, 0b11111000, 0b00000000,
0b00000000, 0b00000001, 0b11000000, 0b00001110, 0b00000000, 0b00000000,
0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,

};

Bitmap eyesAsleep = {
  46, // XSize
  31, // YSize 
  6,  // Bytes in Line
  EyesAsleep ,  // Pointer to picture data 
};

static char EyesBored[] = {

0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
0b00000011, 0b11111111, 0b10000000, 0b00000111, 0b11111111, 0b00000000,
0b00011111, 0b11111111, 0b11110000, 0b00111111, 0b11111111, 0b11100000,
0b00011111, 0b11111111, 0b11110000, 0b00111111, 0b11111111, 0b11100000,
0b00011111, 0b11111111, 0b11110000, 0b00111111, 0b11111111, 0b11100000,
0b00111111, 0b11111111, 0b11111000, 0b01111111, 0b11111111, 0b11110000,
0b00111111, 0b11111111, 0b11111000, 0b01111111, 0b11111111, 0b11110000,
0b00111111, 0b11111111, 0b11111000, 0b01111111, 0b11111111, 0b11110000,
0b00111111, 0b11111111, 0b11111000, 0b01111111, 0b11111111, 0b11110000,
0b00011111, 0b11111111, 0b11110000, 0b00111111, 0b11111111, 0b11100000,
0b00011111, 0b11111111, 0b11110000, 0b00111111, 0b11111111, 0b11100000,
0b00011111, 0b11111111, 0b11110000, 0b00111111, 0b11111111, 0b11100000,
0b00000111, 0b00000001, 0b11000000, 0b00001110, 0b00000011, 0b10000000,
0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,

};

Bitmap eyesBored = {
  46, // XSize
  31, // YSize 
  6,  // Bytes in Line
  EyesBored ,  // Pointer to picture data 
};

static char EyesDollar[] = {

0b00000000, 0b11100111, 0b00000000, 0b00000001, 0b11001110, 0b00000000,
0b00000000, 0b11100111, 0b00000000, 0b00000001, 0b11001110, 0b00000000,
0b00000000, 0b11111111, 0b00000000, 0b00000001, 0b11111110, 0b00000000,
0b00000111, 0b11111111, 0b11100000, 0b00001111, 0b11111111, 0b11000000,
0b00001111, 0b11111111, 0b11110000, 0b00011111, 0b11111111, 0b11100000,
0b00011110, 0b11100111, 0b11110000, 0b00111101, 0b11001111, 0b11100000,
0b00011100, 0b11100111, 0b00100000, 0b00111001, 0b11001110, 0b01000000,
0b00111100, 0b11100111, 0b00000000, 0b01111001, 0b11001110, 0b00000000,
0b00111100, 0b11100111, 0b00000000, 0b01111001, 0b11001110, 0b00000000,
0b00011110, 0b11100111, 0b00000000, 0b00111101, 0b11001110, 0b00000000,
0b00011111, 0b11100111, 0b00000000, 0b00111111, 0b11001110, 0b00000000,
0b00001111, 0b11100111, 0b00000000, 0b00011111, 0b11001110, 0b00000000,
0b00000111, 0b11111111, 0b00000000, 0b00001111, 0b11111110, 0b00000000,
0b00000001, 0b11111111, 0b10000000, 0b00000011, 0b11111111, 0b00000000,
0b00000000, 0b11111111, 0b11000000, 0b00000001, 0b11111111, 0b10000000,
0b00000000, 0b11101111, 0b11110000, 0b00000001, 0b11011111, 0b11100000,
0b00000000, 0b11100111, 0b11111000, 0b00000001, 0b11001111, 0b11110000,
0b00000000, 0b11100111, 0b01111000, 0b00000001, 0b11001110, 0b11110000,
0b00000000, 0b11100111, 0b00111000, 0b00000001, 0b11001110, 0b01110000,
0b00000000, 0b11100111, 0b00111000, 0b00000001, 0b11001110, 0b01110000,
0b00000000, 0b11100111, 0b00111000, 0b00000001, 0b11001110, 0b01110000,
0b00011000, 0b11100111, 0b01111000, 0b00110001, 0b11001110, 0b11110000,
0b00111110, 0b11100111, 0b11110000, 0b01111101, 0b11001111, 0b11100000,
0b00111111, 0b11111111, 0b11110000, 0b01111111, 0b11111111, 0b11100000,
0b00001111, 0b11111111, 0b11000000, 0b00011111, 0b11111111, 0b10000000,
0b00000001, 0b11111111, 0b00000000, 0b00000011, 0b11111110, 0b00000000,
0b00000000, 0b11100111, 0b00000000, 0b00000001, 0b11001110, 0b00000000,
0b00000000, 0b11100111, 0b00000000, 0b00000001, 0b11001110, 0b00000000,
0b00000000, 0b11100111, 0b00000000, 0b00000001, 0b11001110, 0b00000000,
0b00000000, 0b11100111, 0b00000000, 0b00000001, 0b11001110, 0b00000000,
0b00000000, 0b01000000, 0b00000000, 0b00000000, 0b10000000, 0b00000000,

};

Bitmap eyesDollar = {
  46, // XSize
  31, // YSize 
  6,  // Bytes in Line
  EyesDollar ,  // Pointer to picture data 
};

static char EyesDead[] = {

0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
0b00000000, 0b00000000, 0b00000000, 0b00011000, 0b00000000, 0b00000000,
0b00000000, 0b00000000, 0b01100000, 0b00111100, 0b00000011, 0b00000000,
0b00000011, 0b00000000, 0b11110000, 0b01111100, 0b00000111, 0b10000000,
0b00001111, 0b10000000, 0b11111000, 0b01111110, 0b00000111, 0b11000000,
0b00001111, 0b10000001, 0b11111000, 0b00111110, 0b00001111, 0b11000000,
0b00000111, 0b11000011, 0b11110000, 0b00011111, 0b00011111, 0b10000000,
0b00000111, 0b11000011, 0b11100000, 0b00011111, 0b10011111, 0b00000000,
0b00000011, 0b11100111, 0b11100000, 0b00001111, 0b10111111, 0b00000000,
0b00000011, 0b11100111, 0b11000000, 0b00001111, 0b11111110, 0b00000000,
0b00000001, 0b11111111, 0b10000000, 0b00000111, 0b11111110, 0b00000000,
0b00000001, 0b11111111, 0b10000000, 0b00000111, 0b11111100, 0b00000000,
0b00000000, 0b11111111, 0b00000000, 0b00000011, 0b11111000, 0b00000000,
0b00000000, 0b11111111, 0b00000000, 0b00000001, 0b11111000, 0b00000000,
0b00000000, 0b01111110, 0b00000000, 0b00000001, 0b11111000, 0b00000000,
0b00000000, 0b01111110, 0b00000000, 0b00000011, 0b11111000, 0b00000000,
0b00000000, 0b11111110, 0b00000000, 0b00000011, 0b11111100, 0b00000000,
0b00000000, 0b11111111, 0b00000000, 0b00000111, 0b11111100, 0b00000000,
0b00000001, 0b11111111, 0b00000000, 0b00001111, 0b11111110, 0b00000000,
0b00000011, 0b11111111, 0b10000000, 0b00001111, 0b10111110, 0b00000000,
0b00000011, 0b11111111, 0b10000000, 0b00011111, 0b10111111, 0b00000000,
0b00000111, 0b11100111, 0b11000000, 0b00011111, 0b00011111, 0b00000000,
0b00000111, 0b11000111, 0b11000000, 0b00111111, 0b00001111, 0b10000000,
0b00001111, 0b11000011, 0b11100000, 0b00111110, 0b00001111, 0b11000000,
0b00011111, 0b10000011, 0b11110000, 0b01111100, 0b00000111, 0b11000000,
0b00011111, 0b00000001, 0b11110000, 0b00111100, 0b00000111, 0b10000000,
0b00001111, 0b00000001, 0b11100000, 0b00011000, 0b00000011, 0b00000000,
0b00000110, 0b00000000, 0b11000000, 0b00000000, 0b00000000, 0b00000000,
0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,

};

Bitmap eyesDead = {
  46, // XSize
  31, // YSize 
  6,  // Bytes in Line
  EyesDead ,  // Pointer to picture data 
};

static char EyesDizzy[] = {

0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b01111111, 0b11100000,
0b00000000, 0b00000000, 0b00000000, 0b00000011, 0b11111111, 0b11110000,
0b00000000, 0b00000000, 0b00000000, 0b00000111, 0b11111111, 0b11110000,
0b00000000, 0b00000000, 0b00000000, 0b00011111, 0b11111111, 0b11111000,
0b00000000, 0b11110000, 0b00000000, 0b00111111, 0b11111111, 0b11111000,
0b00000001, 0b11111100, 0b00000000, 0b00111110, 0b00000011, 0b11111000,
0b00000011, 0b11111111, 0b11000000, 0b00110000, 0b00000001, 0b11111100,
0b00000111, 0b11111111, 0b11110000, 0b00000000, 0b01110000, 0b11111100,
0b00001111, 0b11111111, 0b11110000, 0b00000011, 0b11111000, 0b11111100,
0b00001111, 0b11111111, 0b11111000, 0b00001111, 0b11111100, 0b11111100,
0b00011111, 0b00000000, 0b11111000, 0b00011111, 0b11111100, 0b11111100,
0b00011110, 0b00000000, 0b01111000, 0b00111111, 0b11111100, 0b01111100,
0b00011110, 0b00111100, 0b01111000, 0b01111110, 0b00011100, 0b01111100,
0b00011110, 0b01111110, 0b01111100, 0b01111100, 0b00011110, 0b01111100,
0b00011110, 0b01111110, 0b01111100, 0b01111000, 0b01111100, 0b01111100,
0b00011110, 0b00111110, 0b01111100, 0b11111000, 0b11111100, 0b01111100,
0b00011110, 0b00011110, 0b01111100, 0b11111001, 0b11111000, 0b11111100,
0b00001111, 0b00011110, 0b01111100, 0b11111001, 0b11111000, 0b11111000,
0b00001111, 0b11111110, 0b01111100, 0b11111001, 0b11110001, 0b11111000,
0b00001111, 0b11111100, 0b01111100, 0b11111001, 0b11110001, 0b11111000,
0b00000111, 0b11111100, 0b01111100, 0b11111000, 0b11100011, 0b11111000,
0b00000001, 0b11111000, 0b11111000, 0b11111000, 0b01000011, 0b11110000,
0b00000000, 0b00000000, 0b11111000, 0b01111100, 0b00000111, 0b11110000,
0b00111000, 0b00000001, 0b11111000, 0b01111110, 0b00001111, 0b11110000,
0b00111100, 0b00000011, 0b11111000, 0b01111111, 0b11111111, 0b11110000,
0b00011110, 0b00000011, 0b11110000, 0b01111111, 0b11111111, 0b11100000,
0b00011111, 0b11111111, 0b11110000, 0b00111111, 0b11111111, 0b11100000,
0b00011111, 0b11111111, 0b11110000, 0b00111111, 0b11111111, 0b11100000,
0b00000111, 0b11111111, 0b11000000, 0b00001111, 0b11111111, 0b00000000,
0b00000011, 0b11111111, 0b10000000, 0b00000000, 0b00000000, 0b00000000,
0b00000000, 0b11111111, 0b00000000, 0b00000000, 0b00000000, 0b00000000,

};

Bitmap eyesDizzy = {
  46, // XSize
  31, // YSize 
  6,  // Bytes in Line
  EyesDizzy ,  // Pointer to picture data 
};

static char EyesSurprised[] = {

0b00000011, 0b11111111, 0b10000000, 0b00000000, 0b01111111, 0b11100000,
0b00001111, 0b11111111, 0b11100000, 0b00000011, 0b11111111, 0b11110000,
0b00011111, 0b11111111, 0b11110000, 0b00000111, 0b11111111, 0b11110000,
0b00111111, 0b11111111, 0b11110000, 0b00011111, 0b11111111, 0b11111000,
0b01111111, 0b11111111, 0b11111000, 0b00111111, 0b11111111, 0b11111000,
0b01111111, 0b11111111, 0b11111000, 0b00111111, 0b11111111, 0b11111000,
0b01111111, 0b11111111, 0b11111000, 0b01111111, 0b11111111, 0b11111100,
0b01111111, 0b11111111, 0b11111100, 0b01111111, 0b11111111, 0b11111100,
0b11111111, 0b11111111, 0b11111100, 0b11111111, 0b11111111, 0b11111100,
0b11111111, 0b11111111, 0b11111100, 0b11111111, 0b11111111, 0b11111100,
0b11111111, 0b11111111, 0b11111100, 0b11111111, 0b11111111, 0b11111100,
0b11111111, 0b11111111, 0b11111100, 0b11111111, 0b11111111, 0b11111100,
0b11111111, 0b11111111, 0b11111101, 0b11111111, 0b11111111, 0b11111100,
0b11111111, 0b11111111, 0b11111101, 0b11111111, 0b11111111, 0b11111100,
0b11111111, 0b11111111, 0b11111101, 0b11111111, 0b11111111, 0b11111100,
0b11111111, 0b11111111, 0b11111101, 0b11111111, 0b11111111, 0b11111100,
0b11111111, 0b11111111, 0b11111101, 0b11111111, 0b11111111, 0b11111100,
0b11111111, 0b11111111, 0b11111101, 0b11111111, 0b11111111, 0b11111000,
0b11111111, 0b11111111, 0b11111100, 0b11111111, 0b11111111, 0b11111000,
0b01111111, 0b11111111, 0b11111100, 0b11111111, 0b11111111, 0b11111000,
0b01111111, 0b11111111, 0b11111100, 0b11111111, 0b11111111, 0b11111000,
0b00111111, 0b11111111, 0b11111000, 0b11111111, 0b11111111, 0b11110000,
0b00111111, 0b11111111, 0b11111000, 0b01111111, 0b11111111, 0b11110000,
0b00111111, 0b11111111, 0b11111000, 0b01111111, 0b11111111, 0b11110000,
0b00111111, 0b11111111, 0b11111000, 0b01111111, 0b11111111, 0b11110000,
0b00011111, 0b11111111, 0b11110000, 0b01111111, 0b11111111, 0b11100000,
0b00011111, 0b11111111, 0b11110000, 0b00111111, 0b11111111, 0b11100000,
0b00011111, 0b11111111, 0b11110000, 0b00111111, 0b11111111, 0b11100000,
0b00000111, 0b11111111, 0b11000000, 0b00001111, 0b11111111, 0b00000000,
0b00000011, 0b11111111, 0b10000000, 0b00000000, 0b00000000, 0b00000000,
0b00000000, 0b11111111, 0b00000000, 0b00000000, 0b00000000, 0b00000000,

};

Bitmap eyesSurprised = {
  46, // XSize
  31, // YSize 
  6,  // Bytes in Line
  EyesSurprised ,  // Pointer to picture data 
};

static char EyesLove[] = {

0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
0b00000011, 0b11000001, 0b11100000, 0b00011110, 0b00001111, 0b00000000,
0b00001111, 0b11100011, 0b11111000, 0b01111111, 0b00011111, 0b11000000,
0b00001111, 0b11110111, 0b11111000, 0b01111111, 0b10111111, 0b11000000,
0b00011111, 0b11110111, 0b11111100, 0b11111111, 0b10111111, 0b11100000,
0b00011111, 0b11111111, 0b11111100, 0b11111111, 0b11111111, 0b11100000,
0b00011111, 0b11111111, 0b11111100, 0b11111111, 0b11111111, 0b11100000,
0b00011111, 0b11111111, 0b11111100, 0b11111111, 0b11111111, 0b11100000,
0b00011111, 0b11111111, 0b11111100, 0b11111111, 0b11111111, 0b11100000,
0b00011111, 0b11111111, 0b11111100, 0b11111111, 0b11111111, 0b11100000,
0b00011111, 0b11111111, 0b11111100, 0b11111111, 0b11111111, 0b11100000,
0b00001111, 0b11111111, 0b11111000, 0b01111111, 0b11111111, 0b11000000,
0b00001111, 0b11111111, 0b11111000, 0b01111111, 0b11111111, 0b11000000,
0b00000111, 0b11111111, 0b11110000, 0b00111111, 0b11111111, 0b10000000,
0b00000011, 0b11111111, 0b11100000, 0b00011111, 0b11111111, 0b00000000,
0b00000001, 0b11111111, 0b11000000, 0b00001111, 0b11111110, 0b00000000,
0b00000001, 0b11111111, 0b11000000, 0b00001111, 0b11111110, 0b00000000,
0b00000000, 0b11111111, 0b10000000, 0b00000111, 0b11111100, 0b00000000,
0b00000000, 0b01111111, 0b00000000, 0b00000011, 0b11111000, 0b00000000,
0b00000000, 0b00111110, 0b00000000, 0b00000001, 0b11110000, 0b00000000,
0b00000000, 0b00111110, 0b00000000, 0b00000001, 0b11110000, 0b00000000,
0b00000000, 0b00011100, 0b00000000, 0b00000000, 0b11100000, 0b00000000,
0b00000000, 0b00001000, 0b00000000, 0b00000000, 0b01000000, 0b00000000,
0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,

};

Bitmap eyesLove = {
  46, // XSize
  31, // YSize 
  6,  // Bytes in Line
  EyesLove ,  // Pointer to picture data 
};




#endif