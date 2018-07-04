#include "tk.h"
#include "base/resource_manager.h"
#ifndef WITH_FS_RES
#include "res/inc/strings/en_US.data"
#include "res/inc/strings/zh_CN.data"
#include "res/inc/theme/button.data"
#include "res/inc/theme/calibration.data"
#include "res/inc/theme/default.data"
#include "res/inc/theme/dialog1.data"
#include "res/inc/theme/keyboard.data"
#include "res/inc/ui/animation.data"
#include "res/inc/ui/animator.data"
#include "res/inc/ui/auto_play.data"
#include "res/inc/ui/basic.data"
#include "res/inc/ui/bottom.data"
#include "res/inc/ui/button.data"
#include "res/inc/ui/calibration.data"
#include "res/inc/ui/dialog1.data"
#include "res/inc/ui/dialog2.data"
#include "res/inc/ui/dragger.data"
#include "res/inc/ui/edit.data"
#include "res/inc/ui/fade.data"
#include "res/inc/ui/htranslate.data"
#include "res/inc/ui/image.data"
#include "res/inc/ui/kb_ascii.data"
#include "res/inc/ui/kb_default.data"
#include "res/inc/ui/kb_float.data"
#include "res/inc/ui/kb_hex.data"
#include "res/inc/ui/kb_int.data"
#include "res/inc/ui/kb_phone.data"
#include "res/inc/ui/kb_ufloat.data"
#include "res/inc/ui/kb_uint.data"
#include "res/inc/ui/keyboard.data"
#include "res/inc/ui/locale.data"
#include "res/inc/ui/lua.data"
#include "res/inc/ui/main.data"
#include "res/inc/ui/memtest.data"
#include "res/inc/ui/preload.data"
#include "res/inc/ui/scroll_bar.data"
#include "res/inc/ui/scroll_bar_h.data"
#include "res/inc/ui/scroll_view.data"
#include "res/inc/ui/scroll_view_h.data"
#include "res/inc/ui/scroll_view_v.data"
#include "res/inc/ui/slide_view.data"
#include "res/inc/ui/slide_view_h.data"
#include "res/inc/ui/slide_view_v.data"
#include "res/inc/ui/spinbox.data"
#include "res/inc/ui/top.data"
#include "res/inc/ui/vtranslate.data"
#ifdef WITH_STB_IMAGE
#include "res/inc/images/arrow_down_n.res"
#include "res/inc/images/arrow_down_o.res"
#include "res/inc/images/arrow_down_p.res"
#include "res/inc/images/arrow_left_n.res"
#include "res/inc/images/arrow_left_o.res"
#include "res/inc/images/arrow_left_p.res"
#include "res/inc/images/arrow_right_n.res"
#include "res/inc/images/arrow_right_o.res"
#include "res/inc/images/arrow_right_p.res"
#include "res/inc/images/arrow_up_n.res"
#include "res/inc/images/arrow_up_o.res"
#include "res/inc/images/arrow_up_p.res"
#include "res/inc/images/backspace.res"
#include "res/inc/images/bg800x480.res"
#include "res/inc/images/bricks.res"
#include "res/inc/images/checked.res"
#include "res/inc/images/cross.res"
#include "res/inc/images/dialog_title.res"
#include "res/inc/images/earth.res"
#include "res/inc/images/edit_clear_n.res"
#include "res/inc/images/edit_clear_o.res"
#include "res/inc/images/edit_clear_p.res"
#include "res/inc/images/find.res"
#include "res/inc/images/green_btn_n.res"
#include "res/inc/images/green_btn_o.res"
#include "res/inc/images/green_btn_p.res"
#include "res/inc/images/info.res"
#include "res/inc/images/left_off.res"
#include "res/inc/images/left_on.res"
#include "res/inc/images/logo.res"
#include "res/inc/images/message.res"
#include "res/inc/images/middle_off.res"
#include "res/inc/images/middle_on.res"
#include "res/inc/images/muted.res"
#include "res/inc/images/play_n.res"
#include "res/inc/images/play_o.res"
#include "res/inc/images/play_p.res"
#include "res/inc/images/question.res"
#include "res/inc/images/radio_checked.res"
#include "res/inc/images/radio_unchecked.res"
#include "res/inc/images/red_btn_n.res"
#include "res/inc/images/red_btn_o.res"
#include "res/inc/images/red_btn_p.res"
#include "res/inc/images/rgb.res"
#include "res/inc/images/rgba.res"
#include "res/inc/images/right_off.res"
#include "res/inc/images/right_on.res"
#include "res/inc/images/shift.res"
#include "res/inc/images/shifton.res"
#include "res/inc/images/slider_bg.res"
#include "res/inc/images/slider_drag.res"
#include "res/inc/images/slider_drag_o.res"
#include "res/inc/images/slider_drag_p.res"
#include "res/inc/images/slider_fg.res"
#include "res/inc/images/slider_v_bg.res"
#include "res/inc/images/slider_v_fg.res"
#include "res/inc/images/unchecked.res"
#include "res/inc/images/unmuted.res"
#include "res/inc/images/warn.res"
#else
#include "res/inc/images/arrow_down_n.data"
#include "res/inc/images/arrow_down_o.data"
#include "res/inc/images/arrow_down_p.data"
#include "res/inc/images/arrow_left_n.data"
#include "res/inc/images/arrow_left_o.data"
#include "res/inc/images/arrow_left_p.data"
#include "res/inc/images/arrow_right_n.data"
#include "res/inc/images/arrow_right_o.data"
#include "res/inc/images/arrow_right_p.data"
#include "res/inc/images/arrow_up_n.data"
#include "res/inc/images/arrow_up_o.data"
#include "res/inc/images/arrow_up_p.data"
#include "res/inc/images/backspace.data"
#include "res/inc/images/bg800x480.data"
#include "res/inc/images/bricks.data"
#include "res/inc/images/checked.data"
#include "res/inc/images/cross.data"
#include "res/inc/images/dialog_title.data"
#include "res/inc/images/earth.data"
#include "res/inc/images/edit_clear_n.data"
#include "res/inc/images/edit_clear_o.data"
#include "res/inc/images/edit_clear_p.data"
#include "res/inc/images/find.data"
#include "res/inc/images/green_btn_n.data"
#include "res/inc/images/green_btn_o.data"
#include "res/inc/images/green_btn_p.data"
#include "res/inc/images/info.data"
#include "res/inc/images/left_off.data"
#include "res/inc/images/left_on.data"
#include "res/inc/images/logo.data"
#include "res/inc/images/message.data"
#include "res/inc/images/middle_off.data"
#include "res/inc/images/middle_on.data"
#include "res/inc/images/muted.data"
#include "res/inc/images/play_n.data"
#include "res/inc/images/play_o.data"
#include "res/inc/images/play_p.data"
#include "res/inc/images/question.data"
#include "res/inc/images/radio_checked.data"
#include "res/inc/images/radio_unchecked.data"
#include "res/inc/images/red_btn_n.data"
#include "res/inc/images/red_btn_o.data"
#include "res/inc/images/red_btn_p.data"
#include "res/inc/images/rgb.data"
#include "res/inc/images/rgba.data"
#include "res/inc/images/right_off.data"
#include "res/inc/images/right_on.data"
#include "res/inc/images/shift.data"
#include "res/inc/images/shifton.data"
#include "res/inc/images/slider_bg.data"
#include "res/inc/images/slider_drag.data"
#include "res/inc/images/slider_drag_o.data"
#include "res/inc/images/slider_drag_p.data"
#include "res/inc/images/slider_fg.data"
#include "res/inc/images/slider_v_bg.data"
#include "res/inc/images/slider_v_fg.data"
#include "res/inc/images/unchecked.data"
#include "res/inc/images/unmuted.data"
#include "res/inc/images/warn.data"
#endif /*WITH_STB_IMAGE*/
#ifdef WITH_STB_FONT
#ifdef WITH_MINI_FONT
#include "res/inc/fonts/default.mini.res"
#else /*WITH_MINI_FONT*/
#include "res/inc/fonts/default.res"
#endif /*WITH_MINI_FONT*/
#else  /*WITH_STB_FONT*/
#include "res/inc/fonts/default.data"
#endif /*WITH_STB_FONT*/
#endif /*WITH_FS_RES*/

