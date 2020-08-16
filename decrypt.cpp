# include <cmath>     
# include <cstring>
# include <cstdlib> 
# include <cstdio>

const char decrypt(const char L, int key){
    int buffer;
    buffer=L-key;
    return buffer;
}

int main() 
{ 
  FILE *fp = fopen("encrypted.txt", "r");
  FILE *fpw = fopen("decrypted.txt", "w");
  int key;
  fputs("Enter key to decrypt message:",stdout);
  scanf("%d",&key);  
  char ch;
  while (ch != EOF)  
  { 
     ch = getc(fp); 
    putc(decrypt(ch,key), fpw);    
  }       
  fclose(fp);       
  //getchar(); 
  return 0; 
} 