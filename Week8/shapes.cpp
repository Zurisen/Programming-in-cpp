#include "shapes.h"
#include <iostream>
#include <cmath>

using namespace std;


Shape::Shape(){

}

Shape::~Shape(){

}

// Circle class
Circle::Circle(double radius){
  r = radius;
}

Circle::Circle(const Circle & c){
  r = c.r;
}

Circle::~Circle(){

}

double Circle::area(void){
  return 3.1416*pow(r,2);
}

double Circle::perimeter(void){
  return 2.*3.1416*r;
}

double Circle::height(void){
  return 2*r;
}

double Circle::width(void){
  return 2*r;
}

void Circle::rotate(void){
 // does nothing
}


// Rectangle class
Rectangle::Rectangle(double a, double b){
  h = a;
  w = b;

}

Rectangle::Rectangle(const Rectangle & r){
  h = r.h;
  w = r.w;
}

Rectangle::~Rectangle(){

}

double Rectangle::area(void){
  return w*h;
}

double Rectangle::perimeter(void){
  return 2.*h+2.*w;
}

double Rectangle::height(void){
  return h;
}

double Rectangle::width(void){
  return w;
}

void Rectangle::rotate(void){
  double tmp = h;
  h = w;
  w = tmp;
}

// Square class
Square::Square(double length):Rectangle(length, length){
  h = length;
  w = length;
}

Square::Square(const Square & s):Rectangle(s.h, s.w){
  h = s.h;
  w = s.w;
}

Square::~Square(void){

}
