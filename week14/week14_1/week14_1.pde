//week14-1好玩的打地鼠,結合week13-1 week10-1
//修改自 13-1 再加上week10-1的 void mousePressed()
//File-Preference 字型設大一些
PImage img ;//外面宣告變數(可讓別人裡面使用)
void setup() {
  size(300, 400);//視窗大小
  img = loadImage("gopher.png");//把gopher.png拉到程式裡
}
void mousePressed() {//week10-1新加的程式:mouse按下去
  int i = mouseY / 100, j = mouseX / 100; // 左手i對應Y座標 右手j對應X座標
  if (a[i][j]>0) {//如果地鼠還在
    a[i][j] = -120; //放2秒的大叉叉
  }
}
int[][] a = { {0, 0, 0}, {0, 0, 0}, {0, 0, 0} };//地鼠沒有冒起來
  void draw() {
  background(0xFFFFFFF2);//淡黃色背景
  if (frameCount%60==0) { //每過60frame(1秒)生成一隻地鼠
    int i = int(random(3)), j = int(random(3));//亂數決定 i 跟j的值
      a[i][j] = 60; //會亂數決定1格,站起來60frames(1秒)
  }
  for (int i=0; i<3; i++) {//左手i
    for (int j=0; j<3; j++) {//右手j
      float x =  j*100, y = i*100+100;//推算座標,小心y往下100(藏白色板)
      if (a[i][j]<0) {//如果有地鼠
        a[i][j]-=1;//生命的倒數計時
        y-=100*sin(a[i][j]*PI/60);//小心y對應sin()
          image(img, x, y, 100, 100);
      } else if (a[i][j]<0) {//死掉的地鼠
        y-=100;
        rect(x, y, 100, 100);
        line(x, y, x+100, y+100);
        line(x+100, y, 100, y+100);
        a[i][j]+=1;
      }
    }
    rect (0,100+i*100, 300, 100);//低一格的地方,放長方形擋住
  }
}
