package project_1;
import java.io.*;

//'? :'�� Ȱ���� ���ǿ����� �ۼ�
public class ex03 {

	public static void main(String[] args) throws IOException{
		System.out.println("�ڽ��� �������ּ���.");
		System.out.println("������ �Է����ּ���.");
		
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		String str = br.readLine();
		int res = Integer.parseInt(str);
		
		char ans = (res == 1) ? 'A' : 'B';
		/*
		 *  res�� 1�� ��� 'A'���, �ƴѰ�� 'B' ��� 
		 */
		
		System.out.println(ans + "�ڽ��� �����߽��ϴ�.");
	}

}
