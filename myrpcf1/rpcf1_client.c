/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "rpcf1.h"


void
echo_prog_1(char *host)
{
	CLIENT *clnt;
	struct echos  *result_1;
	echos  get_echo_1_arg;

#ifndef	DEBUG
	clnt = clnt_create (host, ECHO_PROG, ECHO_VERS, "udp");
	if (clnt == NULL) {
		clnt_pcreateerror (host);
		exit (1);
	}
#endif	/* DEBUG */
         /*Taking input from the user the message he wants to send to server*/
         printf("Enter something: \n");
        scanf("%s",&get_echo_1_arg.message);

	result_1 = get_echo_1(&get_echo_1_arg, clnt);
	if (result_1 == (struct echos *) NULL) {/*If call failed*/
		clnt_perror (clnt, "call failed");
	}
        else{/*If call succeeded print message from server*/
        printf("You entered: %s\n",result_1->message);
        }
#ifndef	DEBUG
	clnt_destroy (clnt);
#endif	 /* DEBUG */
}


void
sort_prog_2(char *host)
{
	CLIENT *clnt;
	struct sorts  *result_1;
	sorts  get_sort_2_arg;

#ifndef	DEBUG
	clnt = clnt_create (host, SORT_PROG, SORT_VERS, "udp");
	if (clnt == NULL) {
		clnt_pcreateerror (host);
		exit (1);
	}
#endif	/* DEBUG */
        /*First asking user how many integers he wants to be sorted*/ 
        int i;
        printf("Enter the number of integers to be sorted: \n");
        scanf("%d",&get_sort_2_arg.size);
        /*Taking the integers as input from user*/
        printf("Enter the integers: \n");
        for(i=0;i<get_sort_2_arg.size;i++)
        {
        scanf("%d",&get_sort_2_arg.sa[i]);
        }

	result_1 = get_sort_2(&get_sort_2_arg, clnt);
	if (result_1 == (struct sorts *) NULL) {/*If call failed*/
		clnt_perror (clnt, "call failed");
	}
        else{/*If call succeeded print result array*/
        printf("The array sorted in ascending order is: ");
        for(i=0;i<result_1->size;i++)
        {
        printf("\n%d",result_1->sa[i]);
        }
        }
#ifndef	DEBUG
	clnt_destroy (clnt);
#endif	 /* DEBUG */
}


void
readdirp_prog_3(char *host)
{
	CLIENT *clnt;
	struct dirs  *result_1;
	dirs  get_readdirp_3_arg;

#ifndef	DEBUG
	clnt = clnt_create (host, readdirp_PROG, readdirp_VERS, "udp");
	if (clnt == NULL) {
		clnt_pcreateerror (host);
		exit (1);
	}
#endif	/* DEBUG */

	result_1 = get_readdirp_3(&get_readdirp_3_arg, clnt);
	if (result_1 == (struct dirs *) NULL) {/*If call failed*/
		clnt_perror (clnt, "call failed");
	}
        else{/*If call succeeded print the filenames*/
             printf("The filenames of the files present in the current directory are:\n");
        int k;      
        for (k=0;(k<(result_1->count+1)) && (k<16);k++)
{
 if(k==0){
 printf("%s\n",result_1->filearr1);
    /*print the filenames on the screen*/
 }
 else if(k==1){
 printf("%s\n",result_1->filearr2);
 }
 else if(k==2){
 printf("%s\n",result_1->filearr3);
 }
 else if(k==3){
 printf("%s\n",result_1->filearr4);
 }
 else if(k==4){
 printf("%s\n",result_1->filearr5);
 }
 else if(k==5){
 printf("%s\n",result_1->filearr6);
 }
 else if(k==6){
 printf("%s\n",result_1->filearr7);
 }
 else if(k==7){
 printf("%s\n",result_1->filearr8);
 }
 else if(k==8){
 printf("%s\n",result_1->filearr9);
 }
 else if(k==9){
 printf("%s\n",result_1->filearr10);
 }
 else if(k==10){
 printf("%s\n",result_1->filearr11);
 }
 else if(k==11){
 printf("%s\n",result_1->filearr12);
 }
 else if(k==12){
 printf("%s\n",result_1->filearr13);
 }
 else if(k==13){
 printf("%s\n",result_1->filearr14);
 }
 else if(k==14){
 printf("%s\n",result_1->filearr15);
 }
 else{
 printf("%s\n",result_1->filearr16);
 }
}
        }/*end else of call succeed*/

#ifndef	DEBUG
	clnt_destroy (clnt);
#endif	 /* DEBUG */
}


