#include "opencv2/ml/ml.hpp"
#include "opencv2/highgui/highgui.hpp"  
#include "opencv2/imgproc/imgproc.hpp"  
#include <stdio.h>  
#include <vector>
#include <iostream>
#include <fstream>
#include <cmath>
#include "recognition.h"
  

using namespace cv;  
using namespace std;

//Code to multiply, add or create transpose of matrix, which cannot be used 
//now as due to some memory leak, we couldn't return the matrix from open cv digit recognition function
int out[3][3];
void multiply(int mat1[3][3],int mat2[3][3], int r1, int c1, int r2, int c2)
{
	//int output[rows][cols];
	//image1.rows , image1.cols
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			for(int x = 0; x < 3; x++)
				out[i][j] += mat1[i][x] * mat2[x][j];
		}
	} 

}


void add(int mat1[3][3],int mat2[3][3])
{
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
				out[i][j] = mat1[i][j] + mat2[i][j];
		}
	} 

}

void transpose(int mat1[3][3])
{
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
				out[i][j] = mat1[j][i];
		}
	} 

}

int main()
{
    int choice;
    int i =0; int j=0; int x=0;
    	
    cout << "Please select the operation you want to perform: \n";
    
    cout << "1: Transpose \n";
    cout << "2: Multiplication \n";
    cout << "3: Addition \n";
    cout << "4: Inverse \n";
    cout << "5: Determinant Calculation \n";

    cin >> choice;

    Mat first;
    Mat second;

    int r1,c1,r2,c2;

    char file1[255];
    char file2[255];
    char image1[255];
    char image2[255];

    switch(choice)
    {
	case 1: 
        cout << "Enter the image: \n";
	cin >> image1;
 	cout << "enter rows"<<endl;
 	cin>>r1;
 	cout << "enter columns"<<endl;
 	cin>>c1;
	sprintf(file1, "images/%s", image1); //There should be images folder in pwd, choose image from that folder
	first = imread(file1, 1);
        //imshow("window",first);
	//waitKey(0);
        opencvdet(first,r1,c1); 
 	//transpose(image1,r1,c1); //tranpose is handled in opencvdet
	break;	
	
	default:
	cout << "We could only option 1working at this point due to a memory leak.";
	break;
	/*
	case 2: 
        cout << "Enter first matrix: \n";
	sprintf(file1, "images/%s.png", image1);
	first = imread(file1, 1);
	cout << "enter rows"<<endl;
 	cin>>r1;
 	cout << "enter columns"<<endl;
 	cin>>c1;
	cout << "Enter second matrix: \n";
	sprintf(file2, "images/%s.png", image2);
	second = imread(file2, 1);
	cout << "enter rows"<<endl;
 	cin>>r2;
 	cout << "enter columns"<<endl;
 	cin>>c2;
	cout << "Enter second matrix: \n";

        
	multiply(image1,image2,r1,c1,r2,c2);
	break;

	case 3: 
         cout << "Enter first matrix: \n";
	sprintf(file1, "images/%s.png", image1);
	image1 = imread(file1, 1);
	cout << "enter rows"<<endl;
 	cin>>r1;
 	cout << "enter columns"<<endl;
 	cin>>c1;
	cout << "Enter second matrix: \n";
	sprintf(file1, "images/%s.png", image2);
	image2 = imread(file2, 1);
	cout << "enter rows"<<endl;
 	cin>>r2;
 	cout << "enter columns"<<endl;
 	cin>>c2;
	cout << "Enter second matrix: \n";
	multiply(image1,image2,r1,c1,r2,c2);
	add(image1,image2);
	break;

	case 4: 
        cout << "Enter first matrix: \n";
        cout << "Enter second matrix: \n";
	inverse(mat1,mat2);
	break;

        case 5: 
        cout << "Enter the matrix: \n";
	determinant(mat1);
	break; */
    }   	
}
