Computer-Vision
===============

All programs are written in CPP and test images along with report pdf is contained in files. refer to those for details.

a1 assignment(Identifying the music notes)
--------------------------------------------
a1.cpp has main
1. CommonFunctions.h: It consists of Common operations like creating a binary image and finding max 
distance from the scores generated in step 4 and 5.
Convolution.h: It consists of functions named convolve_general and convolve_separable which perform 
convolution as their names suggest.
HammingDistance.h : It consists of a function to calculate hamming distance between two binary images 
viz. image and template.
DFunction.h: It consists of function to perform Sobel edge detection on image which has been convolved 
with X and Y gradient respectively. Then we have a function which performs the scoring operation given 
in step 5.

a2 assignment(Feature detection)
--------------------------------
a2-skel has main
1. CommonFunctions.h: This file has common functions like get_gaussian, convolve_rows, transpose, 
convolve_separable, multiply (it multiplies respective pixels of both input images) , 
sub(it multiplies respective pixels of both input images), kTimesTrace, Calygrad, Calxgrad.
2. Harris.h : This file has a function named findR, which is used to calculate Harris R Score i.e. Response score.
3. ProjTransform.h : This file has a function named transform, which performs projective transformation using
bilinear interpolation.
4. Feature_det : It consists of find_theta function which computed the inverse tan of gradients 
and brings them in a range of -180 to 180 which is further divided into 8 orientations for each window that we take in 
finding feature descriptors.

a3 assignment(Segmentation and stereo)
--------------------------------------
1. segment.cpp
Using naive and markov network, we perform segmentation of foreground from background
- naïve_segment
- mrf_segment
The output generated are going to be named as naïve_segment_result_bg.png, 
naïve_segment_result_fg.png, mrf_segement_result_bg.png and mrf_segement_result_fg.png.
2. stereo.cpp
Using loopy belief and unary cost, we perform stereo or alignment.
- unary_stereo function
- mrf_loopy function
The output generated are going to be named as naïve_stereo.png and loopy_mrf_stereo.png

Project(Matrix calculator)
--------------------------
Number OCR to identify matrix in image and perrform matrix operation over it.

