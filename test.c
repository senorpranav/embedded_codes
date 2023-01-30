
#if 0
#include <stdio.h>
int max_repeated(int array[],int size)
{
int count=0,i,j,maximum=0;
//size = sizeof(array) / sizeof(array[0]);
//printf("size = %d\n",size);
for(j=0;j<5;j++)
{
	for(i=j+1;i<5;i++)
	{
		if(array[i] == array[j] )
		{
		count++;
			if(count > maximum)
			{
			maximum = array[j];	
			}	
		
		}

}

	}

return maximum;

}

int **addition_matrix(int arr[][],int arr2[][], int row,int column)
{
	int arr3[row][column];
        int i,j;
        for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		{
			arr3[i][j] = arr[i][j] + arr2[i][j];
		
		}
	
	}



   return arr3;
}

int main()
{
    int i,j;
    int arr[] = {1,5,1,5,1},size;
    size = sizeof(arr) / sizeof(arr[0]);
    int max_repeat = max_repeated(arr,size);
    printf("maximum repeating element = %d size = %d\n",max_repeat,size);
   
    int output_addition[10][10];

    int input1[3][3] = {{1,1,8},{5,9,1},{4,7,9}} , input2[3][3] = {{-11,11,8},{5,9,-1},{-4,7,9}};

    
}
#endif

#if 1

/******************************************************************************

                            C Questions and Answers

*******************************************************************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>



void addition_matrix(int row, int column,int arr[][column], int arr2[][column])
{
	int arr3[row][column];
	int i,j;


	for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		{
		
			arr3[i][j]=arr[i][j]+arr2[i][j];
		
		}
	
	
	
	}


	for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		{
			printf("result_matrix[%d][%d] = %d\n",i,j,arr3[i][j]);
		
		
		}
	
	}

}


void multiplication_matrix(int row1,int column1,int row2, int column2,int arr[][column1], int arr2[][column2])
{

	//if(column1 != row2)
	//	return;
	int i,j,k;
	int arr3[row1][column2];


	/*
        for(i=0;i<row1;i++)
	{
		for(j=0;j<column1;j++)
		{
			printf("arr[%d][%d]=%d\n",i,j,arr[i][j]);
		
		}
	
	}
	for(i=0;i<row2;i++)
	{
		for(j=0;j<column2;j++)
		{
			printf("arr2[%d][%d]=%d\n",i,j,arr2[i][j]);
		
		}
	
	}
	

	for(i=0;i<row1;i++)
	{
		for(j=0;j<column2;j++)
		{
			arr3[i][j]=0;
		
		}
	
	}
	//*/

	for(i=0;i<row1;i++)
	{
		for(j=0;j<column2;j++)
		{
			arr3[i][j] = 0;

				for(k=0;k<column1;k++)
				{
					arr3[i][j] += arr[i][k] * arr2[k][j];
					//printf("mult_matrix[%d][%d]=%d\n",i,j,arr3[i][j]);
				}
				
		}
		
	}


	for(i=0;i<row1;i++)
	{
		for(j=0;j<column2;j++)
		{
		
			printf("result_multiplication_matrix[%d][%d] = %d\n",i,j,arr3[i][j]);
		
		
		}
	
	
	}

	

}



int max_repeated(int array[],int size)
{
int count=0,i,j,maximum=0,temp;

for(i=0;i<size;i++)
{
    for(j=0;j<size;j++)
    {
        
        if(array[j] > array[j+1])
        {
            temp = array[j];
            array[j] = array[j+1];
            array[j+1] = temp;
        }
    }
    
    
}

printf("array :\n");
for(i=0;i<size;i++)
printf("%d\n",array[i]);


for(j=0;j<size;j++)
{
	for(i=j+1;i<size;i++)
	{
		if(array[i] == array[j] )
		{
		count++;
		printf("count = %d\n",count);
			if(count > maximum)
			{
			maximum = array[j];	
			}	
		
		}
		else
		{
		    count = 0;
		}

}

	}
	
	printf("count = %d\n",count);

return maximum;

}


int check_prime(int n)
{
    int flag=1,i;
    
  if (n == 0 || n == 1)
    flag = 1;

  for (i = 2; i <= n / 2; i++) {

    if (n % i == 0) {
      flag = 0;
      break;
    }
  }
  
  return flag;
    
}

union test_endian
{
    int a;
    unsigned char b[4];
    
}obj;

