void main(){
    int N1, N2, N3;
    printf("Digite um número (N1): ");
    scanf("%d", &N1);
    printf("Digite um número (N2): ");
    scanf("%d", &N2);
    N3 = N2;
    N2 = N1;
    N1 = N3;
    printf("A variável N1 tem valor %d\nA variável N2 tem valor %d", N1, N2);
}