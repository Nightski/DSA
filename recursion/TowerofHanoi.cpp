#include<iostream>

void TOH(int n, char source, char dest, char aux){
    if(n == 1){
        std::cout<<"Move disk 1 from "<<source<<" to "<<dest<<std::endl;
        return;
    }
    TOH(n - 1, source, aux, dest);
    std::cout<<"Move disk "<<n<<" from "<<source<<" to "<<dest<<std::endl;
    TOH(n - 1, aux, dest, source);
}

int main(){
    int n;
    std::cout<<"Enter the number of disks: ";
    std::cin>> n;
    TOH(n, 's', 'd', 'a');
    return 0;
}
