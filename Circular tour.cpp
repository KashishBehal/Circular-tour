class Solution{
  public:
  
    //Function to find starting point where the truck can start to get through
    //the complete circle without exhausting its petrol in between.
    int tour(petrolPump p[],int n)
    {
       //Your code here
       int start=0;
       int required=0;
       int extrafuel=0;
       for(int i=0;i<n;i++){
           extrafuel=extrafuel+(p[i].petrol-p[i].distance);
           if(extrafuel<0){
               start=i+1;
               required+=extrafuel;
               extrafuel=0;
           }
       }
       if(required+extrafuel>=0){
           return start;
       }
       return -1;
    }
};
