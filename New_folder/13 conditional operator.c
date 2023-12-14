
void main()
{
    /*int a;
    a=10?20:30;
    printf("%d",a);//20 */
   /*int a;
    a=5<2?20:30;
    printf("%d",a);//30 */
    /*int a;
    a=1!=2>5?10:20;
    printf("%d",a);//10 */
    /*int a;
    a=2<5?10:20:30;
    printf("%d",a);//Errpr no of ?and : are not equal */
    /*int a;
    a=5<8?10:20:5?30;
    printf("%d",a);// Error every : should match just before the? */
    /*int a;
    a=5>8?10;
    printf("%d",a);//3rd argument are not available */
    /*a=5>8?10:1!=2<5?20:30;// first priority is < than =
    printf("%d",a);//30 */
    /*int a;
    a=5<8?1!=2<5==0?10:20:30;//first priority is to < than = than ==
    printf("%d",a);//10*/
    /*int a;
    a=5>8?10:1!=5<8?20?20:!5!=5?30:40;
    printf("%d",a);//30 */
    /*int a;
    a=2>5&&2<5?10:5<8?!1!=2<5?20:30:40;
    printf("%d",a);//20*/
    /*int a;
    a=2>5!=1?5<8&&8>2?!5?10:20:30:40;
    printf("%d",a);//20 */
    int a;
    a=2>5?1!=2>5?10:20:5<8?2!=2>7?!5?30:!1!=1?40:50:60:70;
    printf("%d",a);//40
}
