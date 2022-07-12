int minFlips (string str){
    
    int n = str.size();
    int sone = 0;
    int szero = 0;
    char zero = str.at(0);
    
    for (int i = 0; i < n; i++){
        
        if(str[i] != zero)
        {
            sone++;
        }
        else
        {
            szero++;
        }
        
          if(zero == '0')
          {
              zero = '1';
          }
          else
          {
              zero = '0';
          }
    }
    return min(sone,szero);
        
    
}