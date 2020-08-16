# include <cmath>     
# include <cstring>
# include <cstdlib> 
# include <cstdio>



const char encrypt(const char L, int key){
    int buffer;
    buffer=L+key;
    return buffer;
}

int main() 
{ 
  FILE *fp = fopen("message.txt", "r");
  FILE *fpw = fopen("encrypted.txt", "w");
  int key;
  fputs("Enter key to encrypt message:",stdout);
  scanf("%d",&key);  
  char ch;
  while (ch != EOF)  
  {   
    ch = getc(fp); 
    printf("%c\n",ch);
    putc(encrypt(ch,key), fpw);   
  }       
  fclose(fp);       
  //getchar(); 
  return 0; 
} 