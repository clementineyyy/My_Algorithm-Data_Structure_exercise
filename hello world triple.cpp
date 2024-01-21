/*#include <stdio.h>
#include <string.h>
#include <math.h>

int ten(char str[10])
{
	int i, sum = 0, j = strlen(str);
	for (i = 0; str[i] != '\0'; i++)
	{
		if ('0' <= str[i] && str[i] <= '9')
			sum += (str[i] - 48) * pow(16, j - i - 1);          //字符数组中的“字符数字”也要进行ASCII码值转换
		else if ('a' <= str[i] && str[i] <= 'f')
			sum += (str[i] - 87) * pow(16, j - i - 1);
		else if ('A' <= str[i] && str[i] <= 'F')
			sum += (str[i] - 55) * pow(16, j - i - 1);
	}

	return sum;
}

int main()
{
	char str[10];            //使用字符数组容纳十六进制位数，因为十六进制含有字母，字符数组既可以表示数字也可以存放字符，只是要进行ASCII码值转换
	gets_s(str);
	printf("%d", ten(str));

	return 0;
}*/




/*#include <stdio.h>
int i;

void string(int n)
{
	if (n / 10 != 0)
		string(n / 10);                               //递归
	putchar(n % 10 + 48);                             //求余数（每一个函数n中的那个个位数）
	putchar(32);                                      //不要用数组把每一个数字字符都存放起来，而是直接用字符输出函数把数字字符输出来
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	string(n);

	return 0;
}*/



/*#include <stdio.h>

int sum(int month, int day)
{
	int day_table[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 }, i;
	for (i = 0; i<month-1; i++)
		day += day_table[i];

	return (day);
}

int leap(int year)
{
	if (year % 4 == 0 && year % 100 != 0 || year % 400 != 0)                      //判断是否为闰年的算法，闰年要多一天
		return 1;
	else return 0;
}

int main()
{
	int year = 0, month = 0, day = 0;
	scanf("%d,%d,%d", &year, &month, &day);
	day = sum(month, day);
	if (leap(year) && month >= 3)
		day++;
	printf("%d", day);

	return 0;
}*/


//利用结构体实现：输入n个学生的信息(包括学号、姓名、成绩)后，再按照成绩降序输出各学生的信息。
/*#include <stdio.h>

int main()
{
	struct student
	{
		int num = 0;
		char name[10] = { 0 };
		float score = 0;
	};
	struct student stu[5] = { {10101,"Zhang",78},{10103,"Wang",98.5},{10106,"Li",86},{10108,"Ling",73.5},{10110,"Sun",100} }, * p[5], * t;     //定义了一个指针数组
	int i, j;
	for (i = 0; i < 5; i++)
		p[i] = &stu[i];
	for (i = 0; i < 4; i++)
		for (j = 0; j <4 - i; j++)
			if (p[j]->score < p[j+1]->score)
			{
				t = *(p + j);           //注意这里是怎么换的，指针存放的是结构体数组中一个元素的地址，取内容后交换的是数组的元素，因为是结构体，所以一整个就是它的地址，所以一个元素位置变了，其中的成员也跟着一起变，不是数组元素位置变了，还是从0到4，是里面的内容（一整个结构体）变了
				*(p + j) = *(p + j + 1);
				*(p + j + 1) = t;
			}
	for (i = 0; i < 5; i++)
		printf("%d,%s,%f\n", p[i]->num, p[i]->name, p[i]->score);

	return 0;
}*/



//利用结构体实现，从键盘输入10本书的名称和定价并存入结构数组中，从中查找定价最高和最低的书名和定价，并输出。

/*#include <stdio.h>

int main()
{
	struct book
	{
		char name[10] = { 0 };
		int price = 0;
	};
	struct book b[20], * p = &b[0], * q = &b[0];                      //注意指针定义的是结构体类型的，而不是定义为所指向的内部成员/元素的类型，而且指针需要一个具体的定义
	int i, max = 0, min = 0;
	for (i = 0; i < 10; i++)
	{
		gets_s(b[i].name);
		scanf_s("%d", &b[i].price);
		getchar();                                                    //这里也要加上getchar接收输入整型数据后的回车防止收入下一个字符串数组！！
	}
	max = b[0].price;
	min = b[0].price;
	for (i = 0; i < 10; i++)
		if (b[i].price > max)
		{
			p = &b[i];
			max = b[i].price;
		}
		else if (b[i].price < min)
		{
			q = &b[i];
			min = b[i].price;
		}

	printf("%s,%d\n", (*p).name, (*p).price);
	printf("%s,%d", (*q).name, (*q).price);

	return 0;
}*/



/*#include <stdio.h>

int main()
{
	struct Studnet
	{
		int num;
		char name[20];
		float score;
	}student1, student2;
	scanf("%d %s %f", &student1.num, student1.name, &student1.score);            //用这样的格式要求输入是可以成功的，以空格隔开每一个数据
	scanf("%d %s %f", &student2.num, student2.name, &student2.score);
	if (student1.score > student2.score)
		printf("%d %s %6.2f\n", student1.num, student1.name, student1.score);
	else printf("%d %s %6.2f\n", student2.num, student2.name, student2.score);

	return 0;
}*/




/*#include <stdio.h>

int main()
{
	struct Studnet
	{
		int num;
		char name[20];
		float score;
	}student1 = { 0 }, student2 = { 0 };
	scanf("%d,%s,%f", &student1.num, student1.name, &student1.score);               //用逗号分隔就不行，可能是溢出，不是初始化的问题
	scanf("%d,%s,%f", &student2.num, student2.name, &student2.score);
	if (student1.score > student2.score)
		printf("%d %s %6.2f\n", student1.num, student1.name, student1.score);
	else printf("%d %s %6.2f\n", student2.num, student2.name, student2.score);

	return 0;
}*/



