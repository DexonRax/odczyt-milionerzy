#include<iostream>
#include<fstream>

int main(){

    std::ifstream odczyt("dane.txt");

    double suma;
    double srednia;
    double liczba;
    double najmniejsza = 100;
    double najwieksza = 0;
    
    if (odczyt.is_open()) {
    
	    for(int i = 0; i<1000000; i++){
	    	odczyt>>liczba;
	    	
	    	if(liczba < najmniejsza){
	    		najmniejsza = liczba;
			}
			
			if(liczba > najwieksza){
				najwieksza = liczba;
			}
			
	    	suma = suma + liczba;
	    	srednia = suma/1000000;
		}
		
	}
	std::cout<<"srednia: "<<srednia<<std::endl;
	std::cout<<"suma: "<<suma<<std::endl;
	std::cout<<"najmniejsza: "<<najmniejsza<<std::endl;
	std::cout<<"najwieksza: "<<najwieksza<<std::endl;

    odczyt.close();

	return 0;
}