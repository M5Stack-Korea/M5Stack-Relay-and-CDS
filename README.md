# M5Stack-Relay-and-CDS

이 프로젝트는 CDS Sensor를 이용하여 빛의 세기를 측정하고, 측정한 빛의 세기 값에 따라 Relay 모듈을 동작시켜, LED를 제어하는 예를 보여줍니다. 

## 빛의 양에 따른 LED 제어



## 준비물

- M5Stack Core [[상세정보]](http://shop.wiznet.io/front/contents/product/view.asp?cateid=97&pid=1346) 
- Black Bottom [[상세정보]](http://shop.wiznet.io/front/contents/product/view.asp?cateid=97&pid=1371)
- CDS 센서 모듈 [[상세정보]](https://www.devicemart.co.kr/goods/view?no=1287124)
- Relay 모듈    [[상세정보]](https://www.devicemart.co.kr/goods/view?no=1320897)
- LED
- Wire
- Bread Board


## 하드웨어 연결

1. M5Stack Core에 Balck Bottom(M5Stack BASIC 기본 세트)을 연결합니다. 
2. CDS 센서 모듈의 OUT은 Bottom 36번 핀에 연결합니다. 
3. Relay 모듈의 IN은 Bottom 35번 핀에 연결합니다. 
4. Core의 3.3V 핀 - LED(+), LED(-) - Relay 모듈 (NO), Relay 모듈(COM) - Core의 GND 핀  으로 연결합니다. 


## 아두이노 IDE를 이용하여 소스코드를 M5Stack Core에 올린 후, 동작시키면, CDS 값이 낮으면, LED가 켜지고, CDS 값이 높으면, LED가 꺼지는 것을 확인할 수 있습니다. 