/*#include <stdio.h>
#include <string.h>

int main()
{
	struct Person
	{
		char name[20];
		int count;
	};
	struct Person leader[3] = { {"Li",0},{"Zhang",0},{"Sun",0} };              //这样初始化
	int i, j;
	char leader_name[20];
	for (i = 0; i < 10; i++)
	{
		gets_s(leader_name);                                                   //字符串输入函数用gets!!!!!
		for (j = 0; j < 3; j++)
			if (strcmp(leader_name, leader[j].name) == 0)
				leader[j].count++;
	}
	for (j = 0; j < 3; j++)
		printf("%s,%d\n", leader[j].name, leader[j].count);

	return 0;
}*/



/*#include <stdio.h>

int main()
{
	struct Student
	{
		int num;
		float score;
		struct Student* next;
	};
	struct Student a, b, c, * head, * p;
	a.num = 10101;
	a.score = 89.5;
	b.num = 10103;
	b.score = 90;
	c.num = 10107;
	c.score = 85;
	head = &a;                                             //头指针赋上第一个节点的地址
	a.next = &b;
	b.next = &c;
	c.next = NULL;
	p = head;                                              //活动的指针从链表的开头开始
	while (p != NULL)                                      //循环控制条件和次数
	{
		printf("%d,%5.1f\n", p->num, p->score);
		p = p->next;                                       //活动指针获得所指结点指向的下一个地址，结构体指针，指向一个成员，这个成员存放的是地址
	}

	return 0;
}*/



/*#include <stdio.h>
#include <stdlib.h>

struct Student
{
	long num;
	float score;
	struct Student* next;
};

struct Student* creat(void)                                                          //定义了一个结构体类型的返回指针值的函数，形参为空
{
	struct Student* head, * p1, * p2;
	int n = 0;
	p1 = p2 = (struct Student*)malloc(sizeof(struct Student));                       //括号内填的是占多少字节，用sizeof函数计算，并且强制类型转换，统一地址的类型
	scanf("%d %f", &p1->num, &p1->score);
	head = NULL;
	while (p1->num != 0)
	{
		n = n + 1;
		if (n == 1)
			head = p1;
		else p2->next = p1;                                                          //把新开辟的结点和前一个结点连接上
		p2 = p1;                                                                     //p2跟随在p1后面记录下当前结点的位置
		p1 = (struct Student*)malloc(sizeof(struct Student));
		scanf("%d %f", &p1->num, &p1->score);
	}
	p2->next = NULL;
	free(p1);                                                                        //最后一定记得释放空结点p1
	return (head);                                                                   //返回的是头指针的值，把一整个链表的地址交给
}

void print(struct Student* head)
{
	struct Student* p;
	p = head;
	if (head != NULL)                                                               //确保不是非空链表
		while (p != NULL)
		{
			printf("%d,%f\n", p->num, p->score);
			p = p->next;                                                            //这样赋上下一个结点的地址
		}
}

int main()
{
	struct Student* pt;
	pt = creat();
	print(pt);

	return 0;
}*/



/*#include <stdio.h>

int main()
{
	FILE* fp;                                                            //必须定义文件指针fp
	char ch, filename[10];
	scanf("%s", filename);
	getchar();                                                           //用来接受回车符
	if ((fp = fopen(filename, "w")) != NULL)                             //如果文件正常打开，不为空，并且打开文件，什么文件，什么方式，指针在哪
		ch = getchar();
	while (ch != '#')
	{
		fputc(ch,fp);                                                    //向文件输入一个字符，什么字符，什么文件，注意顺序
		putchar(ch);
		ch = getchar();
	}
	fclose(fp);                                                          //最后一定要把文件关闭
	putchar(10);

	return 0;
}*/




/*#include <stdio.h>

int main()
{
	FILE* fp;                                                            //必须定义文件指针fp
	char ch, filename[10];
	gets_s(filename);                                                    //用gets_s函数来接受文件名也可以
	if ((fp = fopen(filename, "w")) != NULL)                             //如果文件正常打开，不为空，并且打开文件，什么文件，什么方式，指针在哪
		ch = getchar();
	while (ch != '#')
	{
		fputc(ch, fp);                                                    //向文件输入一个字符，什么字符，什么文件，注意顺序
		putchar(ch);
		ch = getchar();
	}
	fclose(fp);                                                          //最后一定要把文件关闭
	putchar(10);

	return 0;
}*/




//从键盘读入若干个字符串，对他们按字母大小的顺序排序，然后把排好序的字符串送到磁盘文件中保存。

/*#include <stdio.h>
#include <string.h>

void sort(char* str[5], char** p)
{
	int i, j;
	char* t = str[0];
	for(i=0;i<2;i++)
		for(j=0;j<2-i;j++)
			if (strcmp(*(p + j), *(p + j + 1)) > 0)            //指针数组取一次内容即为字符串数组的数组名/首地址
			{
				t = *(p + j);                                  //把每一个指针数组的元素中存放的字符串数组的地址调换位置
				*(p + j) = *(p + j + 1);
				*(p + j + 1) = t;
			}
	FILE* fp;                                                  //文件指针要加上指针的小※号
	fp = fopen("f1.dat", "w");;
	for (i = 0; i < 3; i++)
	{
		fputs(str[i], fp);
		fputc('\n', fp);                                       //fputs函数不自带换行
	}
	fclose(fp);
}

int main()
{
	char* str[3], ** p = str, array[3][8];                    //定义一个一维指针数组，用来存放每个字符串的首地址，定义一个指向指针的指针，用来移动在指针数组中的位置
	int i = 0;
	FILE* fp;
	char str1[3][10];
	for (i = 0; i < 3; i++)
	{
		gets_s(array[i]);
		str[i] = &array[i][0];                                //指针数组一个一个初始化
	}
	sort(str, p);
	fp = fopen("f1.dat", "r");
	while(fgets(str1[i],10,fp)!=NULL)
	{
		printf("%s", str1[i]);
		i++;
	}
	fclose(fp);

	return 0;
}*/



//有两个磁盘文件A.txt和B.txt, 各存放一行字母，要求把这两个文件中的信息合并（按字母顺序排列），输出到一个新文件C.txt中

