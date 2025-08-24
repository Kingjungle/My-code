#include "raylib.h"
#include <iostream>

//Colors 

Color Green = Color{38, 185, 154, 255};
Color Dark_Green = Color{20, 160, 133, 255};
Color Light_Green = Color{129, 204, 184, 255};
Color Yellow = Color{243, 213, 91, 255};
Color LIGHT_ORANGE = Color{255,200,100,255};

enum screenType{Start_menu, Count_down, Game_play};
screenType currentScrean = Start_menu;


int player_score = 0;
int cpu_score = 0;
int frames = 0;
int frame_needed [] = {1, 2, 3 ,4 ,5};
int count = 5;

// Classes 

class Ball{

public:

    float x, y;
    int speed_x , speed_y, radius;
    bool plrlost;

    void Draw(){
        DrawCircle(x , y , radius, LIGHT_ORANGE); // pos_x , pos_y, radius, color
    }

    void Update(){

        x += speed_x;
        y += speed_y;

        if(y + radius >= GetScreenHeight() || y - radius <= 0){
            speed_y *= -1;
        }

        if(x + radius >= GetScreenWidth()){
            cpu_score ++;
            plrlost = true;
            ResetBall(plrlost);
        }
        if(x - radius <= 0){
            player_score ++;
            plrlost = false;
            ResetBall(plrlost);
            
        }
    }

    void ResetBall(bool plyrlost){

        x = GetScreenWidth()/2;
        y = GetScreenHeight()/2;

        if(plrlost){
            int speed_choices[2] = {-1, 1};
            speed_x *= -1;
            speed_y *= speed_choices[GetRandomValue(0,1)];
        }
        else{
            int speed_choices[2] = {-1, 1};
            speed_y *= speed_choices[GetRandomValue(0,1)];
        }
    }
};

class Paddle{

protected:
    
    void LimitMovemnet(){

            if(y <= 0){
                y = 0;

            }
            if(y + height >= GetScreenHeight()){
                y = GetScreenHeight() - height;

            }
    }

public:

    float x, y, width, height;
    int speed;

    void Draw(){
        DrawRectangleRounded(Rectangle{x, y , width, height}, 0.8, 0, WHITE);
    }

    void Update(){
        if(IsKeyDown(KEY_UP)){
            y -= speed;
        }

        if(IsKeyDown(KEY_DOWN)){
            y += speed;
        }

        LimitMovemnet();
    }
};

class CpuPaddle : public Paddle{

public:

    void Update(int ball_y, int ball_x, float cpu_x){

        if(cpu_x < GetScreenWidth() / 2 && ball_x < GetScreenWidth() / 2){

            if(y + height / 2  > ball_y){
            y -= speed;
            }

            if(y + height / 2  <= ball_y){
                y += speed;
            }

        }

        else if(cpu_x > GetScreenWidth() / 2 && ball_x > GetScreenWidth() / 2){

            if(y + height / 2  > ball_y){
            y -= speed;
            }

            if(y + height / 2  <= ball_y){
                y += speed;
            }
        }
        
        LimitMovemnet();
    }
};


Ball ball;
Paddle player;
CpuPaddle cpu;
CpuPaddle cpu_2;