void set_unset_17_18(int num)
{
//if(direction == 1)
printf("number  = 0x%X\n",num);
//setting the bits
num = ( num | 1 << 17 ) | (num | 1 << 18);
printf("after setting = 0x%X\n",num);
//else
//resetting the bits
num = (num & ~(1 << 17) | num & ~(1 << 18));
printf("after resetting = 0x%X\n",num);

}

void convert_little_big(int num)
{
   printf("num before conversion = 0x%X\n",num);	

   //return (((num>>24)&0x000000FF) | ((num<<8)&0x00FF0000) | ((num>>8)&0x0000FF00) | ((num<<24)&0xFF000000));
   printf("num after conversion = 0x%X\n",(((num>>24)&0x000000FF) | ((num<<8)&0x00FF0000) | ((num>>8)&0x0000FF00) | ((num<<24)&0xFF000000)));	

}

void check_endianness()
{
    unsigned int num = 0x11223344;
    
    char *ptr = &num;
    
    if(*ptr == 0x44)
    printf("machine is little\n");
    else
    printf("machine is big\n");

}

void parity_corrected_byte(int num)
{
	printf("without parity = 0x%X\n",num);	
	int count_zero=0,count_one=0,num2=num;
	while(num2 > 0)
	{
		if(num2 & 0x1 == 0x1)
		count_one++;
		
		num2 = num2 >> 1;

	}

	printf("number of ones = %d\n",count_one);

	if(count_one % 2 == 0)
	num = (num << 1) | 0x0;
	else
	num = (num << 1) | 0x1;
	 

	printf("parity corrected = 0x%X\n",num);
}

void reverse_bits(int num)
{
	int i,temp,output;
        for (i = 0; i < 32; i++) 
	{
        temp = (num & (1 << i));
        if (temp)
            output |= (1 << (31 - i));
        }
	
	printf("reversed number = 0x%X\n",output);
  
}

void swap_7_8(int num)
{
   printf("number before swap = 0x%X\n",num);
   num = num ^ (1 << 7) ;
   num = num ^ (1 << 8) ;
   printf("number after swap = 0x%X\n",num);
   

}

int string_to_int(char *str)
{
int i=0,j=0;
 while(str[i]!='\0')
 {	 
 j = j*10 + str[i] - '0';
 i++;
 printf("str = %s j=%d i = %d\n",str,j,i);
 }
 printf("number = %d\n",j);
return j;

}

int validate_IP_Address(char *str)
{
 
  int i,j=0,count=0,k,index=0;
char token[4][4]={0};
 printf("str = %s\n",str);
/* 
	for(i=0;str[i] != '\0';i++)
	{
		if(str[i] == '.')
		count++;
		

//	  printf("Inside for loop = %d\n",count);
        }
	i=0;
	while(str[i] != '.')
	{
	//strcpy(token[j],str);
        i++;
	}
	strncpy(token[j],str,i);
	j++;
	//}
	//
	//
	//*/
	for(k=0;/*str[k]!= '\0'*/;k++)
	{
	if(str[k] == '.')
	{
	count++;	
	strncpy(token[j],str+index,k-index);
	j++;
	index = k+1;
	printf("index = %d k = %d j = %d\n",index,k,j);
	}
         if(str[k] == '\0')
	 {
	 strncpy(token[j],str+index,k-index);
	 break;
	 }	 
	
	}
	printf("token = %s token2 %s tiken3 %s tiken4 %s\ncount = %d\n",token[0],token[1],token[2],token[3],count);

	for(i=0;i<j;i++)
	{
	index = string_to_int(token[i]);
	printf("\nnumber = %d\n",index);
	if(index > 255 || count < 3)
	{
		return 0;
	}
	}	
	//else
		return 1;
	//}

}

void copy_strings(char *source,char *destination,int start_index, int end_index)
{
	int i,j=0;

	printf("source = %s length = %d destination = %s length = %d\n",source,strlen(source),destination,strlen(destination));

	if(strlen(destination) < strlen(source))
	{
		//return;
	}

	for(i=start_index;i<=end_index;i++)
	{
		destination[j] = source[i];
		j++;
	}

	printf("\ndestination = %s source = %s\n",destination,source);


}


void count_0_1(int num)
{
	int count_zero=0,count_one=0,num2=num,count_zero2=0,count_one2=0;
 	while(num > 0)
	{
		if(num & 0x1 == 0x1)
		count_one++;
		else
		count_zero++;		
		
		num = num >> 1;

	}

	for(;num2>0;)
	{

		if(num2 & 0x1 == 0x1)
		count_one2++;
		else
		count_zero2++;		
		
		num2 = num2 >> 1;
	   
	}

}



