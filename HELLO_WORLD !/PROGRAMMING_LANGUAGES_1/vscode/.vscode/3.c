// gazın basıncını hesaplayan program  
int main(){
    //P.V=n.R.T
    float P,V,n,T;
    const float R=0.82;
    printf("Kabin hacmini giriniz:\n");
    scanf("%f\n",&V);
    printf("gazin molunu giriniz:\n");
    scanf("%f\n",&n);
    printf("gazin sicakligini giriniz:\n");
    scanf("%f\n",&T);
    P=(n*R*T)/(V);
    printf(" %f hacimli kabin basinci %f",V,P);
    return 0 ; 
}