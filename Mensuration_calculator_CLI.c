// Developed by Snehashish Laskar
// Developed on 18-03-2021
// Developer contact : snehashish.laskar@gmail.com
// This is a simple mensuration calculator written in C

#include <stdio.h>

int areaSquare(int side){
	int area = side*side;
	printf("Area of the square is %d \n", area );
}

int areaRectangle(int length, int breadth){
	int area = length*breadth;
	printf("Area of rectangle is %d\n", area );
}

int areaTriangle(int side1, int side2, int base){
	int area = side2*side1*base;
	printf("Area of the Triangle is %d\n", area );
}

int areaParallelogram(int height, int breadth){
	int area = height*breadth;
	printf("Area of the Parallelogram is %d\n", area);
}

int areaCircle(int radius){
	int area = 3.14*(radius*radius);
	printf("Area of the Circle is %d\n", area);
}

int areaRohmbus(int diagonal1, int diagonal2){
	int area = (diagonal2*diagonal1)/2;
	printf("Area of the Rohmbus is %d\n", area);
}

int areaTrapezium(int side1, int side2, int height){
	int area  = (height/2)*(side1+side2);
	printf("Area of the Trapezium\n");
}

int perimeterSquare(int side){
	int perimeter = 4*side;
	printf("Perimeter of the square is : %d \n", perimeter);
}

int perimeterRectangle(int length, int breadth){
	int perimeter = 2*(length+breadth);
	printf("perimeter of the rectangle is %d", perimeter);
}

int perimeterTriangle(int side1, int side2, int base ){
	int perimeter =  side1+side2+base;
	printf("perimeter of the Triangle is %d\n", perimeter);
} 

int perimeterParallelogram(int length, int breadth ){
	int perimeter = 2*(length + breadth);
	printf("perimeter of the Parallelogram is %d : \n", perimeter);
}

int circumfernce(int radius){
	int circum = 2*(3.14*radius);
	printf("circumfernce of the circle is %d\n", circum );
}

int volumeCube(int side){
	int volume = side*side*side;
	printf("Volume of the Cube is %d\n", volume);
}

int volumeCuboid(int length, int breadth, int height){
	int volume = length*breadth*height;
	printf("Volume of the Cuboid is %d\n", volume);
}

int volumeCylinder(int radius, int height){
	int volume =  (3.14*(radius*radius))*height;
	printf("Volume of the Cylinder is %d\n",volume);
}

int surfaceCube(int side){
	int surface =  6*(side*side);
	printf("surface Area of the Cube is %d", surface);
}

int surfaceCuboid(int length, int breadth){
	int surface = 6*(length*breadth);
	printf("Surface area of the Cuboid is %d", surface);
}

int lateralSurfaceCube(int side){
	int lateral = 4*(side*side);
	printf("lateral surface area of the cube is %d", lateral);
}

int lateralSurfaceCuboid(int length, int breadth, int height){
	int lateral = height*(2*(length+breadth));
	printf("lateral surface area of tge Cuboid is %d", lateral);
}

int main(void){

}