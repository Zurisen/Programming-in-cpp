#ifndef __shapes__
#define __shapes__


class Shape{

  public:
    //constructor
    Shape();
    //destructor
    ~Shape();
    
    virtual double area(void) = 0;
    virtual double perimeter(void) = 0;
    virtual double height(void) = 0;
    virtual double width(void) = 0;
    virtual void rotate(void) = 0;

  private:
    double h;
    double w;

};

class Circle: public Shape{
public:
  // Constructor
  Circle(double radius);

  Circle(const Circle & c);

  ~Circle();

  // Returns area of Rectangle
  double area(void);
  // Returns perimeter of Rectangle
  double perimeter(void);
  // Returns height "y"
  double height(void);
  // Returns width "x"
  double width(void);
  // Rotate Rectangle
  void rotate(void);

private:
  double r;

};

class Rectangle: public Shape {
public:
  // Constructor
  Rectangle(double a, double b);
  
  Rectangle(const Rectangle & r);

  ~Rectangle();

  // Returns area of Rectangle
  double area(void);
  // Returns perimeter of Rectangle
  double perimeter(void);
  // Returns height "y"
  double height(void);
  // Returns width "x"
  double width(void);
  // Rotate Rectangle
  void rotate(void);

private:
  double h;
  double w;

};


class Square: public Rectangle {
public:
  Square(double length);
  Square(const Square & s);
  ~Square();

private:
  double h;
  double w;

};

#endif