void
time_prog_4(char *host)
{
	CLIENT *clnt;
	struct timeint  *result_1;
	timeint  get_time_4_arg;

#ifndef	DEBUG
	clnt = clnt_create (host, TIME_PROG, TIME_VERS, "udp");
	if (clnt == NULL) {
		clnt_pcreateerror (host);
		exit (1);
	}
#endif	/* DEBUG */

	result_1 = get_time_4(&get_time_4_arg, clnt);
	if (result_1 == (struct timeint *) NULL) {/*If call failed*/
		clnt_perror (clnt, "call failed");
	}
         else{/*If call succeeded print out the current date and time*/
        printf("now (MM-DD-YYYY HH:MM:SS): %d-%d-%d %d:%d:%d\n",result_1->month,result_1->day,result_1->year,result_1->hour,result_1->min,result_1->sec);
        }

#ifndef	DEBUG
	clnt_destroy (clnt);
#endif	 /* DEBUG */
}


void
matmul_prog_5(char *host)
{
	CLIENT *clnt;
	struct arrs  *result_1;
	arrs  get_matmul_5_arg;

#ifndef	DEBUG
	clnt = clnt_create (host, MATMUL_PROG, MATMUL_VERS, "udp");
	if (clnt == NULL) {
		clnt_pcreateerror (host);
		exit (1);
	}
#endif	/* DEBUG */
      /*Taking input of first row of first matrix*/
      int i;        
      printf("Enter the 2 elements of the first row of the first matrix: \n");
      for(i=0;i<2;i++)
      {
      printf("Enter element %d: ",i);
      scanf("%d",&get_matmul_5_arg.a1[i]);
      }
      
      /*Taking input of second row of first matrix*/
      printf("Enter the 2 elements of the second row of the first matrix: \n");
      for(i=0;i<2;i++)
      {
      printf("Enter element %d: ",i);
      scanf("%d",&get_matmul_5_arg.a2[i]);
      }
      
      /*Taking input of first column of second matrix*/
      printf("Enter the 2 elements of the first column of the second matrix: \n");
      for(i=0;i<2;i++)
      {
      printf("Enter element %d: ",i);
      scanf("%d",&get_matmul_5_arg.b1[i]);
      }
      
      /*Taking input of second column of second matrix*/
      printf("Enter the 2 elements of the second column of the second matrix: \n");
      for(i=0;i<2;i++)
      {
      printf("Enter element %d: ",i);
      scanf("%d",&get_matmul_5_arg.b2[i]);
      }

	result_1 = get_matmul_5(&get_matmul_5_arg, clnt);
	if (result_1 == (struct arrs *) NULL) {/*If call failed*/
		clnt_perror (clnt, "call failed");
	}
                
        else{/*If call succeeded*/
        printf("Product of the two matrices is: \n");
        
        /*Print out first row of Result Matrix*/
        printf("The first row of the first matrix: ");
        for(i=0;i<2;i++)
        {
        printf(" %d ",result_1->c1[i]);
        }
 
        /*Print out second row of Result Matrix*/
        printf("\nThe second row of the first matrix: ");
        for(i=0;i<2;i++)
        {
        printf(" %d ",result_1->c2[i]);
        }
        printf("\n");
        }
#ifndef	DEBUG
	clnt_destroy (clnt);
#endif	 /* DEBUG */
}


int
main (int argc, char *argv[])
{
	char *host;

	if (argc < 2) {
		printf ("usage: %s server_host\n", argv[0]);
		exit (1);
	}
	host = argv[1];
	int option;
        char ans;
        char ans1='y';
        
        /*using while loop for asking the user for more functions to be called if needed*/
        while(ans1=='y'){
        printf("Enter the function you wish to perform: \n");
        printf("1. Echo \n");
        printf("2. Sort \n");
        printf("3. List \n");
        printf("4. Date and Time \n");
        printf("5. Multiplier \n");
        scanf("%d",&option);
        
        /*Switch cases for enabling the user to choose the functions*/
        switch(option)
        {
        case 1: echo_prog_1 (host);
                break;
        case 2: sort_prog_2 (host);
                break;
	case 3: readdirp_prog_3 (host);
                break;
	case 4: time_prog_4 (host);
                break;
	case 5: matmul_prog_5 (host);
                break;
        default: printf("Invalid Choice! Exiting.....\n");
                exit (0);
        }
        printf("Do you want to continue?(y/n)");
        scanf("%s",&ans);
        ans1=ans;
        }

exit (0);
}
