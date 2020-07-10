package project_1;

//영화클래스
class Movie
{
	//private는 해당 클래스 내에서만 접근 가능
	private String name;
	private int num;
	
	//생성자 정의
	private Movie()
	{
		name = "blank";
		num = 0;
		
		System.out.println("영화가 상영관에 등록되었습니다.");
	}
	public Movie(String a, int n)
	{
		this(); // 생성자를 오버로딩했을때는 this()는 가장앞에 써줘야함
		name = a;
		num = n;
		
		System.out.println("영화 제목이" + name + "으로, 영화 번호가" + num+ "으로 영화가 바꼈습니다.");
	}
	public void show()
	{
		System.out.println("영화 제목은"+ name + "입니다.");
		System.out.println("영화 번호는" + num + "입니다.");
	}
	
}

public class ex05 {

	public static void main(String[] args) {
		//Moive클래스의 private 때문에 접근불가
		//public만 접근가능
		//
		//Movie mov1= new Movie();
		//mov1.show();
		
		Movie mov2= new Movie("범죄와의 전쟁",2);
		mov2.show();
	}

}