/*#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	FILE* fp1, * fp2, * fp3;
	char str1[30], str2[6], ch;
	int i, j;
	fp1 = fopen("A.txt", "r");                                        //文件扩展名的问题
	fgets(str1, 6, fp1);
	fclose(fp1);
	fp2 = fopen("B.txt", "r");
	fgets(str2, 6, fp2);
	fclose(fp2);
	strcat(str1, str2);
	printf("%s", str1);
	for (i = 0; i < strlen(str1) - 1; i++)
		for (j = 0; j < strlen(str1) -1-i; j++)
			if (str1[j] > str1[j + 1])
			{
				ch = str1[j];
				str1[j] = str1[j + 1];
				str1[j + 1] = ch;
			}
	fp3 = fopen("C.txt", "w");
	fputs(str1, fp3);
	fclose(fp3);

	return 0;
}*/




//定义一个二维数组来读取文本文件中的数据，将结果以矩阵的形式输出。txt文件存放在项目目录下

/*#include <stdio.h>

int main()
{
	char a[3][3], i, j;
	FILE* fp;
	fp = fopen("file.txt", "r");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
			if (!feof(fp))                                //若文件结束，返回值为1，所以未结束就是0，非零就执行
			{
				a[i][j] = fgetc(fp);
				printf("%c ", a[i][j]);
			}
		printf("\n");
	}

	return 0;
}*/



/*#include <stdio.h>

int main()
{
	FILE* in, * out;
	char str[20];
	int i;
	in = fopen("file1.dat", "r");
	for (i = 0; !feof(in); i++)
		str[i] = fgetc(in);
	str[i] = '\0';
	fclose(in);
	out = fopen("file2.dat", "w");
	fputs(str, out);                                  //这样会把字符串的结束标记也进文件2里面，除非用getc函数一个一个输字符，用feof来控制结束
	fclose(out);

	return 0;
}*/



/*#include <stdio.h>

struct Student
{
	char name[10];
	int num;
	int age;
	char addr[15];
};

void save(struct Student stu[10])
{
	FILE* fp;
	int i;
	fp = fopen("stu.dat", "wb");
	for (i = 0; i < 10; i++)
		fwrite(&stu[i], sizeof(struct Student), 1, fp);
	fclose(fp);
}

int main()
{
	struct Student stu[10], stud[10];
	int i;
	FILE* fp;
	for (i = 0; i < 10; i++)
		scanf("%s %d %d %s", stu[i].name, &stu[i].num, &stu[i].age, stu[i].addr);
	save(stu);
	fp = fopen("stu.dat", "rb");
	for (i = 0; i < 10; i++)
	{
		fread(&stud[i], sizeof(struct Student), 1, fp);
		printf("%s %d %d %s\n", stud[i].name, stud[i].num, stud[i].age, stud[i].addr);
	}
	fclose(fp);

	return 0;
}*/



/*#include <stdio.h>
#define SIZE 10

struct Student
{
	char name[10];
	int num;
	int age;
	char addr[15];
}stud[SIZE];

void save()
{
	FILE* fp;
	int i;
	if ((fp = fopen("stu.dat", "wb")) == NULL)
	{
		printf("cannot open file\n");
		return;
	}
	for (i = 0; i < SIZE; i++)
		if (fwrite(&stud[i], sizeof(struct Student), 1, fp) != 1)
			printf("file write error\n");
	fclose(fp);
}

int main()
{
	int i;
	for (i = 0; i < SIZE; i++)
		scanf("%s %d %d %s", stud[i].name, &stud[i].num, &stud[i].age, stud[i].addr);
	save();

	return 0;
}*/


/*#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

struct Student
{
	char name[10];
	int num;
	int age;
	char addr[15];
}stud[SIZE];

int main()
{
	int i;
	FILE* fp;
	if ((fp = fopen("stu.dat", "rb")) == NULL)
	{
		printf("cannot open file\n");
		exit(0);
	}
	for (i = 0; i < SIZE; i++)
	{
		fread(&stud[i], sizeof(struct Student), 1, fp);
		printf("%s %d %d %s\n", stud[i].name, stud[i].num, stud[i].age, stud[i].addr);
	}
	fclose(fp);

	return 0;
}*/



/*#include <stdio.h>

int main()
{
	FILE* fp1, * fp2;
	char ch;
	fp1 = fopen("file1.dat", "r");
	fp2 = fopen("file2.dat", "w");
	ch = getc(fp1);                       //在开始循环之前先做一次得到字符就不会出现输出结果最后带有一个奇怪的符号，即读完最后一个字符之后再读了文件尾标志，这之后再判断是不是到文件末尾才是到了文件末尾
	while (!feof(fp1))
	{
		printf("%c", ch);
		ch = getc(fp1);
	}
	printf("\n");
	rewind(fp1);
	ch = getc(fp1);
	while (!feof(fp1))
	{
		fputc(ch, fp2);
		ch = getc(fp1);
	}
	fclose(fp1);
	fclose(fp2);

	return 0;
}*/



/*#include <stdio.h>

struct Student
{
	char name[10];
	int num;
	int age;
	char addr[10];
};

int main()
{
	FILE* fp;
	int i;
	struct Student stu[10];
	fp = fopen("stu.dat", "rb");
	for (i = 0; i < 10; i += 2)
	{
		fseek(fp, i * sizeof(struct Student), 0);
		fread(&stu[i], sizeof(struct Student), 1, fp);
		printf("%s %d %d %s\n", stu[i].name, stu[i].num, stu[i].age, stu[i].addr);
	}
	fclose(fp);

	return 0;
}*/




//有五个学生，每个学生有 3 门课的成绩，从键盘输入以上数据（包括学生 号，姓名，三门课成绩），
// 计算出平均成绩，将原有的数据和计算出的平均分数 存放在磁盘文件"stud"中。
//（注：请将代码复制粘贴答案中，并附上运行结果截图）

