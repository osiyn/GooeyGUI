/**
 * @file gooey_checkbox.h
 * @brief Header file for the GooeyCheckbox module.
 * @author Yassine Ahmed Ali
 * @copyright GNU General Public License v3.0
 * 
 * Provides functions to create, handle, and draw checkboxes within a GooeyWindow.
 */

#ifndef GOOEY_CHECKBOX_INTERNAL_H
#define GOOEY_CHECKBOX_INTERNAL_H

#include "common/gooey_common.h"
#if(ENABLE_CHECKBOX)
/**
 * @brief Handles click events for checkboxes within the specified window.
 *
 * This function checks whether a click event occurred on a checkbox
 * and updates its state accordingly.
 *
 * @param win The window containing the checkbox.
 * @param x The x-coordinate of the click event.
 * @param y The y-coordinate of the click event.
 * @return True if a checkbox was clicked and its state changed, false otherwise.
 */
bool GooeyCheckbox_HandleClick(GooeyWindow *win, int x, int y);

/**
 * @brief Draws all checkboxes within the specified window.
 *
 * This function renders all checkboxes that belong to the given window,
 * ensuring they are displayed with their correct state (checked/unchecked).
 *
 * @param win The window containing the checkboxes.
 */
void GooeyCheckbox_Draw(GooeyWindow *win);
#endif
#endif // GOOEY_CHECKBOX_H