int main(){

    //Window setup

    const int screen_width = 1280;
    const int screen_height = 600;
    InitWindow(screen_width, screen_height, "PONG GAME");
    SetTargetFPS(60);

    //Object setup
    
    ball.radius = 20;
    ball.x = screen_width / 2;
    ball.y = screen_height / 2;
    ball.speed_x = 7;
    ball.speed_y = 7;

    player.width = 25;
    player.height = 120;
    player.x = screen_width - player.width - 10;
    player.y = screen_height / 2 -player.height / 2 ;
    player.speed = 6;

    cpu.width = 25;
    cpu.height = 120;
    cpu.x = 10;
    cpu.y = screen_height / 2 -player.height / 2;
    cpu.speed = 6;

    cpu_2.width = 25;
    cpu_2.height = 120;
    cpu_2.x = screen_width - player.width - 10;
    cpu_2.y = screen_height / 2 -player.height / 2;
    cpu_2.speed = 6;

    //Game loops

    while(!WindowShouldClose()){

        switch(currentScrean){

            case Start_menu:

            if(IsKeyPressed(KEY_ENTER)){
                currentScrean = Count_down;
                ball.speed_x = 7;
                ball.speed_y = 7;
            }

            case Count_down:

            if(frames > 340){
                currentScrean = Game_play;
            }

        }

        BeginDrawing();

        if(currentScrean == Start_menu){

            ball.Update();
            cpu_2.Update(ball.y, ball.x, cpu_2.x);
            cpu.Update(ball.y, ball.x, cpu.x);

            if(CheckCollisionCircleRec(Vector2{ball.x, ball.y}, ball.radius, Rectangle{cpu_2.x ,cpu_2.y, cpu_2.width, cpu_2.height})){
                ball.speed_x *= -1;
            }

            if(CheckCollisionCircleRec(Vector2{ball.x, ball.y}, ball.radius, Rectangle{cpu.x ,cpu.y, cpu.width, cpu.height})){
                ball.speed_x *= -1;
            }

            //Drawing

            ClearBackground(DARKBLUE);
            DrawRectangle(screen_width / 2, 0, screen_width/2, screen_height, BLUE);
            DrawCircle(screen_width/2, screen_height / 2, 150, SKYBLUE); 
            DrawLine(screen_width / 2, 0 , screen_width / 2, screen_height, WHITE);
            
            ball.Draw();
            cpu_2.Draw();
            cpu.Draw();

            DrawText("MENU SCREEN", screen_width / 2 - 165, 20, 40, RAYWHITE); // (text, x-pos, y-pos, fontsize, color)
            DrawText("PRESS ENTER TO START", screen_width / 2 - 185, screen_height / 2 , 30, RAYWHITE); 
        }

        else if(currentScrean == Game_play){

            ball.Update();
            player.Update();
            cpu.Update(ball.y, ball.x, cpu.x);

            if(CheckCollisionCircleRec(Vector2{ball.x, ball.y}, ball.radius, Rectangle{player.x ,player.y, player.width, player.height})){
                ball.speed_x *= -1;
            }

            if(CheckCollisionCircleRec(Vector2{ball.x, ball.y}, ball.radius, Rectangle{cpu.x ,cpu.y, cpu.width, cpu.height})){
                ball.speed_x *= -1;
            }

            //Drawing

            ClearBackground(Dark_Green);
            DrawRectangle(screen_width / 2, 0, screen_width/2, screen_height, Green);
            DrawCircle(screen_width/2, screen_height / 2, 150, Light_Green );
            DrawLine(screen_width / 2, 0 , screen_width / 2, screen_height, WHITE);

            ball.Draw();
            player.Draw();
            cpu.Draw();

            DrawText(TextFormat("%i", cpu_score), screen_width / 4 -20, 20, 80 ,WHITE); 
            DrawText(TextFormat("%i", player_score), 3 * screen_width / 4 -20, 20, 80 ,WHITE);
        }

        else if(currentScrean = Count_down){

            ClearBackground(Light_Green);
            DrawText("GAME STARTS IN", screen_width / 2 - 165, 20, 40, RAYWHITE);

            double seconds = (double)frames / 60;
            
            if (seconds <= 5){
                for(int i = 0; i <= 5; i++){
                    if(seconds == frame_needed[i]){
                        count--;
                    }
                }
                DrawText(TextFormat("%i", count), screen_width / 2, screen_height / 2, 70, GRAY);
            }
            else{
                DrawText("GO", screen_width / 2 - 50, screen_height / 2, 70, GRAY);
            }

            frames++;
        }

        EndDrawing();
    }
        
    CloseWindow();
    
    return 0;
}
