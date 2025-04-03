#include "recognizer.h"
#include <iostream>
#include <filesystem>
#include <opencv2/opencv.hpp>
using namespace std;
using namespace cv;

std::string recognize(const std::string &dataset_path, const std::string &test_image_path)
{
    //std::cout << "In Recognize()" << std::endl;

    // Load Image

    Mat test_img = imread(test_image_path, IMREAD_GRAYSCALE);
    // cout<<test_img;
    if (test_img.empty())
    {
        cerr << "Error: Enter correct path";
        //cout << endl;
    }

    string img_path; 
    int min_diff = INT_MAX;
    for (const auto &ch : std::filesystem::directory_iterator(dataset_path))
    {
        for (const auto &image : std::filesystem::directory_iterator(ch))
        {
            Mat ref_img = imread(image.path().string(), IMREAD_GRAYSCALE);
            // cout<<ref_img<<endl;
            if (ref_img.empty())
            {
                cerr << "Error: Enter correct path";
                //cout << endl;
            }

            int sum = 0;
            for (int i = 0; i < test_img.rows; i++)
            {
                for (int j = 0; j < test_img.cols; j++)
                {
                    int diff = (abs(test_img.at<u_char>(i, j) - ref_img.at<u_char>(i, j)));

                    sum = sum + diff;
                }
                
            }
            
           

            if (min_diff > sum)
            {
                min_diff = sum;
                Mat best_match_img = ref_img.clone();
                img_path=image.path().parent_path().filename().string();
        
                for (int i = 0; i < best_match_img.rows; i++)
                {
                    for (int j = 0; j < best_match_img.cols; j++)
                    {
                        int diff = abs(test_img.at<u_char>(i, j) - best_match_img.at<u_char>(i, j));
                    }
                    
                }
                // cout<<best_match_img<<endl;
                // cout<<img_path;
                
            }
        }
    }

    return img_path;
}