ret_t resource_init(void) {
  resource_manager_t* rm = resource_manager();

#ifdef WITH_FS_RES
  resource_manager_load(rm, RESOURCE_TYPE_THEME, "default");
  resource_manager_load(rm, RESOURCE_TYPE_FONT, "default");
#else
  resource_manager_add(rm, font_default);
  resource_manager_add(rm, image_arrow_down_n);
  resource_manager_add(rm, image_arrow_down_o);
  resource_manager_add(rm, image_arrow_down_p);
  resource_manager_add(rm, image_arrow_left_n);
  resource_manager_add(rm, image_arrow_left_o);
  resource_manager_add(rm, image_arrow_left_p);
  resource_manager_add(rm, image_arrow_right_n);
  resource_manager_add(rm, image_arrow_right_o);
  resource_manager_add(rm, image_arrow_right_p);
  resource_manager_add(rm, image_arrow_up_n);
  resource_manager_add(rm, image_arrow_up_o);
  resource_manager_add(rm, image_arrow_up_p);
  resource_manager_add(rm, image_backspace);
  resource_manager_add(rm, image_bg800x480);
  resource_manager_add(rm, image_bricks);
  resource_manager_add(rm, image_checked);
  resource_manager_add(rm, image_cross);
  resource_manager_add(rm, image_dialog_title);
  resource_manager_add(rm, image_earth);
  resource_manager_add(rm, image_edit_clear_n);
  resource_manager_add(rm, image_edit_clear_o);
  resource_manager_add(rm, image_edit_clear_p);
  resource_manager_add(rm, image_find);
  resource_manager_add(rm, image_green_btn_n);
  resource_manager_add(rm, image_green_btn_o);
  resource_manager_add(rm, image_green_btn_p);
  resource_manager_add(rm, image_info);
  resource_manager_add(rm, image_left_off);
  resource_manager_add(rm, image_left_on);
  resource_manager_add(rm, image_logo);
  resource_manager_add(rm, image_message);
  resource_manager_add(rm, image_middle_off);
  resource_manager_add(rm, image_middle_on);
  resource_manager_add(rm, image_muted);
  resource_manager_add(rm, image_play_n);
  resource_manager_add(rm, image_play_o);
  resource_manager_add(rm, image_play_p);
  resource_manager_add(rm, image_question);
  resource_manager_add(rm, image_radio_checked);
  resource_manager_add(rm, image_radio_unchecked);
  resource_manager_add(rm, image_red_btn_n);
  resource_manager_add(rm, image_red_btn_o);
  resource_manager_add(rm, image_red_btn_p);
  resource_manager_add(rm, image_rgb);
  resource_manager_add(rm, image_rgba);
  resource_manager_add(rm, image_right_off);
  resource_manager_add(rm, image_right_on);
  resource_manager_add(rm, image_shift);
  resource_manager_add(rm, image_shifton);
  resource_manager_add(rm, image_slider_bg);
  resource_manager_add(rm, image_slider_drag);
  resource_manager_add(rm, image_slider_drag_o);
  resource_manager_add(rm, image_slider_drag_p);
  resource_manager_add(rm, image_slider_fg);
  resource_manager_add(rm, image_slider_v_bg);
  resource_manager_add(rm, image_slider_v_fg);
  resource_manager_add(rm, image_unchecked);
  resource_manager_add(rm, image_unmuted);
  resource_manager_add(rm, image_warn);
  resource_manager_add(rm, strings_en_US);
  resource_manager_add(rm, strings_zh_CN);
  resource_manager_add(rm, theme_button);
  resource_manager_add(rm, theme_calibration);
  resource_manager_add(rm, theme_default);
  resource_manager_add(rm, theme_dialog1);
  resource_manager_add(rm, theme_keyboard);
  resource_manager_add(rm, ui_animation);
  resource_manager_add(rm, ui_animator);
  resource_manager_add(rm, ui_auto_play);
  resource_manager_add(rm, ui_basic);
  resource_manager_add(rm, ui_bottom);
  resource_manager_add(rm, ui_button);
  resource_manager_add(rm, ui_calibration);
  resource_manager_add(rm, ui_dialog1);
  resource_manager_add(rm, ui_dialog2);
  resource_manager_add(rm, ui_dragger);
  resource_manager_add(rm, ui_edit);
  resource_manager_add(rm, ui_fade);
  resource_manager_add(rm, ui_htranslate);
  resource_manager_add(rm, ui_image);
  resource_manager_add(rm, ui_kb_ascii);
  resource_manager_add(rm, ui_kb_default);
  resource_manager_add(rm, ui_kb_float);
  resource_manager_add(rm, ui_kb_hex);
  resource_manager_add(rm, ui_kb_int);
  resource_manager_add(rm, ui_kb_phone);
  resource_manager_add(rm, ui_kb_ufloat);
  resource_manager_add(rm, ui_kb_uint);
  resource_manager_add(rm, ui_keyboard);
  resource_manager_add(rm, ui_locale);
  resource_manager_add(rm, ui_lua);
  resource_manager_add(rm, ui_main);
  resource_manager_add(rm, ui_memtest);
  resource_manager_add(rm, ui_preload);
  resource_manager_add(rm, ui_scroll_bar);
  resource_manager_add(rm, ui_scroll_bar_h);
  resource_manager_add(rm, ui_scroll_view);
  resource_manager_add(rm, ui_scroll_view_h);
  resource_manager_add(rm, ui_scroll_view_v);
  resource_manager_add(rm, ui_slide_view);
  resource_manager_add(rm, ui_slide_view_h);
  resource_manager_add(rm, ui_slide_view_v);
  resource_manager_add(rm, ui_spinbox);
  resource_manager_add(rm, ui_top);
  resource_manager_add(rm, ui_vtranslate);
#endif

  tk_init_resources();
  return RET_OK;
}
