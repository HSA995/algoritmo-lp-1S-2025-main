
// Retornar o maior entre os dois numeros

int maior_2n(int a, int b){
    int maior;
    if(a > b){
        maior = a;
    }
    else{
        maior = b;
    }
    return maior;
}

//retorna o maior entre 3 numeros inteiros.

int maior_3n(int a, int b, int c){
    return maior_2n(maior_2n(a, b), c);
}

int maior_n(int numeros[], int n){
    int maior = numeros[0];

}

// numeros primos

int  verificar_numero_primo(int n){

    if((n % 2 == 0) && (n != 2)){
        return 0;
    }

    for(int i = 3; i < n; i += 2){
        if(n % i == 0){
            return 0;
        }
    }
}