#ifndef MWGUI_ALCHEMY_H
#define MWGUI_ALCHEMY_H

#include "window_base.hpp"

namespace MWGui
{
    class AlchemyWindow : public WindowBase
    {
    public:
        AlchemyWindow(WindowManager& parWindowManager);

    protected:
        MyGUI::Button* mCreateButton;
        MyGUI::Button* mCancelButton;

        void onCancelButtonClicked(MyGUI::Widget* _sender);
        void onCreateButtonClicked(MyGUI::Widget* _sender);
    };
}

#endif
