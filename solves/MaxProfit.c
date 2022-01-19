int maxProfit(int* prices, int pricesSize){

    int minPrice = prices[0];
    int maxProfit = 0;
    
    for(int i =0; i <  pricesSize; i++){
        if(prices[i] < minPrice){
            minPrice = prices[i];
            continue;
        }
        
        if(prices[i] - minPrice > maxProfit){
            maxProfit = prices[i] - minPrice;
        }    
    
    }
    
    return maxProfit;
}