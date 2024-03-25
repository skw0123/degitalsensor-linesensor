#define ledPin 13 //LED는 디지털 핀 13에 연결됨
#define inPin   7 //pushbutton은 디지털 핀 7에 연결됨
int val = 0;      //읽은 값을 저장할 변수

void setup() {
  pinMode(ledPin, OUTPUT);   //디지털 핀 13을 출력으로 설정
  pinMode(inPin, INPUT);     //디지털 7을 입력으로 설정
  Serial.begin(9600);
}

void loop() {
  val = digitalRead(inPin); //입력 핀으로부터 읽기, 7번 핀에서 VCC 연결 또는 GND 연결

  Serial.print("Input data =");
  Serial.println(val);
  digitalWrite(ledPin, val); //LED를 버튼의 값으로 설정
}
