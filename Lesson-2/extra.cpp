#include <stdio.h>
#include <string.h>
#include "extra.h"

void populateCollection(struct Books books[]){
    printf("create collection of 5 books\n");
    for(int i =0;i<SIZE;i++){
      strcpy( books[i].title, "C Programming");
      strcpy( books[i].author, "Nuha Ali");
      strcpy( books[i].subject, "C Programming Tutorial");
      books[i].book_id = 6495407;
    }

}

void readingCollection(struct Books books[]){
  for(int i =0;i<5;i++){
   printf("reading collection: #%d\n\n", i+1);
   printf( "Book title : %s\n", books[i].title);
   printf( "Book author : %s\n", books[i].author);
   printf( "Book subject : %s\n", books[i].subject);
   printf( "Book book_id : %d\n", books[i].book_id);
    }
}