#ifndef DCON_TRAP_INVALID_STORE
#define DCON_TRAP_INVALID_STORE 1
#endif

#include "common_types.cpp"
#include "system_state.cpp"
#ifndef INCREMENTAL
#include "parsers.cpp"
#include "text.cpp"
#include "float_from_chars.cpp"
#include "fonts.cpp"
#include "texture.cpp"
#include "date_interface.cpp"
#include "serialization.cpp"
#include "nations.cpp"
#include "culture.cpp"
#include "military.cpp"
#include "modifiers.cpp"
#include "province.cpp"
#include "triggers.cpp"
#include "fif_triggers.cpp"
#include "effects.cpp"
#include "economy.cpp"
#include "demographics.cpp"
#include "bmfont.cpp"
#include "rebels.cpp"
#include "politics.cpp"
#include "events.cpp"
#include "gui_graphics.cpp"
#include "gui_common_elements.cpp"
#include "widgets/table.cpp"
#include "gui_trigger_tooltips.cpp"
#include "gui_effect_tooltips.cpp"
#include "gui_modifier_tooltips.cpp"
#include "gui_leader_tooltip.cpp"
#include "gui_leader_select.cpp"
#include "gui_production_window.cpp"
#include "gui_province_window.cpp"
#include "gui_population_window.cpp"
#include "gui_budget_window.cpp"
#include "immediate_mode.cpp"
#include "economy_viewer.cpp"
#include "gui_technology_window.cpp"
#include "gui_error_window.cpp"
#include "game_scene.cpp"
#include "commands.cpp"
#include "network.cpp"
#include "diplomatic_messages.cpp"
#include "notifications.cpp"
#include "map_tooltip.cpp"
#include "unit_tooltip.cpp"
#include "ai.cpp"
#include "map_modes.cpp"
#include "platform_specific.cpp"
#include "opengl_wrapper.cpp"
#include "prng.cpp"
#include "blake2.cpp"
#include "zstd.cpp"
#include "pcp.cpp"
#endif
#include "gui_element_types.cpp"
#include "gui_main_menu.cpp"
#include "gui_console.cpp"
#include "gui_event.cpp"
#include "gui_message_settings_window.cpp"