/*#include <stdio.h>

struct Student
{
	char num[10];
	char name[8];
	int score[3];
	float ave;
}stu[5];

int main()
{
	int i, j, sum=0;
	FILE* fp;
	for (i = 0; i < 5; i++)
		scanf("%s %s %d %d %d", stu[i].num, stu[i].name, &stu[i].score[0], &stu[i].score[1], &stu[i].score[2]);
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 3; j++)
			sum += stu[i].score[j];
		stu[i].ave = sum / 3.0;
		sum = 0;
	}
	fp = fopen("stud", "w");                            //把数据原封不动的放入文件里，不要用二进制格式了，还是用文件形式，格式化的方式存放
	for (i = 0; i < 5; i++)
		fprintf(fp, "%s %s %d %d %d %f\n", stu[i].num, stu[i].name, stu[i].score[0], stu[i].score[1], stu[i].score[2], stu[i].ave);

	return 0;
}*/



/*#include <stdio.h>

struct day
{
	int year;
	int month;
	int date;
};

int main()
{
	struct day dae;
	int mon[13] = { 0.31,28,31,30,31,30,31,31,30,31,30,31 }, i, days = 0;
	scanf("%d %d %d", &dae.year, &dae.month, &dae.date);
	for (i = 1; i < dae.month; i++)
		days += mon[i];
	days += dae.date;
	if (dae.year % 4 == 0 && dae.year % 100 != 0 || dae.year % 400 == 0 && dae.month >= 3)         //闰年的判别方法：整除4且不整除100或整除400，注意月份首先一定要超过2个月
		days++;
	printf("%d", days);

	return 0;
}*/



/*#include <stdio.h>

struct day
{
	int year;
	int month;
	int date;
};

int days(struct day dae)
{
	int mon[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 }, i, dai = 0;
	for (i = 1; i < dae.month; i++)
		dai += mon[i];
	dai += dae.date;
	if (dae.year % 4 == 0 && dae.year % 100 != 0 || dae.year % 400 == 0 && dae.month >= 3)
		dai++;

	return dai;
}

int main()
{
	struct day dae;
	scanf("%d %d %d", &dae.year, &dae.month, &dae.date);
	printf("%d", days(dae));

	return 0;
}*/



/*#include <stdio.h>

struct student
{
	char num[6];
	char name[8];
	float score[3];
	float ave;
};

void input(struct student stu[5])
{
	int i;
	for (i = 0; i < 5; i++)
		scanf("%s %s %f %f %f", stu[i].num, stu[i].name, &stu[i].score[0], &stu[i].score[1], &stu[i].score[2]);
}

void average(struct student stu[5])
{
	int i, j;
	float sum = 0;
	for (i = 0; i < 5; i++)
	{
		sum = 0;
		for (j = 0; j < 3; j++)
			sum += stu[i].score[j];
		stu[i].ave = sum / 3;
	}
}

int max(struct student stu[5],int stud)
{
	int i, j;
	float max = 0;
	for(i=0;i<5;i++)
		for (j = 0; j < 3; j++)
			if (stu[i].score[j] > max)
			{
				max = stu[i].score[j];
				stud = i;
			}

	return stud;
}

int main()
{
	struct student stu[5];
	int i, stud = 0;
	input(stu);
	average(stu);
	for (i = 0; i < 5; i++)
		printf("%f\n", stu[i].ave);
	stud = max(stu, stud);
	printf("%s %s %f %f %f %f", stu[stud].num, stu[stud].name, stu[stud].score[0], stu[stud].score[1], stu[stud].score[2], stu[stud].ave);

	return 0;
}*/



/*#include <stdio.h>

int main()
{
	struct person
	{
		int number;
		int nexp;                                                //不想用指针就可以用普通的整型变量，存放的是后一个人的编号，这是静态链表，链表包括静态链表和动态链表
	};
	struct person link[14];
	int i, count = 0, h = 13;
	for (i = 1; i <= 13; i++)
	{
		if (i == 13)
			link[i].nexp = 1;                                    //形成圈圈，最后一个人记下第一个人的编号
		else link[i].nexp = i + 1;                               //初始化，前一个人记下后一个人的编号
		link[i].number = i;                                      //给每一个人编号
	}
	while (count < 12)                                           //踢出12个人，12次
	{
		i = 0;
		while (i != 3)
		{
			h = link[h].nexp;
			if (link[h].number)
				i++;
		}
		link[h].number = 0;                                      //给当前这个人的编号置零了
		count++;
	}
	for (i = 1; i <= 13; i++)
		if (link[i].number)
			printf("%d", link[i].number);

	return 0;
}*/




/*#include <stdio.h>
#include <stdlib.h>

int main()
{
	struct student
	{
		char num[6];
		char name[8];
		char sex;
		int age;
		struct student* next;                                            //建立动态链表，最后一个元素包含的是指针，指向下一个元素的地址
	};
	struct student stu[10], * p, * pt, * head;
	int i, length, iage, flag = 1, find = 0;
	while (flag == 1)
	{
		scanf("%d", &length);
		if (length < 10)
			flag = 0;
	}
	for (i = 0; i < length; i++)
	{
		p = (struct student*)malloc(sizeof(struct student));             //sizeof函数里面填的是类型名，这里是填的是定义的结构体变量的名字
		if (i == 0)
			head = pt = p;                                               //创建第一个结点，赋上头节点
		else pt->next = p;                                               //连起来
		pt = p;
		scanf("%s %s %c %d", p->num, p->name, &p->sex, &p->age);
	}
	p->next = NULL;
	p = head;
	scanf("%d", &iage);
	pt = head;
	p = pt;
	if (pt->age == iage)                                                 //头节点是否符合
	{
		p = pt->next;
		head = pt = p;
		find = 1;
	}
	else pt = pt->next;
	while (pt != NULL)                                                   //链表还没遍历完
	{
		if (pt->age == iage)
		{
			p->next = pt->next;
			find = 1;
		}
		else p = pt;
		pt = pt->next;
	}
	if (!find)                                                           //一直没找到
		printf("not find");

	p = head;
	while (p != NULL)
	{
		printf("%4s %8s %c %6d\n", p->num, p->name, p->sex, p->age);
		p = p->next;
	}

	return 0;
}*/




#/*include <stdio.h>

