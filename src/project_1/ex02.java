package project_1;
import java.io.*;
//�������ڷ� ���� �ۼ��ϱ�
//���������� ������� true�� false�� ����

public class ex02 {

	public static void main(String[] args) throws IOException{
		System.out.println("����� �����Դϱ�?");
		System.out.println("Y �Ǵ� N�� �Է��Ͻÿ�");
		
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		String str = br.readLine();
		
		char res = str.charAt(0);
		
		if(res == 'y'||res == 'Y') 
		{
			System.out.println("����� �����̱���.");
		}
		else if(res =='n' || res =='N')
		{
			System.out.println("����� �����̱���");
		}
		else
		{
			System.out.println("Y �Ǵ� N�� �Է��ϼ���.");
		}
	}

}
