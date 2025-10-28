int main() {

	double a, b;

	a = 1.5;

	b = 2.3;

	//TODO colocar a chamada a função
    troca(&a,&b);
	printf("Valor de a = %f, de b = %f", a, b);

}

void troca(double *a, double *b){
    double temp = *a;
    *a = *b;
    *b = temp;
}
