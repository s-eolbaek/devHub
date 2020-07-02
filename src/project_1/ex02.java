package project_1;
import java.io.*;
//논리연산자로 조건 작성하기
//논리연산자의 결과값은 true와 false로 나옴

public class ex02 {

	public static void main(String[] args) throws IOException{
		System.out.println("당신은 남성입니까?");
		System.out.println("Y 또는 N을 입력하시오");
		
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		String str = br.readLine();
		
		char res = str.charAt(0);
		
		if(res == 'y'||res == 'Y') 
		{
			System.out.println("당신은 남성이군요.");
		}
		else if(res =='n' || res =='N')
		{
			System.out.println("당신은 여성이군요");
		}
		else
		{
			System.out.println("Y 또는 N을 입력하세요.");
		}
	}

}