int main()
{
	struct student
	{
		char num[6];
		char name[6];
		float score[3];
		float ave;
	};
	struct student stu[5];
	int i, j;
	float sum = 0;
	FILE* fp;
	for (i = 0; i < 5; i++)
		scanf("%s %s %f %f %f", stu[i].num, stu[i].name, &stu[i].score[0], &stu[i].score[1], &stu[i].score[2]);
	for (i = 0; i < 5; i++)
	{
		sum = 0;
		for (j = 0; j < 3; j++)
			sum += stu[i].score[j];
		stu[i].ave = sum / 3;
	}
	fp = fopen("stud", "w");
	for (i = 0; i < 5; i++)
		fprintf(fp, "%s %s %f %f %f %f\n", stu[i].num, stu[i].name, stu[i].score[0], stu[i].score[1], stu[i].score[2], stu[i].ave);
				  //fprintf函数文件指针在前，中间是输入格式，最后才是输入的变量名，必须一个一个变量输入或输出，形式同printf和scanf(要加&）
	return 0;
}*/




/*#include <stdio.h>

int main()
{
	struct student
	{
		char num[6];
		char name[6];
		float score[3];
		float ave;
	};
	struct student stu[5],t;
	int i, j;
	float sum = 0;
	FILE* fp;
	for (i = 0; i < 5; i++)
		scanf("%s %s %f %f %f", stu[i].num, stu[i].name, &stu[i].score[0], &stu[i].score[1], &stu[i].score[2]);
	for (i = 0; i < 5; i++)
	{
		sum = 0;
		for (j = 0; j < 3; j++)
			sum += stu[i].score[j];
		stu[i].ave = sum / 3;
	}
	for (i = 0; i < 4; i++)
		for (j = 0; j < 4 - i; j++)
			if (stu[j].ave > stu[j + 1].ave)         //降序
			{
				t = stu[j];                          //可以进行一整个结构体的互换，只要中间商也是结构体变量类型
				stu[j] = stu[j + 1];
				stu[j + 1] = t;
			}
	fp = fopen("stu_sort", "w");
	for (i = 0; i < 5; i++)
		fprintf(fp, "%s %s %f %f %f %f\n", stu[i].num, stu[i].name, stu[i].score[0], stu[i].score[1], stu[i].score[2], stu[i].ave);

	return 0;
}*/



/*#include <stdio.h>

int main()
{
	struct student
	{
		char num[6];
		char name[6];
		float score[3];
		float ave;
	};
	struct student stu[5], t, stu_new, s[6];
	int i, j;
	float sum = 0;
	FILE* fp;
	for (i = 0; i < 5; i++)
		scanf("%s %s %f %f %f", stu[i].num, stu[i].name, &stu[i].score[0], &stu[i].score[1], &stu[i].score[2]);
	for (i = 0; i < 5; i++)
	{
		sum = 0;
		for (j = 0; j < 3; j++)
			sum += stu[i].score[j];
		stu[i].ave = sum / 3;
	}
	for (i = 0; i < 4; i++)
		for (j = 0; j < 4 - i; j++)
			if (stu[j].ave > stu[j + 1].ave)
			{
				t = stu[j];
				stu[j] = stu[j + 1];
				stu[j + 1] = t;
			}
	scanf("%s %s %f %f %f", stu_new.num, stu_new.name, &stu_new.score[0], &stu_new.score[1], &stu_new.score[2]);
	stu_new.ave = (stu_new.score[0] + stu_new.score[1] + stu_new.score[2]) / 3;
	s[0] = stu_new;
	for (i = 1; i < 6; i++)
		s[i] = stu[i - 1];
	for(i=0;i<5;i++)
		for (j = 0; j < 5 - i; j++)
			if (s[j].ave < s[j + 1].ave)
			{
				t = s[j];
				s[j] = s[j + 1];
				s[j + 1] = t;
			}
	fp = fopen("stu_new", "w");
	for (i = 0; i < 6; i++)
		fprintf(fp, "%s %s %f %f %f %f\n", s[i].num, s[i].name, s[i].score[0], s[i].score[1], s[i].score[2], s[i].ave);

	return 0;
}*/




/*#include <stdio.h>

struct student
{
	char num[6];
	char name[6];
	int score[3];
};

void print(struct student stu[])
{
	int i;
	for (i = 0; i < 5; i++)
		printf("%s %s %d %d %d\n", stu[i].num, stu[i].name, stu[i].score[0], stu[i].score[1], stu[i].score[2]);
}

int main()
{
	struct student stu[5];
	int i;
	for (i = 0; i < 5; i++)
		scanf("%s %s %d %d %d", stu[i].num, stu[i].name, &stu[i].score[0], &stu[i].score[1], &stu[i].score[2]);
	printf("\n");
	print(stu);

	return 0;
}*/




/*#include <stdio.h>

struct student
{
	char num[6];
	char name[6];
	int score[3];
};

void input(struct student stu[5])
{
	int i;
	for (i = 0; i < 5; i++)
		scanf("%s %s %d %d %d", stu[i].num, stu[i].name, &stu[i].score[0], &stu[i].score[1], &stu[i].score[2]);
	printf("\n");
}

void print(struct student stu[5])
{
	int i;
	for (i = 0; i < 5; i++)
		printf("%s %s %d %d %d\n", stu[i].num, stu[i].name, stu[i].score[0], stu[i].score[1], stu[i].score[2]);
}

int main()
{
	struct student stu[5];
	input(stu);
	print(stu);

	return 0;
}*/




/*#include <stdio.h>

struct student
{
	char num[6];
	struct student* next;                                         //成员里面的指针类型是定义的结构体类型
};

struct student* del(struct student* head, char num[6])            //定义的是返回一个指针值的函数，返回的是头指针，这样才能串起整个链表
{
	struct student* p1 = head, * p2 = head;                       //定义两个结构体类型的指针
	if (head == NULL)                                             //空链表单独讨论
		printf("empty list!!");
	while (p1->num != num&&p1->next!=NULL)                        //跳过非目的结点并且当前链表未结束
		{
			p2 = p1;                                              //p2指针跟随p1，p1移动
			p1 = p1->next;
		}
	if (num == p1->num)                                           //如果找到了，在上个循环结束的位置
	{
		if (p1 == head)                                           //如果目的结点是头结点（特殊位置），变头指针
			head = p1->next;
		else p2->next = p1->next;                                 //让前面的指针转而连接起后面一个指针
	}
	else printf("no exist!!");                                    //如果没找到

	return head;
}*/