void toggle_bits(int num, int left, int right)
{
	int i,temp=0;
        printf("number = 0x%X\n",num);
	for(i=left-1;i<right;i++)
	//temp |= (num ^ (1<<i)) ;
	temp|=(1<<i);
	num ^= temp;
        printf("number after toggling = 0x%X 0x%X\n",num);
	//00110010
	//00101100
}

int factorial(int num)
{

   if(num == 1)
	   return 1;
   else if(num < 1)
	   return;
   else
	   return (num * factorial(num -1));

}

void fixed_memory_location(int num)
{
	int *ptr = (int *)malloc(sizeof(int));
	*ptr = (int *)0xABCD;
	printf("data at fixed memory location [%d]  = 0x%X\n",num,*ptr);


}

void detect_stack_corruption(char *source)
{
    char *str=(char *)malloc(sizeof(char) * 5);
    char arr[5]={0};
    strcpy(arr,source);
    printf("str = %s\n",arr);
}

void shift_data(int source_start,int source_end,int dest_start,int dest_end)
{
  int j=0,i;	 
  //for(i = dest_start+(dest);i < (dest_start+dest_end)/2 ; i++)
  //memcpy(i,(source_start+source_end)/2 + j++,(dest_start+dest_end)/2);
  for(i = 0;i<500;i++)
  {
  	memcpy(i+2500,i+2000,1);
  
  }
  for(i=0;i<500;i++)
  {
  	memcpy(i+2000,i+1500,i);
  
  }
  //for(i=0;i<3000;i++)
  //printf("data = 0x%x\n",);

}

void reverse_string(char *str)
{
	int length = strlen(str),i;
	char *temp = (char *)malloc(sizeof(char) * length);
	for(i=0;i<length;i++)
	{
		temp[i]=str[length-i-1];
	
	}
      strcpy(str,temp);
      printf("reversed string = %s\n",str);
}

int check_palindrome(char *data)
{       char *str=(char *)malloc(sizeof(char)*strlen(data));
	strcpy(str,data);
        reverse_string(data);	
	if(strcmp(data,str) == 0)
	{
	printf("it is palindrome\n");
	}
	else
	{
	printf("Its not palindrome\n");
	}

}

void dangling_pointer()
{

	int *num=(int *)malloc(sizeof(int));
	*num = 4;
	free(num);
	printf("num = %d\n",num);



}

void string_functions(char *str)
{
   char *new_str=(char *)malloc(sizeof(char)*50);
   strcat(new_str,str);
   strcpy(new_str,str);
   int length =strlen(str);
   int comp = strcmp(new_str,str);
   printf("new_str = %s str = %s comp = %d\n",new_str,str,comp);

}

typedef struct
{

int a;
float b;

}test;


void check_structure_size()
{

   typedef struct
   {int j;}test;

   test *obj = NULL;
   obj++;
   printf("size of structure = %d\n",obj);

}

void check_power_of_2(int num)
{
   if( (num & (num -1)) == 0)
   {
   	printf("its power of 2\n");
   
   
   }
   else
   {
   
   	printf("Its not a powrr of two\n");
   
   }


}


void convert_endianness(int num)
{
	typedef union
	{
	int i ;
	char b[4];
	
	}test;
  
    test obj;

    obj.i = num;

    char temp;
 
    printf("before converting endianness byte[0] = 0x%X byte[1] = 0x%X byte[2] = 0x%X byte[3] = 0x%X\n",obj.b[0],obj.b[1],obj.b[2],obj.b[3]);


    temp = obj.b[0];
    obj.b[0] = obj.b[3];
    obj.b[3] = temp;


    temp = obj.b[1];
    obj.b[1] = obj.b[2];
    obj.b[2] = temp;

    printf("after converting endianness byte[0] = 0x%X byte[1] = 0x%X byte[2] = 0x%X byte[3] = 0x%X\n",obj.b[0],obj.b[1],obj.b[2],obj.b[3]);


}


int count_set_bits(int num)
{

     int count = 0;

     printf("count set bits = %d\n",count);
     if(num == 0)
	     return 0;
     else if(num & 0x1 == 1)
	     return (1 + count_set_bits(num/2));
     else
	     return (count_set_bits(num/2));

     //printf("count set bits = %d\n",count);

}

int power(int num, int exponent)
{
	if(exponent == 0)
		return 1;
	else
		return (num * power(num,exponent - 1));


}

