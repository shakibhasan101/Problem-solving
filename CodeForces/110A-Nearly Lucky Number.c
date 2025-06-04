 #include <stdio.h>
#include <string.h>

int main() {
    char n[20];
    scanf("%s", n);

    int count = 0;
    for (int i = 0; n[i] != '\0'; i++) {
        if (n[i] == '4' || n[i] == '7') {
            count++;
        }
    }

    if (count == 4 || count == 7) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}


// If only integer was allowed to solve the problem then the solution should be
//#include<stdio.h>
//#include<stdlib.h>
//#include<math.h>
//int main()
//{
//    unsigned long long n;
//    int count=0;
//    int track=0;
//    int final_track=0;
//    scanf("%llu",&n);
//    int len= log10(n)+1;
//
//        for (int i =len-1;i>=0;i--)
//    {
//      int   digit = n/(unsigned long long)pow(10,i)%10;
//
//      count++;
//        if((digit ==4 ||digit ==7) &&count<=4)
//               {
//                   track++;
//                   if(track==4 || track==7)
//                       {
//                           final_track=-1;
//                       }
//
//
//               }
//
//        else if((digit ==4 || digit ==7)&&count<=7)
//               {
//                   track++;
//                   if(track==4 || track==7)
//                       {
//                           final_track=-1;
//
//                       }
//               }
//    }
//
//   if(final_track==-1) printf("YES");
//   else printf("NO");
//
//   return 0;
//}
//
//
