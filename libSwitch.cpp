#include <iostream>
using  namespace std;
#include "libSwitch.hpp"

/*
 Даны два целых числа: D (день) и M (месяц), определяющие правиль-
 ную дату невисокосного года. Вывести значения D и M для даты, предше-
 ствующей указанной.
 */

void task_case8(){
    int D,M;
    cout<<"Введите день : ";
    cin>>D;
    cout<<"Введите месяц : ";
    cin>>M;
    D = D - 1;
     if (D == 0) {
     M = M - 1;
     if (M ==0) {
     M = 12;
     }
     switch (M)
     {
     case 1: D = 31;
     case 3: D = 31;
     case 5: D = 31;
     case 7: D = 31;
     case 8: D = 31;
     case 10: D = 31;
     case 12: D = 31;
     case 4: D = 30;
     case 6: D = 30;
     case 9: D = 30;
     case 11: D = 30;
     case 2: D = 28;
     }
     }
    cout << "Предыдущая дата: "<<D<<"."<<M<<endl;
}


/*
 Даны два целых числа: D (день) и M (месяц), определяющие правиль-
 ную дату невисокосного года. Вывести значения D и M для даты, следую-
 щей за указанной.
 */


void task_case9(){
    int d,m;
    cout<<"Введите день : ";
    cin>>d;
    cout<<"Введите месяц : ";
    cin>>m;
    d++;
    switch (d)
    {
    case 32:d = 1;++m;
    switch (m)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    d = 31;break;
    case 13:d = 1;m = 1;break;
    break;
    } break;
    case 29:d = 1;++m;
    switch (m)
    {
    case 2:d = 28;break;
    }break;
    case 31:d = 1;++m;
    switch(m)
    {
    case 4:
    case 6:
    case 9:
    case 11:
    d = 30;break;
    case 12:d = 1;m = 1;break;
    }
    }
cout << "Cледущая дата: "<<d<<"."<<m<<endl;
}


/*
 Робот может перемещаться в четырех направлениях («С» — север,
 «З» — запад, «Ю» — юг, «В» — восток) и принимать три цифровые ко-
 манды: 0 — продолжать движение, 1 — поворот налево, –1 — поворот на-
 право. Дан символ C — исходное направление робота и целое число N —
 посланная ему команда. Вывести направление робота после выполнения
 полученной команды.
 */

void  task_case10(){
    int n;
        char c;

        cout << "Direction(«С» — север,«Z» — запад, «U» — юг, «B» — восток):";
        cin >> c;
        cout << "Operation:(0 — продолжать движение, 1 — поворот налево, –1 — поворот направо)";
        cin >> n;

        switch (c) {
            case 'C':
                switch (n) {
                    case 1:
                        c='Z';
                        break;
                    case 0:
                        c='C';
                        break;
                    case -1:
                        c='B';
                        break;
                    }
                break;
            case 'B':
                switch (n) {
                    case 1:
                        c='C';
                        break;
                    case 0:
                        c='B';
                        break;
                    case -1:
                        c='U';
                        break;
                    }
                break;
            case 'U':
                switch (n) {
                    case 1:
                        c='B';
                        break;
                    case 0:
                        c='U';
                        break;
                    case -1:
                        c='Z';
                        break;
                }
                break;
            case 'Z':
                switch (n) {
                    case 1:
                        c='U';
                        break;
                    case 0:
                        c='Z';
                        break;
                    case -1:
                        c='C';
                        break;
                }
        }
        cout <<"После выполнения команд :  "<< c<<endl;
}

/*
 Дано целое число в диапазоне 100–999. Вывести строку-описание
 данного числа, например: 256 — «двести пятьдесят шесть», 814 — «во-
 семьсот четырнадцать».
 */



void task_case18(){
    //setlocale(0 , «»);
    int a;
    cout<<"Введите число в диапозоне 100-999 : ";
    cin >> a;
    if(a<100 || a>999){
        cout<<"Error"<<endl;
    }
    else{
    switch (a / 100)
    {
    case 1:cout << "сто ";break;
    case 2:cout << "двести ";break;
    case 3:cout << "триста ";break;
    case 4:cout << "четыреста ";break;
    case 5:cout << "пятьсот ";break;
    case 6:cout << "шестьсот ";break;
    case 7:cout << "семьсот ";break;
    case 8:cout << "восемьсот ";break;
    case 9:cout << "девятьсот ";break;
    }
    switch (a / 10 % 10)
    {
    case 10:cout << " десять ";break;
    case 2:cout << " двадцать ";break;
    case 3:cout << " тридцать ";break;
    case 4:cout << " сорок ";break;
    case 5:cout << " пятьдесят ";break;
    case 6:cout << " шестьдесят ";break;
    case 7:cout << " семьдесят ";break;
    case 8:cout << " восемьдесят";break;
    case 9:cout << " девяносто";break;
    }
    switch (a % 100)
    {
    case 11:cout << " одиннадцать";break;
    case 12:cout << " двенадцать ";break;
    case 13:cout << " тринадцать";break;
    case 14:cout << " четырнадцать";break;
    case 15:cout << " пятнадцать ";break;
    case 16:cout << " шестнадцать ";break;
    case 17:cout << " семнадцать";break;
    case 18:cout << " восемнадцать";break;
    case 19:cout << " девятнадцать";break;
    default:
    switch (a % 10)
    {
    case 1:cout << " один ";break;
    case 2:cout << " два ";break;
    case 3:cout << " три ";break;
    case 4:cout << " четыре ";break;
    case 5:cout << " пять ";break;
    case 6:cout << " шесть ";break;
    case 7:cout << " семь ";break;
    case 8:cout << " восемь ";break;
    case 9:cout << " девять ";break;

    } }

    }
    
}

