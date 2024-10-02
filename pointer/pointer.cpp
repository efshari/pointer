#include <iostream>
using namespace std;

void tapBoyuk(int* a, int* b) {
    if (*a > *b)
        cout << "Böyük ədəd: " << *a << endl;
    else
        cout << "Böyük ədəd: " << *b << endl;
}

void tapIsare(int* a) {
    if (*a > 0)
        cout << "Müsbət rəqəm" << endl;
    else if (*a < 0)
        cout << "Mənfi rəqəm" << endl;
    else
        cout << "Sıfır" << endl;
}

void yerDeyis(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void kalkulyator(int* a, int* b, char* emel) {
    switch (*emel) {
    case '+':
        cout << "Cəmi: " << (*a + *b) << endl;
        break;
    case '-':
        cout << "Fərqi: " << (*a - *b) << endl;
        break;
    case '*':
        cout << "Vurmasi: " << (*a * *b) << endl;
        break;
    case '/':
        if (*b != 0)
            cout << "Qisməti: " << (*a / *b) << endl;
        else
            cout << "Sıfıra bölmək olmaz" << endl;
        break;
    default:
        cout << "Yanlış əməliyyat" << endl;
    }
}

int massivCemi(int* arr, int uzunluq) {
    int cemi = 0;
    for (int i = 0; i < uzunluq; i++) {
        cemi += *(arr + i);
    }
    return cemi;
}

void massivKopyala(int* arr1, int* arr2, int uzunluq) {
    for (int i = 0; i < uzunluq; i++) {
        *(arr2 + i) = *(arr1 + i);
    }
}

void massivTersCevir(int* arr, int uzunluq) {
    int* start = arr;
    int* end = arr + uzunluq - 1;
    while (start < end) {
        int temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

void massivTersKopyala(int* arr1, int* arr2, int uzunluq) {
    for (int i = 0; i < uzunluq; i++) {
        *(arr2 + i) = *(arr1 + uzunluq - 1 - i);
    }
}

void tapMaxMin(int* arr, int uzunluq, int* max, int* min) {
    *max = *arr;
    *min = *arr;
    for (int i = 1; i < uzunluq; i++) {
        if (*(arr + i) > *max)
            *max = *(arr + i);
        if (*(arr + i) < *min)
            *min = *(arr + i);
    }
}

void massivSurusdur(int* arr, int uzunluq, int addim) {
    while (addim--) {
        int temp = *(arr + uzunluq - 1);
        for (int i = uzunluq - 1; i > 0; i--) {
            *(arr + i) = *(arr + i - 1);
        }
        *arr = temp;
    }
}

int main() {
   

    
    int a = 10, b = 20;
    tapBoyuk(&a, &b);

   
    int c = -5;
    tapIsare(&c);

  
    yerDeyis(&a, &b);
    cout << "a: " << a << ", b: " << b << endl;

    char emel = '+';
    kalkulyator(&a, &b, &emel);

    int arr[] = { 1, 2, 3, 4, 5 };
    
    massivKopyala(arr, arr2, 5);pyalama
    int arr2[5];
    cout << "Kopyalanmış massiv: ";
    for (int i = 0; i < 5; i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;

    
    massivTersCevir(arr, 5);
    cout << "Tərsinə çevrilmiş massiv: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    massivTersKopyala(arr, arr2, 5);
    cout << "Tərsinə kopyalanmış massiv: ";
    for (int i = 0; i < 5; i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;

   
    int max, min;
    tapMaxMin(arr, 5, &max, &min);
    cout << "Maksimal: " << max << ", Minimal: " << min << endl;

    massivSurusdur(arr, 5, 2);
    cout << "Dövrü sürüşdürülmüş massiv: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

}
