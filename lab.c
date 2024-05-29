#include "lab.h"
int lr1(){   
int v1; // скорость слива 
 int v2; // скорость подачи
 int time; // время, за которое уйдет вода
 int s; // объем басика
 printf("Введите объем бассейна в литрах: ");
 scanf("%d", &s);
 printf("Введите скорость вытекания воды из бассейна в литрах в минуту: ");
 scanf("%d", &v1);
 printf("Введите скорость подачи воды в бассейн в литрах в минуту: ");
 scanf("%d", &v2);
 if (v1 <= v2) {
 printf("Вода вытекает медленнее или также, как и подается, поэтому бассейн никогда не опустеет.\n");
 } else {
 time = s / (v1 - v2);
 printf("Для опустошения бассейна потребуется %d минут.\n", time);
 }    

    
getchar();
return 0;

}

int lr1d(){
    

    
getchar();
return 0;  
}

int lr2(){
float s; // сумма ряда 
float a; // очередной элемент ряда 
 
int n; // количество элементов ряда 
int i = 1; // номер очередного элемента ряда 
 
 int num = 1; // числитель дроби 
int den = 1; // знаменатель дроби 
// ввод параметров ряда 
 printf("n="); 
scanf("%d", &n); 
 while (i < n) { 
 num = num * (2*i - 1); // увеличиваем числитель дроби 
den = den * (3*i - 2); // увеличиваем знаменатель дроби 
 
 a = num ; a/= den; // вычисляем элемент ряда 
 
 s += a; // добавляем элемент к сумме 
 i+=1; 
 } 
 
 printf("Сумма ряда: %f\n", s);    
    

getchar();
return 0;
}



float calc(int i, int n, float s, float a, float num, float den) { 
if (i >= n) { return s; 
 } else { num = num 
* (2*i - 1); den = den 
* (3*i - 2); 
 
 a = (float)num / den; 
s += a; 
 
 return calc(i + 1, n, s, a, num, den); 
 } 
} 





int lr2d(){
float s = 0; // сумма ряда 
float a = 0; // очередной элемент ряда 
float num = 1; // числитель дроби 
float den = 1; // знаменатель дроби 
int n; // количество элементов ряда 
 
 // ввод параметров ряда 
 printf("n="); 
scanf("%d", &n); 
 
 s = calc(1, n, s, a, num, den); 
 
 printf("Сумма ряда: %f\n", s); 
getchar();
return 0;
}


int lr3(){
   
int c; // текущий символ из потока
int flag; // признак слова
int cnt = 0; // счётчик
int found; // индикатор того, что искомый признак
cnt = 0;
flag = NO;
found = NO;
// цикл чтения символов из потока, связанного с
// клавиатурой
while( (c = getchar()) != EOF ){
 if( c == ' ' || c == '.' || c == '\n' || c == ',' ){
 // найден разделитель
 if( flag == YES ){
 // это первый разделитель после слова
 if( found == YES ){
 // две последних буквы в слове
 // были одинаковы
 cnt = cnt + 1;
 found = NO;
 }
 }
 flag = NO;
 }else{
 if (c == 'a' )
 found = YES;
 flag = YES;
 
 }
}
printf("Слов, содержащих букву 'a||A||b||B' = %d\n", cnt );   
   
getchar();
return 0;
}
int lr3d(){


int c; // текущий символ из потока
int flag; // признак слова
int cnt; // счётчик
int found; // индикатор того, что искомый признак
cnt = 0;
flag = NO;
found = NO;
// цикл чтения символов из потока, связанного с
// клавиатурой
while( (c = getchar()) != EOF ){
 if( c == ' ' || c == '.' || c == '\n' || c == ',' ){
 // найден разделитель
 if( flag == YES ){
 // это первый разделитель после слова
 if( found == YES ){
 // две последних буквы в слове
 // были одинаковы
 cnt = cnt + 1;
 found = NO;
 }
 }
 flag = NO;
 }else{
 if (c == 'a' || c == 'A' || c == 'b' || c == 'B')
 found = YES;
 flag = YES;
 
 }
}
printf("Слов, содержащих букву 'a||A||b||B' = %d\n", cnt );    
    
getchar();
return 0;
}


