#include <stdio.h>
#include <windows.h>

void textcolor(int colorNum) {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colorNum);
}

int main(){
	int point=20;
	char input="";
	textcolor(3); 	//텍스트 색상 초록으로 변경  
    printf("---------------------------C H E C K P O I N T I N G--------------------------- \n"); 
    
	textcolor(14); 	//텍스트 색상 회색으로 변경  
	printf("???||오우! 당신이 말로만 듣던 김철수군요! \n \n 아무 키를 입력하면 다음 \n \n");
	getch();	//getch 안에는 키 아스키 코드 입력 / 입력 없으면 아무 키나 
	printf("???||오늘 이 검문소에 대해 설명을 해드리겠습니다. \n \n 아무 키를 입력하면 다음 \n \n");
	getch();
	printf("???||이 검문소는 유독 이상한 사람이 많이 오기로 유명한 검문소인데요. \n \n");
	printf("???||그러니 당신도 조심하세요! 이상한 사람이 당신을 해코지하면 안되니까요! \n \n");
	printf("???||농담이에요. 하하. \n \n 아무 키를 입력하면 다음 \n \n");
	getch();
	printf("???||당신은 검문소에 온 사람의 신분증을 확인해야합니다. \n \n");
	printf("???||차를 가지고 온 사람은 자동차 등록증을 확인해야합니다. \n \n 아무 키를 입력하면 다음 \n \n");
	getch();
	printf("???||만약 신분증, 자동차 등록증이 일치하지 않다면 차단기를 내려 셧다운을 하세요! \n \n 아무 키를 입력하면 다음 \n \n");
	getch();
	printf("???||아, 참. 제 소개를 안했네요. 저는 새롭게 온 직원들에게 일에 대해 소개시켜주는 안내원이에요. \n \n 아무 키를 입력하면 다음 \n \n");
	getch();
	printf("안내원||즐거운 시간! \n \n 아무 키를 입력하면 다음 \n \n");
	getch();
	system("cls");	//초기화
	printf("---------------------------C H E C K P O I N T I N G--------------------------- \n");
	printf("게임을 시작하려면 s를 입력하세요.\n");
	scanf("%c",&input);  
	system("cls");
	if(input=='s'){
		printf("2024년 8월 16일\n");
		textcolor(7);
		printf("나는 대한미국 인천검문소 검문관 김철수다.\n이제부터 들어오는 차들을 단속하면 된다. 마침 저기서 차가 들어온다.\n아무 키를 입력하면 다음으로 이동\n");
		getch();
		printf("차량번호는 80배7808이고 트럭인것 같군 신분증을 받아보자\n아무 키를 입력하면 다음\n");
		printf("???||아..안녕하세요...저는 윤수원입니다.... 여기 신분증과 자동차 등록증이요\n아무 키를 입력하면 다음으로 이동\n");
		getch();
		textcolor(14);
		printf("'윤수원의 신분증'과 '자동차등록증'아이템을 획득했습니다.\n이제 확인해보자.\n\n");
		printf("           윤수원의 신분증                         자동차등록증\n");
		printf("주민등록번호: 870101-2345610                 자동차등록번호: 836418033870857\n");
		printf("       이름: 윤수원                                  차 명: 기아 봉고3\n");
		printf("주소:강원도 강릉시 명주동 xx로 ㅌㅌ아파트        사용 본거지: 구방 강원물류센터\n");
		printf("   유효기한: 2030년8월16일까지 유효함              사용용도: 화물용(1톤급)\n");
		printf("  이 신분증을 인증함 '강릉시청 발급과'             차량번호:80배7807\n아무 키를 입력하면 다음으로 이동\n");
		getch();
		textcolor(3);
		printf("이 사람의 정보를 보고 질문해보자\n\n아무 키를 입력하면 다음으로 이동\n");
		getch();
		printf("김철수||안녕하세요 윤수원씨,이곳에 왜 오셨나요?\n아무 키를 입력하면 다음으로 이동\n");
		getch();
		printf("윤수원||택배를 이송해야해서 왔어요...\n아무 키를 입력하면 다음으로 이동\n");
		getch();
		printf("김철수||그럼 혹시 어디 사시나요?\n아무 키를 입력하면 다음으로 이동\n");
		getch();
		printf("윤수원||강릉에있는... ㅌㅌ아파트요....\n아무 키를 입력하면 다음으로 이동\n");
		getch();
		printf("김철수||혹시 현재 직업이 무엇인가요??\n아무 키를 입력하면 다음으로 이동\n");
		getch();
		printf("윤수원||그..구방에서 택배원으로 일하고 있습니다...\n");
		Sleep(1000);
		textcolor(14);
		while(1){
			printf("이제 이 사람을 들여보낼지 말지 결정해야한다. 들여보낼까? 말까?\n o(영어)를 입력하면 들여보내고 x를입력하면 들여보내지 않습니다.\n");
			char input2="";
			scanf("%c",&input2);
			if(input2=='o'){
				textcolor(7);
				point=point+10;
				printf("김철수||들어가셔도 좋습니다.\n");
				printf("윤수원||감사합니다...\n아무 키를 입력하면 다음으로 이동\n");
				getch();
				textcolor(14);
				printf("문제가 없는 일반인을 무사히 들어보냈습니다. 보상으로 포인트가 10점 추가 됩니다.\n현재 나의 포인트:%dP",point);
				printf("*참고: 포인트가 0이하인경우 즉시 게임이 종료됩니다*\n");
				break;
			}else if(input2=='x'){
				textcolor(7);
				point=point-10;
				printf("김철수||들어가실수 없습니다. 돌아가세요.\n");
				printf("윤수원||아...네....\n아무 키를 입력하면 다음으로 이동\n");
				getch();
				textcolor(14);
				printf("문제가 없는 일반인을 들여보내지 않았습니다. 포인트가 10점 차감됩니다.\n현재 나의 포인트:%dP",point);
				printf("*참고: 포인트가 0이하인경우 즉시 게임이 종료됩니다*\n");
				break;
			}else{
				input2="";
			}
		}
		printf("이제 다음차를 준비해볼까?");
	}
}