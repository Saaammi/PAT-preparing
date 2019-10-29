#include <stdio.h>
int main() {
	int n, i = 0, j, sum, Z, count = 0;
	char ch[19];//存储身份证号
	int weight[17] = { 7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2 };
	char M[11] = { '1','0','X','9','8','7','6','5','4','3','2' };

	scanf("%d", &n);//当作字符串输入
	for (i = 0; i < n; i++) {
        scanf("%s",ch);
		j = 0;
		sum = 0;
		while ((j < 17) && (ch[j] >= '0') && (ch[j] <= '9')) {//遍历字符串前17位,是数字时加权累加
			//scanf("%s", ch);位置写错了嘤
			sum = sum + (ch[j] - '0') * weight[j];
			j++;
		}
		Z = sum % 11;

		if (j == 17 && ch[17] == M[Z]) {//如果前面全是数字,而且第18位验证正确,记一次正确
			count++;
		}
		else {//只要有一次不是数字,便不会执行完while,也不会验证,直接输出字符串
			puts(ch);
		}

	}
	if (count == n) {//正确次数等于输入的身份证号码数
		printf("All passed");
	}
	return 0;
}
