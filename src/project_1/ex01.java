package project_1;
import java.io.*;
/* *
 ���ڿ��� ���� �Է¹ް� ����ϱ�
 * */

public class ex01 {

	public static void main(String[] args) throws IOException {
		/*���ڿ�������ϱ�
		 */
		System.out.println("���ڿ��� �Է��ϼ���");
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		String str = br.readLine();
		System.out.println(str + "��(��) �ԷµǾ����ϴ�.");
		
		/*����������ϱ� 
		 */
		System.out.println("������ �Է��ϼ���.");
		str = br.readLine();
		//���ڷ� ����ȯ�� �ʿ�
		int num = Integer.parseInt(str);
		System.out.println("����"+num + "��(��) �ԷµǾ����ϴ�.");
	}

}
