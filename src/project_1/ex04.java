package project_1;

import java.io.*;
public class ex04 {

	public static void main(String[] args) throws IOException {
		System.out.println("�迭�� ������ �Է��ϼ���.");
		
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		String str = br.readLine();
		int num = Integer.parseInt(str);
		
		//�迭����
		int [] my;
		my = new int[num];
		
		System.out.println("�� �迭�� ���� �Է��ϼ���.");
		
		for (int i =0; i<num; i++)
		{
			str = br.readLine(); //Ű����� �ʿ��� ��ŭ �Է�
			int a = Integer.parseInt(str);
			my[i] = a;
			System.out.println((i+1)+"��° �迭�� ���� �ԷµǾ����ϴ�.");
		}
		
		for (int i =0; i<num; i++)
		{
			System.out.println((i+1) + "��° �迭�� ���� "+ my[i] + "�Դϴ�");
		}
	}

}
