#include <Novice.h>

const char kWindowTitle[] = "タイトル";

struct Vector2
{
	float x;
	float y;
};

struct Player
{
	Vector2 pos;
	float radius;
	float speed;
};

// Windowsアプリでのエントリーポイント(main関数)
int WINAPI WinMain(_In_ HINSTANCE, _In_opt_ HINSTANCE, _In_ LPSTR, _In_ int) {

	// ライブラリの初期化
	Novice::Initialize(kWindowTitle, 1920, 1080);

	// キー入力結果を受け取る箱
	char keys[256] = {0};
	char preKeys[256] = {0};

	Player player
	{
		{ 30.0f,30.0f },
		40.0f,
		10.0f
	};

	// ウィンドウの×ボタンが押されるまでループ
	while (Novice::ProcessMessage() == 0) {
		// フレームの開始
		Novice::BeginFrame();

		// キー入力を受け取る
		memcpy(preKeys, keys, 256);
		Novice::GetHitKeyStateAll(keys);

		///
		/// ↓更新処理ここから
		///



		///
		/// ↑更新処理ここまで
		///

		///
		/// ↓描画処理ここから
		///
 a
		Novice::DrawEllipse(
			static_cast<int>(player.pos.x),
			static_cast<int>(player.pos.y),
			static_cast<int>(player.radius),
			static_cast<int>(player.radius),
			0.0f, WHITE, kFillModeSolid
		);

		Novice::DrawBox(940, 520, 100, 100, 0.0f, BLACK, kFillModeSolid);
		Novice::DrawEllipse(200, 200, 100, 100, 0.0f, BLACK, kFillModeSolid);
		Novice::ScreenPrintf(600, 200, "テスト用でういっす");

		Novice::ScreenPrintf(100, 100, "テスト用ですよ！！！早く気づいて！！！！feature");
		Novice::ScreenPrintf(100, 100, "テスト用ですよ！！！早く気づいて！！！！feature");
		Novice::ScreenPrintf(100, 100, "テスト用ですよ！！！早く気づいて！！！！feature");
		Novice::ScreenPrintf(100, 100, "テスト用ですよ！！！早く気づいて！！！！feature");
		Novice::ScreenPrintf(100, 100, "テスト用ですよ！！！早く気づいて！！！！feature");
 master

		///
		/// ↑描画処理ここまで
		///

		// フレームの終了
		Novice::EndFrame();

		// ESCキーが押されたらループを抜ける
		if (preKeys[DIK_ESCAPE] == 0 && keys[DIK_ESCAPE] != 0) {
			break;
		}
	}

	// ライブラリの終了
	Novice::Finalize();
	return 0;
}
