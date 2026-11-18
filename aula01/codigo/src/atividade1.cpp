//Davi Ferreira de Souza RA:241024676

#include <opencv2/core.hpp>         // Declaração do cv::Mat
#include <opencv2/imgcodecs.hpp>    // Carregar e armazenar imagens
#include <opencv2/highgui.hpp>


#include <string>   // Permite declarar strings
#include <iostream> 
#include <math.h>
#include <cstdlib>

typedef unsigned char byte;

int main(int argc, char* argv[]) 
{

    if(argc < 3) {std::cout << "É necessário fornecer o tamanho da imagem (x,y)\n"; return 1;}
    
    //params size x, size y;
    int size_x = atoi(argv[1]);
    int size_y = atoi(argv[2]);

    

    const std::string image_path = "../dados/maps-cropped.png";


    cv::imshow(image_path, img_synth);
    int k = cv::waitKey(0);
    cv::destroyAllWindows();



}