/*
 В восточном календаре принят 60-летний цикл, состоящий из 12-лет-
 них подциклов, обозначаемых названиями цвета: зеленый, красный, жел-
 тый, белый и черный. В каждом подцикле годы носят названия животных:
 крысы, коровы, тигра, зайца, дракона, змеи, лошади, овцы, обезьяны, ку-
 рицы, собаки и свиньи. По номеру года определить его название, если 1984
 год — начало цикла: «год зеленой крысы».
 */


void task_case19(){
    int n;
    cout<<"Введите  год : ";
    cin>>n;
    cout<<"Год ";
    
    switch (n%10) {
       case 0:
       case 1:
            cout<<"white ";
           break;
       case 2:
       case 3:
           cout<<"black ";

           break;
       case 4:
       case 5:
            cout<<"green ";
           break;
       case 6:
       case 7:
            cout<<"red ";
           break;
       case 8:
       case 9:
            cout<<"yellow ";
           break;
       }
     
     
       switch ((n+8)%12) {
       case 0:
               cout<<"крысы"<<endl;
           break;
       case 1:
               cout<<"коровы"<<endl;
           break;
       case 2:
               cout<<"тигра"<<endl;
           break;
       case 3:
               cout<<"зайца"<<endl;
           break;
       case 4:
               cout<<"дракона"<<endl;
           break;
       case 5:
            cout<<"змеи"<<endl;
           break;
       case 6:
               cout<<"лошади"<<endl;
           break;
       case 7:
               cout<<"овци"<<endl;
           break;
       case 8:
               cout<<"обезьяны"<<endl;
           break;
       case 9:
               cout<<"курици"<<endl;
           break;
       case 10:
            cout<<"собаки"<<endl;
           break;
       case 11:
            cout<<"свиньи"<<endl;
           break;
       }
    
}


/*
 Даны два целых числа: D (день) и M (месяц), определяющие правиль-
 ную дату. Вывести знак Зодиака, соответствующий этой дате: «Водолей»
 (20.1–18.2), «Рыбы» (19.2–20.3), «Овен» (21.3–19.4), «Телец» (20.4–20.5),
 «Близнецы» (21.5–21.6), «Рак» (22.6–22.7), «Лев» (23.7–22.8), «Дева»
 (23.8–22.9), «Весы» (23.9–22.10), «Скорпион» (23.10–22.11), «Стрелец»
 (23.11–21.12), «Козерог» (22.12–19.1).
 */


void task_case20(){
    int d,m;
    cout<<"Введите день : ";
    cin>>d;
    cout<<"Введите месяц : ";
    cin>>m;
    if(d>31 || d<0 || m>12 || m<0) cout<<"Error"<<endl;
    else{
    switch (m) {
      case 1:
            if (d>19) cout<<"Водолей"<<endl;
          else cout<<"Козерог"<<endl;
          break;
      case 2:
          if (d>18) cout<<"Рыбы"<<endl;
          else cout<<"Водолей"<<endl;
          break;
      case 3:
          if (d>20) cout<<"Овен"<<endl;
          else cout<<"Рыбы"<<endl;
          break;
      case 4:
          if (d>19) cout<<"Телец"<<endl;
          else cout<<"Овен"<<endl;
          break;
      case 5:
          if (d>20) cout<<"Близнецы"<<endl;
          else cout<<"Телец"<<endl;
          break;
      case 6:
          if (d>21) cout<<"Рак"<<endl;
          else cout<<"Близнецы"<<endl;
          break;
      case 7:
          if (d>22) cout<<"Лев"<<endl;
          else cout<<"Рак"<<endl;
          break;
      case 8:
          if (d>22) cout<<"Дева"<<endl;
          else cout<<"Лев"<<endl;
          break;
      case 9:
            if (d>22) cout<<"Весы"<<endl;
          else cout<<"Дева"<<endl;
          break;
      case 10:
          if (d>22) cout<<"Скорпион"<<endl;
          else cout<<"Весы"<<endl;
          break;
      case 11:
          if (d>22) cout<<"Стрелец"<<endl;
          else cout<<"Скорпион"<<endl;
          break;
      case 12:
          if (d>21) cout<<"Козерог"<<endl;
          else cout<<"Стрелец"<<endl;
          break;
      }
    }
}




void menuNum(){
    int menuNumber;
    cout<<"Виберите пункт меню : "<<endl;
    cout<<"1.task_case_8"<<endl;
    cout<<"2.task_case_9"<<endl;
    cout<<"3.task_case_10"<<endl;
    cout<<"4.task_case_18"<<endl;
    cout<<"5.task_case_19"<<endl;
    cout<<"6.task_case_20"<<endl;
    cout<<"Введите номер задания : ";
    cin>>menuNumber;
    
    
    switch (menuNumber) {

        case 1: task_case8();
            break;
        case 2: task_case9();
            break;
        case 3: task_case10();
            break;
        case 4: task_case18();
            break;
        case 5: task_case19();
            break;
        case 6: task_case20();
            break;
            
        default:"Error";
            break;
    }
}

