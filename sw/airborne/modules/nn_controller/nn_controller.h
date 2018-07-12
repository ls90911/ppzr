/*
 * Copyright (C) Shuo Li
 *
 * This file is part of paparazzi
 *
 * paparazzi is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2, or (at your option)
 * any later version.
 *
 * paparazzi is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with paparazzi; see the file COPYING.  If not, see
 * <http://www.gnu.org/licenses/>.
 */
/**
 * @file "modules/nn_controller/nn_controller.h"
 * @author Shuo Li
 * This module only runs in guidance_module mode. It calls funtion of NN controller and get the optimal input of the sysem, then it sends thrust and pitch rate command to low level controller.
 */

#ifndef NN_CONTROLLER_H
#define NN_CONTROLLER_H

#include "firmwares/rotorcraft/autopilot.h"


extern void clear_nn_run(void);
extern void set_nn_run(void);
extern bool get_nn_run(void);


#endif

