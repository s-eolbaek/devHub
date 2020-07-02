package project_1;
import java.io.*;

//'? :'를 활용한 조건연산자 작성
public class ex03 {

	public static void main(String[] args) throws IOException{
		System.out.println("코스를 선택해주세요.");
		System.out.println("정수를 입력해주세요.");
		
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		String str = br.readLine();
		int res = Integer.parseInt(str);
		
		char ans = (res == 1) ? 'A' : 'B';
		/*
		 *  res가 1인 경우 'A'출력, 아닌경우 'B' 출력 
		 */
		
		System.out.println(ans + "코스를 선택했습니다.");
	}

}
