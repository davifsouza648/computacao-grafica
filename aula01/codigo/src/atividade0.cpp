//Davi Ferreira de Souza RA:241024676

#include <opencv2/core.hpp>         // Declaração do cv::Mat
#include <opencv2/imgcodecs.hpp>    // Carregar e armazenar imagens
#include <opencv2/highgui.hpp>


#include <string>   // Permite declarar strings
#include <iostream> 
#include <math.h>

typedef unsigned char byte;

int main(int argc, char* argv[]) 
{
//     if (argc < 2) {std::cout<< "É necessário fornecer o path para a imagem\n"; return 1;}

//     const std::string image_path = std::string(argv[1]);

//     const cv::Mat img = cv::imread(image_path, cv::IMREAD_GRAYSCALE);

//     if(img.empty()) {std::cout << "Algo deu errado lendo a imagem\n"; return 1;}

//     cv::imshow("Imagem original", img);
//     int k = cv::waitKey(0);
//     cv::destroyAllWindows();

    if(argc < 2) {std::cout << "É necessário fornecer o caminho de salvamento da imagem\n"; return 1;}

    const std::string image_path = std::string(argv[1]);
    const int num_linhas = 400;
    const int num_colunas = 500;
    cv::Mat img_synth(num_linhas, num_colunas, CV_8UC1, cv::Scalar(0)); //num de linhas, num de colunas, tipo da matriz e scalar para inicializar tudo como 0.

    for(int i = 0; i < img_synth.rows; ++i) 
    {
        for(int j = 0; j < img_synth.cols; ++j) 
        {
            double valor_pixel = ((static_cast<double>(i) / num_linhas) * 0.5 + (static_cast<double>(j) / num_colunas) * 0.5) * 255.0;
            img_synth.at<byte>(i, j) = static_cast<byte>(valor_pixel);

        }
    }

    cv::imshow("Imagem sintetica gerada", img_synth);
    cv::imwrite(image_path, img_synth);
    int k = cv::waitKey(0);
    cv::destroyAllWindows();



}