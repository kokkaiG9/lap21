#include<iostream>
#include<windows.h>

using namespace std;

int WINAPI WinMain(HINSTANCE hInst, HINSTANCE hPrevInst, LPSTR args, int ncmdshow){
    WNDCLASSW wc = {0};

    wc.hbrBackground = (HBRUSH)COLOR_WINDOW;
    wc.hCursor = LoadCursor(NULL,IDC_ARROW);
}

int main(int argc,char* argv[]){
    double sum = 0 ;
    if(argc == 1){
        cout << "Please input numbers to find average.";
    }
    
    if(argc != 1){
        for(int i = 1 ; i < argc ; i++){
            sum+=atof(argv[i]);
        }
        cout << "---------------------------------" << endl;
        cout << "Average of " << argc-1 << " numbers = " << sum/(argc-1) << endl;
        cout << "---------------------------------";
    }
    
    
}

