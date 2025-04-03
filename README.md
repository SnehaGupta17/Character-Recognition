# CHARACTER RECOGNITION PROJECT 

## Problem Statement: 
### Given an image of a hand-drawn Devanagari character, you have to recognize the character and display a ‘text output’ corresponding to that character on the screen.  

For example, given the following image: 
![char1](https://github.com/user-attachments/assets/847b699c-1d04-40b1-be5e-b2653b953823)
<br>You must print to the screen the following text output that corresponds to the given character: क 

Another example, given the following image: 
![char2](https://github.com/user-attachments/assets/bef3166d-1b14-48fa-a4e1-a7b6b540b65e)
<br>You must print to the screen the following text output that looks like the given character: प 

### Type the following commands in the terminal to run your code: 
g++ -o recognizer main.cpp recognizer.cpp `pkg-config --cflags --libs opencv4` 
./recognizer Devanagari-Dataset/Reference-Images/ 
Devanagari-Dataset/Testcases/char1.png 

Here,  
<dataset_path> is the directory path containing all the reference images of characters. <br>
<test_image_path> is the test image file path 

For example: 
<dataset_path> ---> ./recognizer Devanagari-Dataset/Reference-Images/  <br>
<test_image_path> ---> Devanagari-Dataset/Testcases/char1.png 

1) The first g++ command will compile your code, link all required opencv files, headers, and finally provide you with an executable file named “recognizer” 
2) In the second command, 
  a) ./recognizer implies running the executable file “recognizer” 
  b) Next, /home/Devanagari-Dataset/Reference-Images/ is the directory containing all the reference images for Devanagari characters 
  c) Lastly, /home/Devanagari-Dataset/Testcases/char1.png is the test image file path 
      If the provided test image is:
     ![char1](https://github.com/user-attachments/assets/9602597d-07d4-4788-a20a-b4b3c02d4dca)

      <br>The following output is expected to be printed on the screen: <br><br>
      Character: क
   
There are required Supporting Code Files: 
● Reference Image Files will be provided 
● Test Image Files will be provided for tallying the code output 
● ReadME Doc for using opencv constructs: imread(), Mat Class 
● Driver Code 

Files to be Submitted: 
    ● recognizer.h  
      You need to declare Classes, their data members and methods, and/or any other methods if required. 
    ● recognizer.cpp  
      You need to implement the “recognize()” method and the methods mentioned in the recognizer.h file (if any). 
