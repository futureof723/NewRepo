#include <cstdlib>
#include <cstdint>
#include <cstdio>
#include <cstring>

typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
typedef float f32;
typedef double f64;


#define WIDTH 10
#define HEIGHT 22
#define VISIBLE_HEIGHT 20

struct Tetrino
{
	const u8 *data;
	const s32 side;
};

inline Tetrino

tetrino(const u8* data, s32 side)
{
	return { data, side };
}

const u8 TETRINO_1[] = {
	0, 0, 0, 0,
	1, 1, 1, 1,
	0, 0, 0, 0,
	0, 0, 0, 0
};

const u8 TETRINO_2[] = {
	2, 2,
	2, 2,
};

const u8 TETRINO_3[] = {
	0, 0, 0,
	3, 3, 3,
	0, 3, 0
};
const tetrino TETRINOS[] = {
	tetrino(TETRINO_1, 4),
	tetrino(TETRINO_2, 2),
	tetrino(TETRINO_3, 3)
};

enum Game_Phase
{
	GAME_PHASE_PLAY
};

struct Piece_State
{
	u8 tetrino_index;
	s32 offset_row;
	s32 offset_col;
	s32 rotation;

};

struct Game_State
{
	u8 board[WIDTH * HEIGHT];
	Piece_State piece;
	
	Game_Phase phase;
};

inline u8

matrix_get(const u8 *values, s32 width, s32 row, s32 col)
{
	s32 index = row * width + col;
	return values[index];
}

inline void
matrix_set(u8* values, s32 width, s32 row, s32 col, u8 value)
{
	s32 index = row * width + col;
	values[index] = value;
}

void update_game_play(Game_State *game)
{

}

void update_game(Game_State *game)
{
	switch (game->phase)
	{
	case GAME_PHASE_PLAY:
		return update_game_play(game);
			break;
	}
}



int main()
{

	return 0;
}