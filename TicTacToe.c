#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main()
{
  int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
  char b[3][3]={{' ',' ',' '},{' ',' ',' '},{' ',' ',' '}};
  int i,j,n,x,y,count=0,k,d=0,s,l,h;
  char name1[100];
  char name2[100];
  printf("Select 1. for Player 1 Vs Player 2\nSelect 2. for Player Vs Computer\n");
  scanf("%d",&s);
  if(s==1)
  {
  printf("Enter Name of player 1: ");
  scanf("%s",name1);
  printf("Enter Name of player 2: ");
  scanf("%s",name2);
  printf("-------------\n");
  for(i=0;i<3;i++)
  {
      for(j=0;j<3;j++)
      {
      printf("| %d ",a[i][j]);

      }
      printf("|");
  printf("\n");
  printf("-------------\n");
  }
do
  {
    k=0;
       do
       {
           x=5;
           y=5;
       printf("Enter position: ");
       scanf("%d",&n);
       for(i=0;i<3;i++)
       {
           for(j=0;j<3;j++)
           {
               if((a[i][j]==n)&&(b[i][j]==' ')&&(b[i][j]!='x')&&(b[i][j]!='o'))
               {
                  x=i;
                  y=j;

               }
           }

       }
       }while((x==5)&&(y==5));

           {
       if(count%2==0)
       {
           b[x][y]='x';
       }
       else
       {
           b[x][y]='o';
       }
           }
       for(i=0;i<3;i++)
       {
           for(j=0;j<3;j++)
           {
               printf("| %c ",b[i][j]);
           }
           printf("|");
           printf("\n");
           printf("-------------\n");
       }

      if((b[0][0]==b[0][1])&&(b[0][1]==b[0][2])&&(b[0][0]!=' '))
      {
         if(count%2==0)
         {
             puts(name1);
             printf("Wins the Match!");
             exit(0);
         }
         else
         {
             puts(name2);
             printf("Wins the Match!");
             exit(0);
         }
      }
      else if((b[1][0]==b[1][1])&&(b[1][1]==b[1][2])&&(b[1][0]!=' '))
      {
          if(count%2==0)
         {
             puts(name1);
             printf("Wins the Match!");
             exit(0);
         }
         else
         {
             puts(name2);
             printf("Wins the Match!");
             exit(0);
         }

      }
      else if((b[2][0]==b[2][1])&&(b[2][1]==b[2][2])&&(b[2][0]!=' '))
      {
          if(count%2==0)
         {
             puts(name1);
             printf("Wins the Match!");
             exit(0);
         }
         else
         {
             puts(name2);
             printf("Wins the Match!");
             exit(0);
         }
      }
      else if((b[0][0]==b[1][0])&&(b[1][0]==b[2][0])&&(b[0][0]!=' '))
      {
          if(count%2==0)
         {
             puts(name1);
             printf("Wins the Match!");
             exit(0);
         }
         else
         {
             puts(name2);
             printf("Wins the Match!");
             exit(0);
         }
      }
      else if((b[0][1]==b[1][1])&&(b[1][1]==b[2][1])&&(b[0][1]!=' '))
      {
          if(count%2==0)
         {
             puts(name1);
             printf("Wins the Match!");
             exit(0);
         }
         else
         {
             puts(name2);
             printf("Wins the Match!");
             exit(0);
         }
      }
      else if((b[0][2]==b[1][2])&&(b[1][2]==b[2][2])&&(b[0][2]!=' '))
      {
         if(count%2==0)
         {
             puts(name1);
             printf("Wins the Match!");
             exit(0);
         }
         else
         {
             puts(name2);
             printf("Wins the Match!");
             exit(0);
         }
      }

      else if((b[0][0]==b[1][1])&&(b[1][1]==b[2][2])&&(b[0][0]!=' '))
      {
          if(count%2==0)
         {
             puts(name1);
             printf("Wins the Match!");
             exit(0);
         }
         else
         {
             puts(name2);
             printf("Wins the Match!");
             exit(0);
         }
      }
      else if((b[0][2]==b[1][1])&&(b[1][1]==b[2][0])&&(b[0][2]!=' '))
      {
          if(count%2==0)
         {
             puts(name1);
             printf("Wins the Match!");
             exit(0);
         }
         else
         {
             puts(name2);
             printf("Wins the Match!");
             exit(0);
         }
      }
      k++;
      count++;
      d=0;
      for(i=0;i<3;i++)
      {
          for(j=0;j<3;j++)
          {
             if(b[i][j]==' ')
             {
                 d++;
             }
          }
      }
    if(d==0)
    {
        printf("Match draw!");
        exit(0);
    }

    }while(k>0);
  }
  else
  {
      printf("Select difficulty\n1. For Easy\t2. For Normal\t3. For Hard\n");
      scanf("%d",&h);
      if(h==1)
      {
      printf("Enter Name of player : ");
      scanf("%s",name1);

  printf("-------------\n");
  for(i=0;i<3;i++)
  {
      for(j=0;j<3;j++)
      {
      printf("| %d ",a[i][j]);

      }
      printf("|");
  printf("\n");
  printf("-------------\n");
  }

do
  {


k=0;
       if(count%2==0)
       {

               do{
                    x=5;
                    y=5;
       printf("Enter position: ");
       scanf("%d",&n);
       for(i=0;i<3;i++)
       {
           for(j=0;j<3;j++)
           {
               if((a[i][j]==n)&&(b[i][j]==' ')&&(b[i][j]!='x')&&(b[i][j]!='o'))
               {
                  x=i;
                  y=j;

               }

           }

       }

               }while((x==5)&&(y==5));
       }

          else
            {
                do
                {
                   x=5;
                   y=5;
               srand(time(0));
               l=(rand()%10);

               for(i=0;i<3;i++)
               {
                   for(j=0;j<3;j++)
                   {
                       if((a[i][j]==l)&&(b[i][j]==' ')&&(b[i][j]!='x')&&(b[i][j]!='o'))
                       {
                           x=i;
                           y=j;

                       }

                   }
               }


            }while((x==5)&&(y==5));
            }



       if(count%2==0)
       {
           b[x][y]='x';
       }
       else
       {
           b[x][y]='o';
       }


       for(i=0;i<3;i++)
       {
           for(j=0;j<3;j++)
           {
               printf("| %c ",b[i][j]);
           }
           printf("|");
           printf("\n");
           printf("-------------\n");
       }

      if((b[0][0]==b[0][1])&&(b[0][1]==b[0][2])&&(b[0][0]!=' '))
      {
         if(count%2==0)
         {
             puts(name1);
             printf("Wins the Match!");
             exit(0);
         }
         else
         {

             printf("Computer Wins the Match!\nYou Lose!");
             exit(0);
         }
      }
      else if((b[1][0]==b[1][1])&&(b[1][1]==b[1][2])&&(b[1][0]!=' '))
      {
          if(count%2==0)
         {
             puts(name1);
             printf("Wins the Match!");
             exit(0);
         }
         else
         {
             printf("Computer Wins the Match!\nYou Lose!");
             exit(0);
         }

      }
      else if((b[2][0]==b[2][1])&&(b[2][1]==b[2][2])&&(b[2][0]!=' '))
      {
          if(count%2==0)
         {
             puts(name1);
             printf("Wins the Match!");
             exit(0);
         }
         else
         {
             printf("Computer Wins the Match!\nYou Lose!");
             exit(0);
         }
      }
      else if((b[0][0]==b[1][0])&&(b[1][0]==b[2][0])&&(b[0][0]!=' '))
      {
          if(count%2==0)
         {
             puts(name1);
             printf("Wins the Match!");
             exit(0);
         }
         else
         {
             printf("Computer Wins the Match!\nYou Lose!");
             exit(0);
         }
      }
      else if((b[0][1]==b[1][1])&&(b[1][1]==b[2][1])&&(b[0][1]!=' '))
      {
          if(count%2==0)
         {
             puts(name1);
             printf("Wins the Match!");
             exit(0);
         }
         else
         {
            printf("Computer Wins the Match!\nYou Lose!");
             exit(0);
         }
      }
      else if((b[0][2]==b[1][2])&&(b[1][2]==b[2][2])&&(b[0][2]!=' '))
      {
         if(count%2==0)
         {
             puts(name1);
             printf("Wins the Match!");
             exit(0);
         }
         else
         {
             printf("Computer Wins the Match!\nYou Lose!");
             exit(0);
         }
      }

      else if((b[0][0]==b[1][1])&&(b[1][1]==b[2][2])&&(b[0][0]!=' '))
      {
          if(count%2==0)
         {
             puts(name1);
             printf("Wins the Match!");
             exit(0);
         }
         else
         {
             printf("Computer Wins the Match!\nYou Lose!");
             exit(0);
         }
      }
      else if((b[0][2]==b[1][1])&&(b[1][1]==b[2][0])&&(b[0][2]!=' '))
      {
          if(count%2==0)
         {
             puts(name1);
             printf("Wins the Match!");
             exit(0);
         }
         else
         {
            printf("Computer Wins the Match!\nYou Lose!");
             exit(0);
         }
      }
      k++;
      count++;

      d=0;
      for(i=0;i<3;i++)
      {
          for(j=0;j<3;j++)
          {
             if(b[i][j]==' ')
             {
                 d++;
             }
          }
      }
    if(d==0)
    {
        printf("Match draw!");
        exit(0);
    }


    }while(k>0);


   }
   else if(h==2)
   {
        {
      printf("Enter Name of player : ");
      scanf("%s",name1);

  printf("-------------\n");
  for(i=0;i<3;i++)
  {
      for(j=0;j<3;j++)
      {
      printf("| %d ",a[i][j]);

      }
      printf("|");
  printf("\n");
  printf("-------------\n");
  }

do
  {


k=0;
       if(count%2==0)
       {

               do{
                    x=5;
                    y=5;
       printf("Enter position: ");
       scanf("%d",&n);
       for(i=0;i<3;i++)
       {
           for(j=0;j<3;j++)
           {
               if((a[i][j]==n)&&(b[i][j]==' ')&&(b[i][j]!='x')&&(b[i][j]!='o'))
               {
                  x=i;
                  y=j;

               }

           }

       }

               }while((x==5)&&(y==5));
       }

          else
            {
                if((b[0][0]==b[0][1])&&(b[0][0]=='x')&&(b[0][2]==' '))
                   {
                       x=0;
                       y=2;
                   }
                   else if((b[0][0]==b[0][2])&&(b[0][0]=='x')&&(b[0][1]==' '))
                    {
                        x=0;
                        y=1;
                    }
                    else if((b[0][1]==b[0][2])&&(b[0][1]=='x')&&(b[0][0]==' '))
                    {
                        x=0;
                        y=0;
                    }
                    else if((b[0][0]==b[1][0])&&(b[0][0]=='x')&&(b[2][0]==' '))
                    {
                        x=2;
                        y=0;
                    }
                    else if((b[0][0]==b[2][0])&&(b[0][0]=='x')&&(b[1][0]==' '))
                    {
                        x=1;
                        y=0;
                    }
                    else if((b[1][0]==b[2][0])&&(b[1][0]=='x')&&(b[0][0]==' '))
                    {
                        x=0;
                        y=0;
                    }
                    else if((b[0][1]==b[1][1])&&(b[0][1]=='x')&&(b[2][1]==' '))
                    {
                        x=2;
                        y=1;
                    }
                    else if((b[0][1]==b[2][1])&&(b[0][1]=='x')&&(b[1][1]==' '))
                    {
                        x=1;
                        y=1;
                    }
                    else if((b[1][1]==b[2][1])&&(b[1][1]=='x')&&(b[0][1]==' '))
                    {
                        x=0;
                        y=1;
                    }
                    else if((b[0][2]==b[1][2])&&(b[0][2]=='x')&&(b[2][2]==' '))
                    {
                        x=2;
                        y=2;
                    }
                    else if((b[0][2]==b[2][2])&&(b[0][2]=='x')&&(b[1][2]==' '))
                    {
                        x=1;
                        y=2;
                    }
                    else if((b[1][2]==b[2][2])&&(b[1][2]=='x')&&(b[0][2]==' '))
                    {
                        x=0;
                        y=2;
                    }
                    else if((b[1][0]==b[1][1])&&(b[1][0]=='x')&&(b[1][2]==' '))
                    {
                        x=1;
                        y=2;
                    }
                    else if((b[1][0]==b[1][2])&&(b[1][0]=='x')&&(b[1][1]==' '))
                    {
                        x=1;
                        y=1;
                    }
                    else if((b[1][1]==b[1][2])&&(b[1][1]=='x')&&(b[1][0]==' '))
                    {
                        x=1;
                        y=0;
                    }
                    else if((b[2][0]==b[2][1])&&(b[2][0]=='x')&&(b[2][2]==' '))
                    {
                        x=2;
                        y=2;
                    }
                    else if((b[2][0]==b[2][2])&&(b[2][0]=='x')&&(b[2][1]==' '))
                    {
                        x=2;
                        y=1;
                    }
                    else if((b[2][1]==b[2][2])&&(b[2][1]=='x')&&(b[2][0]==' '))
                    {
                        x=2;
                        y=0;
                    }
                    else if((b[0][0]==b[1][1])&&(b[0][0]=='x')&&(b[2][2]==' '))
                    {
                        x=2;
                        y=2;
                    }
                    else if((b[0][0]==b[2][2])&&(b[0][0]=='x')&&(b[1][1]==' '))
                    {
                        x=1;
                        y=1;
                    }
                    else if((b[1][1]==b[2][2])&&(b[1][1]=='x')&&(b[0][0]==' '))
                    {
                        x=0;
                        y=0;
                    }
                    else if((b[0][2]==b[1][1])&&(b[0][2]=='x')&&(b[2][0]==' '))
                    {
                        x=2;
                        y=0;
                    }
                    else if((b[0][2]==b[2][0])&&(b[0][2]=='x')&&(b[1][1]==' '))
                    {
                        x=1;
                        y=1;
                    }
                    else if((b[1][1]==b[2][0])&&(b[1][1]=='x')&&(b[0][2]==' '))
                    {
                        x=0;
                        y=2;
                    }
                    else
                    {
                      do
                {
                   x=5;
                   y=5;
               srand(time(0));
               l=(rand()%10);

               for(i=0;i<3;i++)
               {
                   for(j=0;j<3;j++)
                   {
                       if((a[i][j]==l)&&(b[i][j]==' ')&&(b[i][j]!='x')&&(b[i][j]!='o'))
                       {
                           x=i;
                           y=j;

                       }

                   }
               }


            }while((x==5)&&(y==5));
                    }
            }




       if(count%2==0)
       {
           b[x][y]='x';
       }
       else
       {
           b[x][y]='o';
       }


       for(i=0;i<3;i++)
       {
           for(j=0;j<3;j++)
           {
               printf("| %c ",b[i][j]);
           }
           printf("|");
           printf("\n");
           printf("-------------\n");
       }

      if((b[0][0]==b[0][1])&&(b[0][1]==b[0][2])&&(b[0][0]!=' '))
      {
         if(count%2==0)
         {
             puts(name1);
             printf("Wins the Match!");
             exit(0);
         }
         else
         {

             printf("Computer Wins the Match!\nYou Lose!");
             exit(0);
         }
      }
      else if((b[1][0]==b[1][1])&&(b[1][1]==b[1][2])&&(b[1][0]!=' '))
      {
          if(count%2==0)
         {
             puts(name1);
             printf("Wins the Match!");
             exit(0);
         }
         else
         {
             printf("Computer Wins the Match!\nYou Lose!");
             exit(0);
         }

      }
      else if((b[2][0]==b[2][1])&&(b[2][1]==b[2][2])&&(b[2][0]!=' '))
      {
          if(count%2==0)
         {
             puts(name1);
             printf("Wins the Match!");
             exit(0);
         }
         else
         {
             printf("Computer Wins the Match!\nYou Lose!");
             exit(0);
         }
      }
      else if((b[0][0]==b[1][0])&&(b[1][0]==b[2][0])&&(b[0][0]!=' '))
      {
          if(count%2==0)
         {
             puts(name1);
             printf("Wins the Match!");
             exit(0);
         }
         else
         {
             printf("Computer Wins the Match!\nYou Lose!");
             exit(0);
         }
      }
      else if((b[0][1]==b[1][1])&&(b[1][1]==b[2][1])&&(b[0][1]!=' '))
      {
          if(count%2==0)
         {
             puts(name1);
             printf("Wins the Match!");
             exit(0);
         }
         else
         {
            printf("Computer Wins the Match!\nYou Lose!");
             exit(0);
         }
      }
      else if((b[0][2]==b[1][2])&&(b[1][2]==b[2][2])&&(b[0][2]!=' '))
      {
         if(count%2==0)
         {
             puts(name1);
             printf("Wins the Match!");
             exit(0);
         }
         else
         {
             printf("Computer Wins the Match!\nYou Lose!");
             exit(0);
         }
      }

      else if((b[0][0]==b[1][1])&&(b[1][1]==b[2][2])&&(b[0][0]!=' '))
      {
          if(count%2==0)
         {
             puts(name1);
             printf("Wins the Match!");
             exit(0);
         }
         else
         {
             printf("Computer Wins the Match!\nYou Lose!");
             exit(0);
         }
      }
      else if((b[0][2]==b[1][1])&&(b[1][1]==b[2][0])&&(b[0][2]!=' '))
      {
          if(count%2==0)
         {
             puts(name1);
             printf("Wins the Match!");
             exit(0);
         }
         else
         {
            printf("Computer Wins the Match!\nYou Lose!");
             exit(0);
         }
      }
      k++;
      count++;

      d=0;
      for(i=0;i<3;i++)
      {
          for(j=0;j<3;j++)
          {
             if(b[i][j]==' ')
             {
                 d++;
             }
          }
      }
    if(d==0)
    {
        printf("Match draw!");
        exit(0);
    }


    }while(k>0);


}
   }
   else if(h==3)
   {
        {
      printf("Enter Name of player : ");
      scanf("%s",name1);

  printf("-------------\n");
  for(i=0;i<3;i++)
  {
      for(j=0;j<3;j++)
      {
      printf("| %d ",a[i][j]);

      }
      printf("|");
  printf("\n");
  printf("-------------\n");
  }

do
  {


k=0;
       if(count%2==0)
       {

               do{
                    x=5;
                    y=5;
       printf("Enter position: ");
       scanf("%d",&n);
       for(i=0;i<3;i++)
       {
           for(j=0;j<3;j++)
           {
               if((a[i][j]==n)&&(b[i][j]==' ')&&(b[i][j]!='x')&&(b[i][j]!='o'))
               {
                  x=i;
                  y=j;

               }

           }

       }

               }while((x==5)&&(y==5));
       }

          else
            {
                        if((b[0][0]==b[0][1])&&(b[0][0]=='o')&&(b[0][2]==' '))
                   {
                       x=0;
                       y=2;
                   }
                   else if((b[0][0]==b[0][2])&&(b[0][0]=='o')&&(b[0][1]==' '))
                    {
                        x=0;
                        y=1;
                    }
                    else if((b[0][1]==b[0][2])&&(b[0][1]=='o')&&(b[0][0]==' '))
                    {
                        x=0;
                        y=0;
                    }
                    else if((b[0][0]==b[1][0])&&(b[0][0]=='o')&&(b[2][0]==' '))
                    {
                        x=2;
                        y=0;
                    }
                    else if((b[0][0]==b[2][0])&&(b[0][0]=='o')&&(b[1][0]==' '))
                    {
                        x=1;
                        y=0;
                    }
                    else if((b[1][0]==b[2][0])&&(b[1][0]=='o')&&(b[0][0]==' '))
                    {
                        x=0;
                        y=0;
                    }
                    else if((b[0][1]==b[1][1])&&(b[0][1]=='o')&&(b[2][1]==' '))
                    {
                        x=2;
                        y=1;
                    }
                    else if((b[0][1]==b[2][1])&&(b[0][1]=='o')&&(b[1][1]==' '))
                    {
                        x=1;
                        y=1;
                    }
                    else if((b[1][1]==b[2][1])&&(b[1][1]=='o')&&(b[0][1]==' '))
                    {
                        x=0;
                        y=1;
                    }
                    else if((b[0][2]==b[1][2])&&(b[0][2]=='o')&&(b[2][2]==' '))
                    {
                        x=2;
                        y=2;
                    }
                    else if((b[0][2]==b[2][2])&&(b[0][2]=='o')&&(b[1][2]==' '))
                    {
                        x=1;
                        y=2;
                    }
                    else if((b[1][2]==b[2][2])&&(b[1][2]=='o')&&(b[0][2]==' '))
                    {
                        x=0;
                        y=2;
                    }
                    else if((b[1][0]==b[1][1])&&(b[1][0]=='o')&&(b[1][2]==' '))
                    {
                        x=1;
                        y=2;
                    }
                    else if((b[1][0]==b[1][2])&&(b[1][0]=='o')&&(b[1][1]==' '))
                    {
                        x=1;
                        y=1;
                    }
                    else if((b[1][1]==b[1][2])&&(b[1][1]=='o')&&(b[1][0]==' '))
                    {
                        x=1;
                        y=0;
                    }
                    else if((b[2][0]==b[2][1])&&(b[2][0]=='o')&&(b[2][2]==' '))
                    {
                        x=2;
                        y=2;
                    }
                    else if((b[2][0]==b[2][2])&&(b[2][0]=='o')&&(b[2][1]==' '))
                    {
                        x=2;
                        y=1;
                    }
                    else if((b[2][1]==b[2][2])&&(b[2][1]=='o')&&(b[2][0]==' '))
                    {
                        x=2;
                        y=0;
                    }
                    else if((b[0][0]==b[1][1])&&(b[0][0]=='o')&&(b[2][2]==' '))
                    {
                        x=2;
                        y=2;
                    }
                    else if((b[0][0]==b[2][2])&&(b[0][0]=='o')&&(b[1][1]==' '))
                    {
                        x=1;
                        y=1;
                    }
                    else if((b[1][1]==b[2][2])&&(b[1][1]=='o')&&(b[0][0]==' '))
                    {
                        x=0;
                        y=0;
                    }
                    else if((b[0][2]==b[1][1])&&(b[0][2]=='o')&&(b[2][0]==' '))
                    {
                        x=2;
                        y=0;
                    }
                    else if((b[0][2]==b[2][0])&&(b[0][2]=='o')&&(b[1][1]==' '))
                    {
                        x=1;
                        y=1;
                    }
                    else if((b[1][1]==b[2][0])&&(b[1][1]=='o')&&(b[0][2]==' '))
                    {
                        x=0;
                        y=2;
                    }
                    else if((b[0][0]==b[0][1])&&(b[0][0]=='x')&&(b[0][2]==' '))
                    {
                       x=0;
                       y=2;
                    }
                    else if((b[0][0]==b[0][2])&&(b[0][0]=='x')&&(b[0][1]==' '))
                    {
                        x=0;
                        y=1;
                    }
                    else if((b[0][1]==b[0][2])&&(b[0][1]=='x')&&(b[0][0]==' '))
                    {
                        x=0;
                        y=0;
                    }
                    else if((b[0][0]==b[1][0])&&(b[0][0]=='x')&&(b[2][0]==' '))
                    {
                        x=2;
                        y=0;
                    }
                    else if((b[0][0]==b[2][0])&&(b[0][0]=='x')&&(b[1][0]==' '))
                    {
                        x=1;
                        y=0;
                    }
                    else if((b[1][0]==b[2][0])&&(b[1][0]=='x')&&(b[0][0]==' '))
                    {
                        x=0;
                        y=0;
                    }
                    else if((b[0][1]==b[1][1])&&(b[0][1]=='x')&&(b[2][1]==' '))
                    {
                        x=2;
                        y=1;
                    }
                    else if((b[0][1]==b[2][1])&&(b[0][1]=='x')&&(b[1][1]==' '))
                    {
                        x=1;
                        y=1;
                    }
                    else if((b[1][1]==b[2][1])&&(b[1][1]=='x')&&(b[0][1]==' '))
                    {
                        x=0;
                        y=1;
                    }
                    else if((b[0][2]==b[1][2])&&(b[0][2]=='x')&&(b[2][2]==' '))
                    {
                        x=2;
                        y=2;
                    }
                    else if((b[0][2]==b[2][2])&&(b[0][2]=='x')&&(b[1][2]==' '))
                    {
                        x=1;
                        y=2;
                    }
                    else if((b[1][2]==b[2][2])&&(b[1][2]=='x')&&(b[0][2]==' '))
                    {
                        x=0;
                        y=2;
                    }
                    else if((b[1][0]==b[1][1])&&(b[1][0]=='x')&&(b[1][2]==' '))
                    {
                        x=1;
                        y=2;
                    }
                    else if((b[1][0]==b[1][2])&&(b[1][0]=='x')&&(b[1][1]==' '))
                    {
                        x=1;
                        y=1;
                    }
                    else if((b[1][1]==b[1][2])&&(b[1][1]=='x')&&(b[1][0]==' '))
                    {
                        x=1;
                        y=0;
                    }
                    else if((b[2][0]==b[2][1])&&(b[2][0]=='x')&&(b[2][2]==' '))
                    {
                        x=2;
                        y=2;
                    }
                    else if((b[2][0]==b[2][2])&&(b[2][0]=='x')&&(b[2][1]==' '))
                    {
                        x=2;
                        y=1;
                    }
                    else if((b[2][1]==b[2][2])&&(b[2][1]=='x')&&(b[2][0]==' '))
                    {
                        x=2;
                        y=0;
                    }
                    else if((b[0][0]==b[1][1])&&(b[0][0]=='x')&&(b[2][2]==' '))
                    {
                        x=2;
                        y=2;
                    }
                    else if((b[0][0]==b[2][2])&&(b[0][0]=='x')&&(b[1][1]==' '))
                    {
                        x=1;
                        y=1;
                    }
                    else if((b[1][1]==b[2][2])&&(b[1][1]=='x')&&(b[0][0]==' '))
                    {
                        x=0;
                        y=0;
                    }
                    else if((b[0][2]==b[1][1])&&(b[0][2]=='x')&&(b[2][0]==' '))
                    {
                        x=2;
                        y=0;
                    }
                    else if((b[0][2]==b[2][0])&&(b[0][2]=='x')&&(b[1][1]==' '))
                    {
                        x=1;
                        y=1;
                    }
                    else if((b[1][1]==b[2][0])&&(b[1][1]=='x')&&(b[0][2]==' '))
                    {
                        x=0;
                        y=2;
                    }
                    else
                    {
                      do
                {
                   x=5;
                   y=5;
               srand(time(0));
               l=(rand()%10);

               for(i=0;i<3;i++)
               {
                   for(j=0;j<3;j++)
                   {
                       if((a[i][j]==l)&&(b[i][j]==' ')&&(b[i][j]!='x')&&(b[i][j]!='o'))
                       {
                           x=i;
                           y=j;

                       }

                   }
               }


            }while((x==5)&&(y==5));
                    }
            }




       if(count%2==0)
       {
           b[x][y]='x';
       }
       else
       {
           b[x][y]='o';
       }


       for(i=0;i<3;i++)
       {
           for(j=0;j<3;j++)
           {
               printf("| %c ",b[i][j]);
           }
           printf("|");
           printf("\n");
           printf("-------------\n");
       }

      if((b[0][0]==b[0][1])&&(b[0][1]==b[0][2])&&(b[0][0]!=' '))
      {
         if(count%2==0)
         {
             puts(name1);
             printf("Wins the Match!");
             exit(0);
         }
         else
         {

             printf("Computer Wins the Match!\nYou Lose!");
             exit(0);
         }
      }
      else if((b[1][0]==b[1][1])&&(b[1][1]==b[1][2])&&(b[1][0]!=' '))
      {
          if(count%2==0)
         {
             puts(name1);
             printf("Wins the Match!");
             exit(0);
         }
         else
         {
             printf("Computer Wins the Match!\nYou Lose!");
             exit(0);
         }

      }
      else if((b[2][0]==b[2][1])&&(b[2][1]==b[2][2])&&(b[2][0]!=' '))
      {
          if(count%2==0)
         {
             puts(name1);
             printf("Wins the Match!");
             exit(0);
         }
         else
         {
             printf("Computer Wins the Match!\nYou Lose!");
             exit(0);
         }
      }
      else if((b[0][0]==b[1][0])&&(b[1][0]==b[2][0])&&(b[0][0]!=' '))
      {
          if(count%2==0)
         {
             puts(name1);
             printf("Wins the Match!");
             exit(0);
         }
         else
         {
             printf("Computer Wins the Match!\nYou Lose!");
             exit(0);
         }
      }
      else if((b[0][1]==b[1][1])&&(b[1][1]==b[2][1])&&(b[0][1]!=' '))
      {
          if(count%2==0)
         {
             puts(name1);
             printf("Wins the Match!");
             exit(0);
         }
         else
         {
            printf("Computer Wins the Match!\nYou Lose!");
             exit(0);
         }
      }
      else if((b[0][2]==b[1][2])&&(b[1][2]==b[2][2])&&(b[0][2]!=' '))
      {
         if(count%2==0)
         {
             puts(name1);
             printf("Wins the Match!");
             exit(0);
         }
         else
         {
             printf("Computer Wins the Match!\nYou Lose!");
             exit(0);
         }
      }

      else if((b[0][0]==b[1][1])&&(b[1][1]==b[2][2])&&(b[0][0]!=' '))
      {
          if(count%2==0)
         {
             puts(name1);
             printf("Wins the Match!");
             exit(0);
         }
         else
         {
             printf("Computer Wins the Match!\nYou Lose!");
             exit(0);
         }
      }
      else if((b[0][2]==b[1][1])&&(b[1][1]==b[2][0])&&(b[0][2]!=' '))
      {
          if(count%2==0)
         {
             puts(name1);
             printf("Wins the Match!");
             exit(0);
         }
         else
         {
            printf("Computer Wins the Match!\nYou Lose!");
             exit(0);
         }
      }
      k++;
      count++;

      d=0;
      for(i=0;i<3;i++)
      {
          for(j=0;j<3;j++)
          {
             if(b[i][j]==' ')
             {
                 d++;
             }
          }
      }
    if(d==0)
    {
        printf("Match draw!");
        exit(0);
    }


    }while(k>0);
}
   }
  }
}


