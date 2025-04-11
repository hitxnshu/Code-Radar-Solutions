int kangaroo(int x1, int v1, int x2, int v2){
    int posdiff = (x1 - x2);
    int disdiff = (v2 - v1);
    int ans = (posdiff/disdiff);
    if(ans>0 && (posdiff % disdiff == 0)){
        return ans;
    }
    else{
        return -1;
    }


}