#include <stdio.h>
#include <string.h>
#include <stdlib.h> 
#define guys 36
struct student{
	char nam[20];
	char num[20];
	int chi;
	int eng;
	int math;
	double ave;
};
int  insert (struct student a[]);
int insert2(struct student a[],int n);
void all(struct student a[],int m);
int delet (struct student a[],int s);
void query (struct student a[]);
int main(){
	int m;
	struct student profile[guys],*p;
	p=profile;
	printf("学生系统版权归谢贤潇所有\n");
	while (1){
		int c;
	printf("请输入\n");
	printf("1：录入学生信息\n");
	printf("2：查询学生信息\n");
	printf("3：删除学生信息\n");
	printf("4：插入学生信息\n");
	printf("5：查看所有学生信息\n");
	printf("0：退出系统\n");
		scanf("%d",&c);
	switch(c){
		case 1:
			printf("1：录入学生信息\n");
			m=insert(p);
			break;
			case 2:
			printf("2：查询学生信息\n");
			query(p);
			break;
			case 3:
			printf("3：删除学生信息\n");
			m=delet(p,m);
			break;	
			case 4:
			printf("4：插入学生信息\n");
			m=insert2(p,m);
			break;
			case 5:
			printf("5：查看所有学生信息\n");
			all(p,m);
			break;
			case 0:
			exit(0);
			break;
	}	 
}
return 0;
	}
	int  insert (struct student a[]){                    //录入学生信息 
		int N;
		printf("请输入想录入的人数\n"); 
		scanf("%d",&N);
		printf("请输入%d个学生信息\n",N);
		printf("姓名	学号	语文	英语	数学\n"); 
		int i;
	for(i=0;i<N;i++){
		scanf("%s %s %d %d %d",a[i].nam,a[i].num,&a[i].chi,&a[i].eng,&a[i].math);
		a[i].ave=(a[i].chi+a[i].eng+a[i].math)/3.0;
	}
	return N;
	}
	void all(struct student a[],int m){                  //查看所有学生 
		int i;
		for(i=0;i<m;i++){
			printf("姓名	学号	语文	英语	数学	平均分\n"); 
			printf("%s	%s	%d	%d	%d	%.2lf\n",a[i].nam,a[i].num,a[i].chi,a[i].eng,a[i].math,a[i].ave);
		}
	}
	int delet (struct student a[],int s){                     //删除学生删除学生
		printf("输入你想删除的人的学号:");
		char p[10];
		scanf("%s",p);
		getchar();
		int i; 
		int index=0;
		int count=s-1;
		for(i=0;i<guys;i++){	
			if(strcmp(p,a[i].num)==0){
				index=i;
				break;
			} 
		}
			int x=index+1;
			for(x;x<guys;x++){
				if(x>s)
				break;
			for(index;index<x;index++){
				strcpy(a[index].nam,a[x].nam);
				strcpy(a[index].num,a[x].num);
				a[index].chi=a[x].chi;
				a[index].eng=a[x].eng;
				a[index].math=a[x].math;
				a[index].ave=a[x].ave;
			}
		
		}
		return count;
	}
	void query (struct student a[]){                   //查询学生信息 
	int u; 
	printf("查询几个学生:");
	scanf("%d",&u);
		int k;
		int i;
	for(k=0;k<u;k++){
		printf("请输入学生的学号");
		char p[10];
		scanf("%s",p);
		for(i=0;i<guys;i++){	
			if(strcmp(p,a[i].num)==0){
				printf("姓名	学号	语文	英语	数学	平均分\n"); 
				printf("%s	%s	%d	%d	%d	%.2lf\n",a[i].nam,a[i].num,a[i].chi,a[i].eng,a[i].math,a[i].ave);
			} 
		}
	}
}
//插入学生信息
int insert2(struct student a[],int n){
	int N;
		printf("请输入想插入的人数\n"); 
		scanf("%d",&N);
		printf("请输入%d个学生信息\n",N);
		printf("姓名	学号	语文	英语	数学\n"); 
		int sum=0;
		sum=N+n; 
		int i=n;
	for(i;i<sum;i++){
		scanf("%s %s %d %d %d",a[i].nam,a[i].num,&a[i].chi,&a[i].eng,&a[i].math);
		a[i].ave=(a[i].chi+a[i].eng+a[i].math)/3;
	}
	return sum;
} 
 

