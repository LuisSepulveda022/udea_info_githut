#include <iostream>

using namespace std;

int main() {
  
  char ultimaletra = 'Z';
  
  int  veces = ultimaletra - 'A' + 1;
  
  
  int i,esp=0;
  for (i = 0;i < veces; i++){
    int j;
    char letra = 'A';
    
    for (j=0;j<veces-i;j++){
      cout <<letra ;
      
      letra ++ ;
    }
    
    int k;
    
    
    
    for(k=0;k<esp;k++){
      cout << " ";
  
    }
    if (esp == 0){
      esp =1;
    }else{
      esp = esp +2;  
    }
      
    
    
    
    letra = letra-1;
    for(j=0;j<veces-i;j++){
      if(letra != ultimaletra){
        cout <<letra;
      }
      letra --;
    }  
    cout << endl;
      
    
    
      
    
    
  }
  
  
  
}