/*#include <stdio.h>

struct student
{
	char num[6];
	struct student* next;
};

struct student* insert(struct student* head, struct student* stud)
{
	struct student* p0 = stud->next, * p1 = head, * p2 = head;
	while (p1->num < p0->num&&p1->next!=NULL)
	{
		p2 = p1;
		p1 = p1->next;
	}
	if (head->num > p0->num)
	{
		p0->next = head;
		head = p0;
	}
	else if (p1->next = NULL)
	{
		p1->next = p0;
		p0->next = NULL;
	}
	else
	{
		p2->next = p0;
		p0->next = p1;
	}

	return head;
}*/



/*#include <stdio.h>
#include <stdlib.h>

struct student
{
	long num;
	float score;
	struct student* next;
};
int n;

struct student* creat()
{
	struct student* head, * p1, * p2;
	n = 0;
	p1 = p2 = (struct student*)malloc(sizeof(struct student));                      //建立第一个结点
	scanf("%ld %f",&p1->num, &p1->score);
	head = NULL;
	while (p1->num != 0)                                                            //控制什么时候结束循环，不在动态分配内存空间
	{
		n++;
		if (n == 1)head = p1;
		else p2->next = p1;                                                         //将两个结点连接上
		p2 = p1;
		p1 = (struct student*)malloc(sizeof(struct student));
		scanf("%ld %f",&p1->num, &p1->score);
	}
	p2->next = NULL;
	return head;
}

void print(struct student* head)
{
	struct student* p = head;
	while (p!= NULL)
	{
		printf("%ld %f\n", p->num, p->score);
		p = p->next;
	}
}

struct student* del(struct student* head, long del_num)
{
	struct student* p1 = head, * p2 = head;
	if (head == NULL)
	{
		printf("empty list!!");
		return head;
	}
	else
	{
		while (p1->num != del_num && p1->next != NULL)
		{
			p2 = p1;
			p1 = p1->next;
		}
		if (p1->num == del_num)                                      //找到的时候
		{
			if (p1==head)
				head = p1->next;
			else
				p2->next = p1->next;
		}
		else
			printf("no exist!!");
	}

	return head;
}

struct student* insert(struct student* head, struct student *stu)
{
	struct student* p1 = head, * p2 = head, * p0 = stu;
	while (p1->num < p0->num&&p1->next!=NULL)
	{
		p2 = p1;
		p1 = p1->next;
	}
	if (p1->num> p0->num)                                                  //在当前链表中存在数大于这个数，排除了把新结点放在最后的情况
	{
		if (head == p1)
		{
			head = p0;
			p0->next = p1;
		}
		else
		{
			p2->next = p0;
			p0->next = p1;
		}
	}
	else
	{
		p1->next = p0;
		p0->next = NULL;
	}

	return head;
}

int main()
{
	struct student* head, * stu;
	long del_num = 0;
	head = creat();
	print(head);
	scanf("%ld", &del_num);
	while (del_num != 0)
	{
		head = del(head, del_num);
		print(head);
		scanf("%ld", &del_num);
	}
	stu = (struct student*)malloc(sizeof(struct student));
	scanf("%ld %f", &stu->num, &stu->score);
	while (stu->num != 0)
	{
		head = insert(head, stu);
		print(head);
		stu = (struct student*)malloc(sizeof(struct student));                  //多次循环插入新结点需要重新分配一个动态内存空间给变量，否则这个空间里面的数据就被覆盖了
		scanf("%ld %f", &stu->num, &stu->score);
	}

	return 0;
}*/



/*#include <stdio.h>
#include <stdlib.h>

struct student
{
	long num;
	int score;
	struct student* next;
};

struct student* creat()
{
	struct student* p1, * p2, * head;
	int n = 1;
	p1 = p2 = (struct student*)malloc(sizeof(struct student));
	scanf("%ld %d", &p1->num, &p1->score);                                      //长整型型数据输入要用ld,指针变量前面要加地址符号
	head = NULL;
	while (p1->num != 0)
	{
		if (n == 1)
			head = p1;
		else
			p2->next = p1;
		p2 = p1;
		p1 = (struct student*)malloc(sizeof(struct student));
		scanf("%ld %d", &p1->num, &p1->score);
		n++;
	}
	p2->next = NULL;

	return head;
}

struct student* insert(struct student* heada, struct student* headb)
{
	struct student* pa1, * pa2, * pb1, * pb2;
	pa1 = pa2 = heada;
	pb1 = pb2 = headb;
	while (pa1->next != NULL || (pa1 == NULL && pb1 != NULL))
	{
		while (pb1->num > pa1->num && pa1->next != NULL)
		{
			pa2 = pa1;
			pa1 = pa1->next;
		}
		if (pb1->num < pa1->num)                                      //思路是把b列里的结点分别插入到a列里面
		{
			if (pa1 == heada)
				heada = pb1;
			else pa2->next = pb1;
			pb1 = pb1->next;                                          //pb1在b列里往后和a列里的结点比较
			pb2->next = pa1;                                          //pb2代替pb1的位置和当前结点进行连接
			pa2 = pb2;                                                //pa2还要在当前结点保存，之后继续比较，有可能还在它两中间插入
			pb2 = pb1;                                                //pb2在连接好之后回到b列跟上pb1
		}
	}
	if (pb1 != NULL && pb1->num > pa1->num && pa1->next == NULL)      //如果a列已经结束了但是b列还没有结束，说明后面b列中的所有结点都大于a列，直接接上
		pa1->next = pb1;

	return heada;
}

void print(struct student* headab)
{
	struct student* p = headab;
	while (p != NULL)                                                       //这里写的是p而不是p->next,这样才能把最后一个结点也包含上
	{
		printf("%ld %d\n", p->num, p->score);
		p = p->next;
	}
}

int main()
{
	struct student* heada, * headb, * headab;
	int sum = 0;
	heada = creat();
	headb = creat();
	headab = insert(heada, headb);
	print(headab);

	return 0;
}*/