int strl(char st[]){
 int cnt=0 ;
 for (int i = 0; st[i] != '\0'; i++) cnt++ ;
 return cnt ;
}


int lr4(){
int c;
 printf(" В символьной строке удалить все слова, начинающиеся и заканчивающиеся на одну и  туже букву \n") ; 
 char str[100];
 printf("Введите символьную строку: ");
 gets(str); 
 int f,i, j = 0;
 char word[100];
 f=strl(str);
 for (int i = 0; str[i] != '\0'; i++) {
 if (str[i] != ' ' && i!=f-1 ) {
 word[j++] = str[i];
 } 
 else {
 if(i==f-1) word[j++] = str[i];
 word[j++]='\0' ;
 j = 0;
 c=strl(word);
 if (word[0]!=word[c-1]) {
 printf("Конечная строка: %s ", word);
 }
 }
 }    
    
getchar();
return 0;    
} 

lr4d(){
 
int c;
 printf(" В символьной строке удалить все слова, начинающиеся и заканчивающиеся на одну и туже букву \n") ; 
 char str[100];
 printf("Введите символьную строку: ");
 gets(str); 
 int f,i, j = 0;
 char word[100];
 f=strl(str);
 for (int i = 0; str[i] != '\0'; i++) {
 if (str[i] != ' ' && i!=f-1 ) {
 word[j++] = str[i];
 } 
 else {
 if(i==f-1) word[j++] = str[i];
 word[j++]='\0' ;
 j = 0;
 c=strl(word);
 if (word[0]!=word[c-1]) {
 printf("Конечная строка: %s ", word);
  printf("\n");
 }
 }
 }       
    
    
getchar();
return 0;
}

lr5(){
 int i;
int IDmax =0;
int max = 0;
int IDmin =0;
int min = 32767;
int num[10];
for ( i = 0; i < 10; i++) {
 scanf("%d", &num[i]);
}
for ( i = 0; i < 10; i++) {
 if (num[i] >= max){
 IDmax = i;
 max = num[i];
 }
 if (num[i] <= min){
 IDmin = i;
 min = num[i];
 }
}
for (i=0; i < 10; i++) {
 if ((i > IDmax && i < IDmin) || (i > IDmin && i < IDmax))
 num[i] = 0;
}
for( i = 0; i < 10; i++ )
 printf("%d ", num[i]);
printf("\n");  


getchar();
return 0;    
}
lr5d(){
    
printf("NO LAB!");    
getchar();
return 0;
}

lr6(){

int K,N,flag=0,i,j,c;
 K=2;
 N=3;
 int x[2][3] ;
 for( i = 0; i < K; i++ ) {//ввод массива
 for( j = 0; j < N; j++ ){
 scanf("%d", &x[i][j]);
 }
 }
 printf("исходный массив \n") ;
 for( i = 0; i < K; i++ ){ // ввывод массива
 for( j = 0; j < N; j++ )
 printf("%d ", x[i][j]);
 printf("\n");
 } 
 c=x[0][1]-x[0][0] ;
 flag=0 ;
 for( i = 0; i < K; i++ ) {
 for( j = 1; j < N; j++ ){
 if(x[i][j]-x[i][j-1]==c) flag=1 ;
 else { 
 flag=0 ;
 break ;
 }
 }
 }
if (flag==1) printf("yes\n") ;
 else printf("NO\n") ;


getchar();
return 0;    
}
lr6d(){

printf("NO LAB!");


getchar();
return 0;
}



lr7(){
long long int N;
    int K;

    printf("Enter a number:");
    if (scanf("%lld", &N) != 1) {
        printf("Wrong number!");
        return 1;}

    printf("Enter size of shift:");
    if (scanf("%d", &K) != 1) {
        printf("Wrong number!");
        return 1;
    }

    int bitCount = sizeof(long long int) * 8;

    // Подгоняем К, чтобы не выйти за пределы сегмента
    K %= bitCount;

    printf("Resulting number: %lld", ((N << K) | (N >> (bitCount - K))));


getchar();
return 0;
    
}
lr7d(){}