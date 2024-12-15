bool canPlaceFlowers(int* flowerbed, int flowerbedSize, int n) {
  int aux= n-1,aux1 = n+1;


 if (n == 0){
    if (flowerbed[n+1] == 0)
    return true;
 }

    if (flowerbed[n-1] == 0 && flowerbed[n+1] == 0)
        return false;


return true;        
}