/*#include <stdio.h>

struct student
{
	int num;
	char name[6];
	struct student* next;
}a[4], b[5];

struct student* del(struct student a[4], struct student b[5])
{
	struct student* pa1, * pa2, * pb1, * pb2, * head = a;
	pa1 = pa2 = a;
	while (pa1->next != NULL)
	{
		pb1 = pb2 = b;
		while (pb1->next != NULL)
		{
			if (pa1->num == pb1->num)
			{
				pa1 = pa1->next;                                       //注意pa1/指针每一次的变化，位置变了
				pa2->next = pa1;
				break;
			}
			pb2 = pb1;
			pb1 = pb1->next;
		}
		if (pb1->next == NULL)
		{
			pa2 = pa1;
			pa1 = pa1->next;
		}
	}

	return head;
}

int main()
{
	struct student* head, * p;
	int i;
	for (i = 0; i < 4; i++)
		scanf("%d %s", &a[i].num, a[i].name);
	for (i = 0; i < 4; i++)
	{
		if (i < 3)
			a[i].next = &a[i + 1];
		else a[i].next = NULL;
	}
	for (i = 0; i < 5; i++)
		scanf("%d %s", &b[i].num, b[i].name);
	for (i = 0; i < 5; i++)
	{
		if (i < 4)
			b[i].next = &b[i + 1];
		else b[i].next = NULL;
	}
	printf("\n");
	head = del(a, b);
	p = head;
	while (p != NULL)
	{
		printf("%d %s\n", p->num, p->name);
		p = p->next;
	}

	return 0;
}*/



/*#include <stdio.h>
#include <stdlib.h>

struct student
{
	char num[6];
	char name[6];
	char sex;
	int age;
	struct student* next;
};

struct student* creat(int n)
{
	struct student* head, * p1, * p2;
	int i;
	head = p1 = p2 = (struct student*)malloc(sizeof(struct student));
	scanf("%s %s %c %d", p1->num, p1->name, &p1->sex, &p1->age);
	for (i = 0; i < n-1; i++)
	{
		p1 = (struct student*)malloc(sizeof(struct student));
		scanf("%s %s %c %d", p1->num, p1->name, &p1->sex, &p1->age);
		p2->next = p1;
		p2 = p1;
	}
	p1->next = NULL;

	return head;
}

struct student* del(struct student* head, int year)
{
	struct student* p1, * p2;
	p1 = p2 = head;
	while (p1->next != NULL)
	{
		if (p1->age == year)
		{
			p1 = p1->next;
			p2->next = p1;
		}
		else
		{
			p2 = p1;
			p1 = p1->next;
		}
	}
	if (p1->next == NULL && p1->age == year)                              //考虑到最后一个结点也需要被删除的情况
		p2->next = NULL;

	return head;
}

void print(struct student* head)
{
	struct student* p;
	p = head;
	while (p != NULL)
	{
		printf("%s %s %c %d\n", p->num, p->name, p->sex, p->age);
		p = p->next;
	}
}

int main()
{
	struct student* head;
	int n = 0, year = 0;
	scanf("%d", &n);
	head = creat(n);
	print(head);
	scanf("%d", &year);
	head = del(head, year);
	print(head);

	return 0;
}*/



/*#include <stdio.h>
#include <string.h>

int main()
{
	FILE* fp;
	char str[20];
	gets_s(str);
	strupr(str);
	fp = fopen("test", "w");
	fputs(str, fp);

	return 0;
}*/



/*#include <stdio.h>
#include <string.h>

int main()
{
	FILE* fpa, * fpb, * fp;
	int i, j;
	char str1[30], str2[20], t = 0;
	gets_s(str1);
	gets_s(str2);
	printf("%d %d\n", strlen(str1), strlen(str2));
	fpa = fopen("A", "w");
	fpb = fopen("B", "w");
	fputs(str1, fpa);
	fputs(str2, fpb);
	fclose(fpa);
	fclose(fpb);
	fpa = fopen("A", "r");
	fpb = fopen("B", "r");
	fgets(str1, strlen(str1)+1, fpa);                //字长没错，但是放到字符串里面要加上终止符号\0，这样最后一个字符容易被遗漏，因此录入字长+1
	fgets(str2, strlen(str2)+1, fpb);
	fclose(fpa);
	fclose(fpb);
	strcat(str1, str2);
	printf("%s\n", str1);
	scanf("ok");
	for(i=0;i<strlen(str1)-1;i++)
		for (j = 0; j < strlen(str1) - 1 - i; j++)
			if (str1[j] > str1[j + 1])
			{
				t = str1[j];
				str1[j] = str1[j + 1];
				str1[j + 1] = t;
			}
	fp = fopen("C", "w");
	fputs(str1, fp);
	fclose(fp);

	return 0;
}*/




/*#include <stdio.h>
#include <string.h>

struct employee
{
	char num[6];
	char name[6];
	char sex;
	int age;
	char addr[20];
	int salary;
	char health[8];
	char level[10];
};

struct worker
{
	char name[6];
	int salary;
};

int main()
{
	struct employee people[4];
	struct worker employ[4];
	int i;
	FILE* fp;
	fp = fopen("employee.txt", "r");
	for (i = 0; i < 4; i++)
		fscanf(fp, "%s %s %c %d %s %d %s %s", people[i].num, people[i].name, &people[i].sex, &people[i].age, people[i].addr, &people[i].salary, people[i].health, people[i].level);
	for (i = 0; i < 4; i++)
		printf("%s %s %c %d %s %d %s %s\n", people[i].num, people[i].name, people[i].sex, people[i].age, people[i].addr, people[i].salary, people[i].health, people[i].level);
	for (i = 0; i < 4; i++)
	{
		strcpy(employ[i].name, people[i].name);                                    //字符数组之间传递数据不要用指针的思想，直接使用字符数组函数，字符串复制函数，交换的时候也是这样
		employ[i].salary = people[i].salary;
	}
	printf("\n");
	for (i = 0; i < 4; i++)
		printf("%s %d\n", employ[i].name, employ[i].salary);
	fclose(fp);
	fp = fopen("worker", "w");
	for (i = 0; i < 4; i++)
		fprintf(fp, "%s %d\n", employ[i].name, employ[i].salary);
	fclose(fp);

	return 0;
}*/




