#include <stdio.h>

 main() {
   int tree[3] = {1,2,3},i;

for(i=0;i<3;i++){
printf("root= %d\n",tree[i]);
printf("left= %d\n",tree[2*i +1]);
printf("right= %d\n",tree[2*i +2]);
}
return 0;
}
