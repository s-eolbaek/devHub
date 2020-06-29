package project_1;
import java.io.*;
/* *
 문자열과 정수 입력받고 출력하기
 * */

public class ex01 {

	public static void main(String[] args) throws IOException {
		/*문자열입출력하기
		 */
		System.out.println("문자열을 입력하세요");
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		String str = br.readLine();
		System.out.println(str + "이(가) 입력되었습니다.");
		
		/*정수입출력하기 
		 */
		System.out.println("정수를 입력하세요.");
		str = br.readLine();
		//숫자로 형변환이 필요
		int num = Integer.parseInt(str);
		System.out.println("정수"+num + "이(가) 입력되었습니다.");
	}

}
