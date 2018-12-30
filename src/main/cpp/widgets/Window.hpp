#pragma once

#include <string>
#include "Widget.hpp"

namespace Blame::Widgets {
    class Window : public Widget {
    public:
        Window(Console *console, std::string title_text, int column, int row, int width, int height);

        void redraw() override;

        void arrowKey(Blame::Util::ArrowKey arrowKey) override;

    protected:
        std::string title_text;

        std::string symbol_title_intersect_left;
        std::string symbol_title_intersect_right;

        std::string colour_background_title;

        std::string symbol_minimize;
        std::string symbol_maximize;
        std::string symbol_restore;
        std::string symbol_close;
    };
}