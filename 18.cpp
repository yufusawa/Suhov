#include <iostream>

#include <string>



void getHelp(){
    std::cout<<"Здесь будет помощь."<<"\n";
    
}



int main(
    int argc, char* argv[]){

    setlocale(LC_ALL, "");
   
    bool needHelp=false;

    std::string helpString;
    helpString = "--help";

    

    for (int i=0; i < argc; i++){

        std::cout << "argv [" << i << "] = " <<argv[ i ] << "\n";
       
        if (helpString==argv[i]){
           needHelp=true;
        };  
  }

    if(needHelp){
        getHelp();
  };

  // std::string helpString;
    
   // if ( helpString == "--help") {
   //     getHelp();
  // };

    /*std::cerr<<"ERROR"
            <<std::endl;

   int a;
   std::cin>>a;
   return a;
    */
  /*
    int nail[9];
  for(int i=0; i < 9; i++){
       nail [i] = i;
    }

    for(int i=0; i < 9; i++){
        std::cout << " nail [ " << i << " ] = " << nail[i] << "\n";
   }*/

    // for(int i=0; i < argc; i++){
    //     std::cout << " argv [ " << i << " ] = " << argv[i] << "\n";
    // }
    return 0;
}
