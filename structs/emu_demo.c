
enum payment {CASH, CREDIT, CHEQUE};  // 1

main()
{
  enum payment p;   // 2

     p  = CASH;  // 3
     if (p == CREDIT)  // 4
         printf("Credit payment!");
     else
         printf("Cash or cheque");

}

