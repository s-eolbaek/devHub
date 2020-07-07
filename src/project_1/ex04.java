package project_1;

import java.io.*;
public class ex04 {

	public static void main(String[] args) throws IOException {
		System.out.println("배열의 갯수을 입력하세요.");
		
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		String str = br.readLine();
		int num = Integer.parseInt(str);
		
		//배열생성
		int [] my;
		my = new int[num];
		
		System.out.println("각 배열의 값을 입력하세요.");
		
		for (int i =0; i<num; i++)
		{
			str = br.readLine(); //키보드로 필요한 만큼 입력
			int a = Integer.parseInt(str);
			my[i] = a;
			System.out.println((i+1)+"번째 배열의 값이 입력되었습니다.");
		}
		
		for (int i =0; i<num; i++)
		{
			System.out.println((i+1) + "번째 배열의 값은 "+ my[i] + "입니다");
		}
	}

}
