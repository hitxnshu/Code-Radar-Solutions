int kangaroo(int x1, int v1, int x2, int v2){
    int posdiff = (x2 - x1);
    int disdiff = (v1 - v2);
    int ans = (posdiff/disdiff);
    if(ans>0 && (posdiff % disdiff == 0)){
        return ans;
    }
    else{
        return -1;
    }


}