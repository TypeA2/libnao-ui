/*  This file is part of libnao-ui.

    libnao-ui is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    libnao-ui is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with libnao-ui.  If not, see <https://www.gnu.org/licenses/>.   */

#pragma once

#include <nao/object.h>

namespace nao::ui {
    class widget : public object {
        class widget_private;
        std::unique_ptr<widget_private> _d;

        public:
        widget(const widget&) = delete;
        widget& operator=(const widget&) = delete;

        ~widget();

        /**
         * @brief Constructs a widget
         * @param parent - The parent widget to attach to
         * @note If no parent is specified, the widget will be a standalone window.
         */
        widget(widget* parent = nullptr);

        protected:
        /**
         * @brief Handles an event.
         * @param ev - The even that's being handled.
         * @return Whether the event was handled.
        */
        virtual bool event(nao::event& ev) override = 0;
    };
}
