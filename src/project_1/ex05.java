package project_1;

//��ȭŬ����
class Movie
{
	//private�� �ش� Ŭ���� �������� ���� ����
	private String name;
	private int num;
	
	//������ ����
	private Movie()
	{
		name = "blank";
		num = 0;
		
		System.out.println("��ȭ�� �󿵰��� ��ϵǾ����ϴ�.");
	}
	public Movie(String a, int n)
	{
		this(); // �����ڸ� �����ε��������� this()�� ����տ� �������
		name = a;
		num = n;
		
		System.out.println("��ȭ ������" + name + "����, ��ȭ ��ȣ��" + num+ "���� ��ȭ�� �ٲ����ϴ�.");
	}
	public void show()
	{
		System.out.println("��ȭ ������"+ name + "�Դϴ�.");
		System.out.println("��ȭ ��ȣ��" + num + "�Դϴ�.");
	}
	
}

public class ex05 {

	public static void main(String[] args) {
		//MoiveŬ������ private ������ ���ٺҰ�
		//public�� ���ٰ���
		//
		//Movie mov1= new Movie();
		//mov1.show();
		
		Movie mov2= new Movie("���˿��� ����",2);
		mov2.show();
	}

}
