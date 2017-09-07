// ----------------------------------------------------------------------------
// 3x2.cpp
//
//
// Authors:
// Peter Polidoro polidorop@janelia.hhmi.org
// ----------------------------------------------------------------------------
#include "3x2.h"


#if defined(__MK20DX256__)

namespace step_dir_controller
{
namespace constants
{
const modular_server::HardwareInfo hardware_info =
  {
    .name_ptr=&hardware_name,
    .part_number=1241,
    .version_major=1,
    .version_minor=0,
  };

const size_t cs_pins[CONTROLLER_COUNT_MAX] =
  {
    10,
  };
const size_t enable_pins[CHANNEL_COUNT_MAX] =
  {
    2,
    3,
    4,
  };

// Interrupts

// Units

// Properties
const long channel_count_default = CHANNEL_COUNT_MAX;

const long steps_per_position_units_default[CHANNEL_COUNT_MAX] =
  {
    steps_per_position_units_element_default,
    steps_per_position_units_element_default,
    steps_per_position_units_element_default,
  };

const long velocity_max_default[CHANNEL_COUNT_MAX] =
  {
    velocity_max_element_default,
    velocity_max_element_default,
    velocity_max_element_default,
  };

const long velocity_min_default[CHANNEL_COUNT_MAX] =
  {
    velocity_min_element_default,
    velocity_min_element_default,
    velocity_min_element_default,
  };

const long acceleration_max_default[CHANNEL_COUNT_MAX] =
  {
    acceleration_max_element_default,
    acceleration_max_element_default,
    acceleration_max_element_default,
  };

const ConstantString * const enable_polarity_default[CHANNEL_COUNT_MAX] =
  {
    &polarity_high,
    &polarity_high,
    &polarity_high,
  };

const bool left_switch_stop_enabled_default[CHANNEL_COUNT_MAX] =
  {
    false,
    false,
    false,
  };

const bool right_switch_stop_enabled_default[CHANNEL_COUNT_MAX] =
  {
    false,
    false,
    false,
  };

const bool switch_soft_stop_enabled_default[CHANNEL_COUNT_MAX] =
  {
    false,
    false,
    false,
  };

const long home_velocity_default[CHANNEL_COUNT_MAX] =
  {
    home_velocity_element_default,
    home_velocity_element_default,
    home_velocity_element_default,
  };

// Parameters

// Functions

// Callbacks

// Errors
}
}
#endif