int *decimal_to_binary(int num)
{
	int arr[32]={0},i=0;
	while(num > 0)
	{
	
	arr[i++] = (num ) & 0x1;
	num /= 2;
	
	}
	printf("arr = \n");
	for(i=0;i<32;i++)
   	printf("%d\n",arr[i]);

	return arr;

}



int binary_to_decimal(int arr[])
{

	//int size = sizeof(arr) / sizeof(arr[0]);
	printf("power = %d\n",power(2,10));
	int i,num=0;

	for(i=0;i<32;i++)
	{
	
	num += arr[i] * power(2,i);
	
	}
	printf("number = %d\n",num);
	return num;


}

void arrange_string_descending(char *str)
{
	int i,j,n=strlen(str);
	char temp;
        //char str_new[20];
	//strcpy(str_new,str);

	//strcpy();

	printf("string before descending = %s length = %d\n",str,n);

	//str[0] = str[1];
	///*
	for(i=0;i<n-1;i++)
	{
	
		for(j=0;j<n-1-i;j++)
		{
			if(str[j] < str[j+1])
			{
				temp = str[j];
				str[j] = str[j+1];
				str[j+1] = temp;
			
			
			}
		
		
		}
	
	
	}
	//*/

	printf("string after descending = %s\n",str);

}


void remove_vowel(char *str)
{
	int i;
	for(i=0;str[i] != '\0';i++)
	{
		if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
		{
		str[i]=str[i+1];
		
		}
	
	
	}
	printf("after removing vowels = %s\n",str);


}


void check_armstrong(int num)
{
	int i=0,temp=num,j;
        int arr[10]={0};
	//for(i=0;i<10;i++)
	while(temp > 0)
	{
		arr[i++]=temp % 10 ;
		temp /= 10;	
	
	}

	for(j=0;j<i;j++)
	{
		temp += power(arr[j],3);
	
	
		printf("arr[%d] = %d\n",j,arr[j]);
	}
	if(temp == num)
		printf("its armstrong number\n");
	else
		printf("its not armstrong number\n");


}

int linear_search(int arr[],int search,int total)
{
	int i;
	for(i=0;i<total;i++)
	if(arr[i] == search)
		return i+1;



}

int binary_search(int arr[],int start, int end, int value)
{
	int mid;
	while(start <= end)
	{
	mid = start + (end - start) / 2;

	if(arr[mid] == value)
		return mid;

	if(arr[mid] < value)
	{
		start = mid + 1;
	}
	else
		end = mid - 1;
	
	}

	return -1;

}


void bubble_sort(int arr[],int size)
{
	
	int i,j,temp;
	
	for(i=0;i<size-1;i++)
	{
		for(j=0;j<size-1-i;j++)
		{
		
			if(arr[j] > arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = arr[j];	
			
			}
		
		}
	
	}

}


void selection_sort(int arr[],int num)
{
	int i,j,temp,current;
	

	for(i=0;i<num-1;i++)
	{
	
		current = i;
			for(j=i+1;j<num;j++)
			{
			
				if(arr[current] > arr[j])
				{
					current = j;				
				
				}
			
			
			}

			if(current != i)
			{
			
				temp = arr[i];
				arr[i] = arr[current];
				arr[current] = temp;
			
			
			}
	
	
	
	
	
	}



}



void insertion_sort(int arr[],int num)
{
	int i,j,temp;


	for(i=1;i<num;i++)
	{
		temp = arr[i];
		j=i-1;
	
	
	

	while(j>=0 && temp < arr[j])
	{
	
		arr[j+1] = arr[j];
		j=j-1;
	
	
	}

	arr[j+1] = temp;

	}


	for(i=0;i<num;i++)
	{
	printf("arr = %d\n",arr[i]);
	
	}


}

struct node
{
	int data;
	struct node *prev;
	struct node *next;

};



void reverse_doubly_linked_list()
{

	struct node *head=NULL, *last = NULL;
	struct node *temp=NULL;

	struct node *current = NULL;

	while(current != NULL)
	{
		temp = current->next;
		current->next = current->prev;
		current->prev = temp;
		current = current->prev;
	
	
	}

	temp = head;
        head = last;
	last = temp;

}

int middle_element(struct node *head)
{

		int count=0,i,middle;
		struct node *current = head;
		while(current!= NULL)
		{
			count++;
			current = current->next;
		
		}

		if(count % 2 == 0)
		{
		middle = count / 2;
		}
		else
		middle = count / 2 + 1;	

	for(i=1;i<middle;i++)
	{
	
		current = current->next;
	}

	return current->data;


}


