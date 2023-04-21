class TB_Settings {
      public:
	class Screen {
	      public:
		int frame_rate;
		int screen_width;
		int screen_height;

		void screen_settings(int width, int height, int frame_rate);
	};

	class Sound {
		int volume;
	};

	Screen app_screen_config;
	Sound app_sound_config;
};