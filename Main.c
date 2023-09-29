#include <stdio.h>
#include <stdbool.h>
#include <SDL.h>
#include "constants.h"
#include <SDL_ttf.h>

// Clase Score
typedef struct {
    const char* font;
    int value;
} Score;

void Score_ctor(Score* score, const char* font_name) {
    score->font = font_name;
    score->value = 0;
}

int Score_GetValue(const Score* score) {
    return score->value;
}

void Score_Update(Score* score, int new_value) {
    score->value = new_value;
}

// Clase ObjectGeneral
typedef struct {
    float vel_x;
    float vel_y;
    float width;
    float height;
    float x;
    float y;
} ObjectGeneral;

void ObjectGeneral_ctor(ObjectGeneral* obj) {
    obj->vel_x = 0.0;
    obj->vel_y = 0.0;
    obj->width = 0.0;
    obj->height = 0.0;
    obj->x = 0.0;
    obj->y = 0.0;
}

// Clase Paddle
typedef struct {
    ObjectGeneral base;
} Paddle;

void Paddle_ctor(Paddle* paddle) {
    ObjectGeneral_ctor(&paddle->base);
}

void Paddle_Builder(Paddle* paddle) {
    // Implementación de Builder...
}

void Paddle_Collider(Paddle* paddle) {
    // Implementación de Collider...
}

void Paddle_Movement(Paddle* paddle) {
    // Implementación de Movement...
}

// Clase PowerUpGeneral
typedef struct {
    ObjectGeneral base;
} PowerUpGeneral;

void PowerUpGeneral_ctor(PowerUpGeneral* powerup) {
    ObjectGeneral_ctor(&powerup->base);
}

void PowerUpGeneral_Collider(PowerUpGeneral* powerup) {
    // Implementación de Collider...
}

// Clase PowerUp1
typedef struct {
    PowerUpGeneral base;
    int color;
    float width;
    float height;
} PowerUp1;

void PowerUp1_ctor(PowerUp1* powerup) {
    PowerUpGeneral_ctor(&powerup->base);
    powerup->color = 0;
    powerup->width = 0.0;
    powerup->height = 0.0;
}

void PowerUp1_RangeStick(PowerUp1* powerup) {
    // Implementación de RangeStick...
}

// Clase PowerUp2
typedef struct {
    PowerUpGeneral base;
    int color;
    float width;
    float height;
} PowerUp2;

void PowerUp2_ctor(PowerUp2* powerup) {
    PowerUpGeneral_ctor(&powerup->base);
    powerup->color = 0;
    powerup->width = 0.0;
    powerup->height = 0.0;
}

void PowerUp2_LowSpeed(PowerUp2* powerup) {
    // Implementación de LowSpeed...
}

// Clase PowerUp3
typedef struct {
    PowerUpGeneral base;
    int color;
    float width;
    float height;
} PowerUp3;

void PowerUp3_ctor(PowerUp3* powerup) {
    PowerUpGeneral_ctor(&powerup->base);
    powerup->color = 0;
    powerup->width = 0.0;
    powerup->height = 0.0;
}

void PowerUp3_IncreasePoints(PowerUp3* powerup) {
    // Implementación de IncreasePoints...
}

// Resto del código principal
int score = 0;
int game_is_running = false;
float ball_speed = 300.0;

SDL_Window* window = NULL;
SDL_Renderer* renderer = NULL;
TTF_Font* font = NULL;
SDL_Texture* text_texture = NULL;
int last_frame_time = 0;

struct pongEvent
{
    int timestamp;
    int ball_x;
    int ball_y;
    int paddle_x;
    int paddle_y;
    int score;
};

struct Node
{
    struct pongEvent event;
    struct Node* next;
};
struct Node* event_list_head = NULL;

struct game_object
{
    float x;
    float y;
    float width;
    float height;
    float vel_x;
    float vel_y;
} ball, paddle;

void save_event_history(struct Node* event_list_head, const char* filename)
{
    // Implementación de save_event_history...
}

void add_event(struct Node** head, struct pongEvent new_event)
{
    // Implementación de add_event...
}

int initialize_window(void) {
    // Implementación de initialize_window...
}

void process_input(void)
{
    // Implementación de process_input...
}

SDL_Texture* render_text(const char* text, TTF_Font* font, SDL_Color color)
{
    // Implementación de render_text...
}

void update_score_text()
{
    // Implementación de update_score_text...
}

void setup(void)
{
    // Implementación de setup...
