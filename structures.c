//Book structure
#include <stdio.h>
#include <stdio.h>//scanf(),printf()
#include <string.h> //strcpy()
struct book {
    char title[30];
char author[30];
int publication_year;
char ISBN[13];
float price; 

} book1 ;
int main(){
strcpy(book1.title,"Introduction to C Programming");
strcpy(book1.author,"John Smith");
book1.publication_year = 2022;
strcpy(book1.ISBN,"9780131103627");
book1.price = 49.99;

printf("title:%s\n",book1.title);
printf("author:%s\n",book1.author);
printf("publication_year:%d\n",book1.publication_year);
printf("ISBN:%s\n",book1.ISBN);
printf("price:%.2f\n",book1.price);


return 0;
    
}
