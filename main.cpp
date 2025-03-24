/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: sjmcf
 *
 * Created on March 23, 2025, 7:35 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
//Rectangle class definition 
class Rectangle{
private:
    double width;
    double height;
    
public:
    //No-argument constructor
    Rectangle(){
        width = 1.0;
        height = 1.0;
    }
    
    //Constructor with specified width and height
    Rectangle(double w, double h){
        width = w;
        height = h;
    }
    
    //Access functions 
    double getWidth() const{
        return width;
    }
    
    double getHeight() const{
        return height;
    }
    
    void setWidth(double w){
        width = w;
    } 
    
    void setHeight(double h){
        height = h;
    }
    
    // Calculate area
    double getArea()const{
        return width * height;
    }
    
    //Calculate perimeter
    double getPerimeter()const{
        return 2 * (width + height);
    }
};
int main(int argc, char** argv) {
// Create the first rectangle object 
    Rectangle rect1(4,40);
    // Create the second rectangle object 
    Rectangle rect2(3.5, 35.9);
    
    //Display properties and calculations for rect1
    cout << "Rectangle 1: " << endl;
    cout << "Width: " << rect1.getWidth() << ", Height: " << rect1.getHeight() <<endl;
    cout << "Area: " <<  rect1.getArea() << endl;
    cout << "Perimeter: " << rect1.getPerimeter() << endl;
    cout << endl;
    
    //Display properties and calculations for rect2
    cout << "Rectangle 2: " << endl;
    cout << "Width: " << rect2.getWidth() << ", Height: " << rect2.getHeight() << endl;
    cout << "Area: " << rect2.getArea() << endl;
    cout<< "Perimeter: " << rect2.getPerimeter() << endl;
    return 0;
}