void file_data_encryption()
{
	//int i,j;
	char data,data_arr[1000];
	int i=0,j;

	FILE *fp ;

	fp = fopen("data_encryption1.txt","r");

	if(fp == NULL)
	{
		return;
	}


		/*
		data = fgetc(fp);
		while(data != EOF)
		{	
		data = fgetc(fp);
		printf("before encryption = %c\n",data);
		//data += 127;
		//printf("after encryption = %c\n",data);
		}
		//*/

		while((data = fgetc(fp)) != EOF)
		{
			printf("before encryption = %c\n",data);
			data_arr[i] = data + 127;
			i++;
			//fputc(data,fp);
		
		}
	
	//char data_arr[1000];

	fclose(fp);
	fp = fopen("data_encryption1.txt","w+");

	for(j=0;j<i;j++)
	{
		fputc(data_arr[j],fp);
	
	
	}
	fclose(fp);



}


/*	Startup code in MCU is related to initialization of embedded peripherals like CLock frequency, GPIO,SPI,I2C initialization. assigning memory to ROM,EEPROM devices, registering slave devices with their ID
 *
 *
 *
 *
 */



/*	It is not safe to call printf inside ISR routine, becuase we want faster execution of ISR without latency
 *	printf is huge library and requires lot of time to execute
 *	It can also impact normal operation of embedded systems working
 *
 *
 *
 *
 *
 */



int main()
{
    int array[10] = {4,4,5,1,1,2,9,7,8},max,fact,i;
    char *source=(char *)malloc(sizeof(char) * 10);
    char *dest=(char *) malloc(sizeof(char)* 15);
    char string[20]="abcdefgh";
    
    int test_array[][10][20]={9,5,3,6,7} , *arr = (int *)malloc(sizeof(int) * 32), arr_conv[32] = {1,1,0,0,1,0,0,0};
    printf("test = %d\n",test_array[0][0][5]);
    max = max_repeated(array,5);
    printf("max = %d\n",max);
    printf("flag = %d\n",check_prime(60));


    set_unset_17_18(0x11698746);
    check_endianness();
    convert_little_big(0x11223344);
    parity_corrected_byte(0xB5);
    reverse_bits(0x11);
    swap_7_8(0x72);
    toggle_bits(50,2,5);
    validate_IP_Address("192.168.4.10");
    strcpy(source,"ABCDEDCBA");
    copy_strings(source,dest,2,6);
    fact = factorial(6);
    printf("fact = %d\n",fact);
    fixed_memory_location(0xA5C9);
    check_palindrome(source);
    //detect_stack_corruption(source);
    check_structure_size();
    string_functions(source);
    dangling_pointer();
    check_power_of_2(16);
    convert_endianness(0x11223344);
    count_set_bits(0x47);
    printf("count = %d\n",count_set_bits(0x47));
    arr = decimal_to_binary(0x4);
    binary_to_decimal(arr_conv);
    arrange_string_descending(string);
    remove_vowel(string);
    check_armstrong(53);
    int search = binary_search(array,0,9,7);

    if(search == -1)
	    printf("Element not found\n");
    else
	    printf("Element found\n");

    insertion_sort(array,10);
    file_data_encryption();


    int arr_num[2][3]={{1,2,3},{4,5,6}}, arr_num2[2][3]={{3,2,1},{6,5,4}},arr_num3[3][2]={{1,2},{3,4},{5,6}};
    addition_matrix(2,3,arr_num,arr_num2);
    multiplication_matrix(2,3,3,2,arr_num,arr_num3);


    //num = ( num  & 0xFF000000 ) >> 24 | (num & 0x)
    /*
    int subjects,i;
    scanf("%d",&subjects);
    int *subject_array = (int *)malloc(sizeof(int) * subjects);
    
    
    char **subject_string=(char **)malloc(sizeof(char *)*subjects);
    for(i=0;i<subjects;i++)
    {
    scanf("%s %d",&subject_string[i],&subject_array[i]);
    }
    
    printf("subjects = %d %c\n",subjects);
    printf("string = %s\n",(subject_string+0));
    printf("flag = %d\n",check_prime(61));
    for(i=0;i<subjects;i++)
    {

    if(check_prime(subject_array[i]))
    printf("subject name  = %s \nmarks = %d(prime)\n",(subject_string + i),subject_array[i]);
    else
    printf("subject name  = %s \nmarks = %d(not prime)\n",(subject_string + i),subject_array[i]);
    }
    //*/
    return 0;
}



 
#endif