/*#include <stdio.h>
#include <string.h>

struct worker
{
	char name[6];
	int salary;
};

int main()
{
	struct worker employee[4];
	int i, n = 4;
	char name[6];
	FILE* fp;
	fp = fopen("worker", "r+");
	for (i = 0; i < 4; i++)
		fscanf(fp, "%s %d", employee[i].name, &employee[i].salary);
	for (i = 0; i < 4; i++)
		printf("%s %d\n", employee[i].name, employee[i].salary);
	fputc('\n', fp);
	gets_s(name);
	for (i = 0; i < 4; i++)
		if (strcmp(employee[i].name, name) == 0)
		{
			employee[i] = employee[i + 1];
			n--;
		}
	for (i = 0; i < n; i++)
		printf("%s %d\n", employee[i].name, employee[i].salary);
	for (i = 0; i < n; i++)
		fprintf(fp, "%s %d\n", employee[i].name, employee[i].salary);
	fclose(fp);

	return 0;
}*/



/*#include <stdio.h>
#include <string.h>

int main()
{
	char str[10];
	int i, j;
	FILE* fp;
	fp = fopen("words", "r");
	while (fscanf(fp, "%s", str) != EOF)
	{
		strupr(str);
		puts(str);
	}
	fclose(fp);

	return 0;
}*/



/*#include <stdio.h>
#include <string.h>

int main()
{
	char str[3][10];
	int i;
	FILE* fp;
	fp = fopen("words", "w");
	for (i = 0; i < 3; i++)
		gets_s(str[i]);
	for (i = 0; i < 3; i++)
		fputs(str[i], fp);
	fclose(fp);
	fp = fopen("words", "r");
	for (i = 0; i < 3; i++)
		fgets(str[i], strlen(str[i]) + 1, fp);
	for (i = 0; i < 3; i++)
		strupr(str[i]);
	for (i = 0; i < 3; i++)
		puts(str[i]);
	fclose(fp);

	return 0;
}*/




/*#include <stdio.h>

int main()
{
	int a = 0, b = 0, c = 0, d = 0;
	scanf("%o", &a);                   //%o是八进制数
	a >> 4;                        //a没变，是把b赋上了结果
	c = ~(~0 << 4);
	d = b & c;
	printf("%o,%d\n%o,%d", a, a, d, d);

	return 0;
}*/


//一个数组，一种数出现了奇数次，其他数都出现了偶数次，找出出现了奇数次的这个数
/*#include <stdio.h>

int main()
{
	int eor = 0, arr[9] = { 1,1,1,2,2,3,3,3,3 }, i;
	for (i = 0; i < 9; i++)
		eor ^= arr[i];                 //因为异或运算和顺序无关，所以出现偶数次的数自己和自己异或结果是0，出现奇数次的数自己和自己异或结果是自己，最后只剩下了这个数，0和这个数异或还是这个数
	printf("出现了奇数次的这个数是：%d", eor);
	  
	return 0;
}*/


//在一个数组中，只有两种数出现了奇数次，其他数都出现了偶数次，找出出现奇数次的这两个数
/*#include <stdio.h>

int main()
{
	int eor = 0, eor1 = 0, rightone = 0, arr[4] = { 354,666,11,11 }, i;
	for (i = 0; i < 4; i++)
		eor ^= arr[i];            //结果是这两个出现奇数次的数异或的结果
	rightone = eor & (~eor + 1);  //rightone为eor二进制中从右到左最早出现的一个1，eor与上自己的补码（按位取反再加一）可以提取出二进制最右边的1
	for (i = 0; i < 4; i++)
		if ((arr[i]&rightone)==rightone)   //在数组中只把和这个位数相同（为1）/或不同（为0）的数重新进行异或运算，数组里的数分成了两组，有两种情况：
			eor1 ^= arr[i];                //条件判断最终结果仍为rightone说明这个位置上也是1，不用管其他位置因为与运算之后都是0；条件判断最终结果为0则说明这个位置上是0，把两个出现奇数次的数分开
			                               //与运算只有同时为1时结果才为1，并且rightone只有一个位置上是1，其他都是0，
	printf("%d %d", eor1, eor1 ^ eor);     //得到了一个出现奇数次的数，再和异或的结果进行异或得到另一个出现奇数次的数

	return 0;
}*/




//插入排序
/*#include <stdio.h>
#define N 9                                //定义符号常量不需要在前面加上类型

void swap(int arr[N], int i, int j)        //注意使用位运算进行交换的条件，两个数的地址不同
{
	arr[i] = arr[i] ^ arr[j];
	arr[j] = arr[i] ^ arr[j];
	arr[i] = arr[i] ^ arr[j];
}

int main()
{
	int arr[N] = { 9,8,7,6,5,4,3,2,1 }, i, j;
	for (i = 1; i < N; i++)
		for (j = i - 1; j >= 0 && arr[j] > arr[j + 1]; j--)     //注意控制循环结束的条件：当来到有序数列最前面或者前一个数已经不大于后面的数
			swap(arr, j, j + 1);
	for (i = 0; i < N; i++)
		printf("%d ", arr[i]);

	return 0;
}*/



/*#include <stdio.h>

int n = 10;

void normalselection(int num, int arr[])
{
	int i = 0;
	for (i = 0; i < n && arr[i] != num; i++);                   //结束循环条件是找到了这个数或者数组结束了还没找到
	if (i < n)
		printf("the number do exist!\n");
	else printf("the number do not exist!\n");
}

int main()
{
	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 }, num = 0;
	scanf("%d", &num);
	normalselection(num, arr);

	return 0;
}*/



