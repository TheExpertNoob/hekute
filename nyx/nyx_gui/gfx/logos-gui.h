/*
 * Copyright (c) 2018-2024 CTCaer
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms and conditions of the GNU General Public License,
 * version 2, as published by the Free Software Foundation.
 *
 * This program is distributed in the hope it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef _LOGOS_GUI_H_
#define _LOGOS_GUI_H_

#include <bdk.h>

#include <libs/lv_conf.h>
#include <libs/lvgl/lv_draw/lv_draw_img.h>

#define HEKATE_LOGO

const u8 touch_cursor_map[] = {
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0x37, 0x37, 0x37, 0x00,
	0x16, 0x16, 0x16, 0x54, 0x0E, 0x0E, 0x0E, 0x75, 0x1F, 0x1F, 0x1F, 0x20,
	0x0C, 0x0C, 0x0C, 0x00, 0x1D, 0x1D, 0x1D, 0x00, 0x37, 0x37, 0x37, 0x00,
	0x32, 0x32, 0x32, 0x00, 0x31, 0x31, 0x31, 0x00, 0x2E, 0x2E, 0x2E, 0x00,
	0x28, 0x28, 0x28, 0x00, 0x34, 0x34, 0x34, 0x00, 0x20, 0x20, 0x20, 0x00,
	0x12, 0x12, 0x12, 0x00, 0x17, 0x17, 0x17, 0x00, 0x17, 0x17, 0x17, 0x00,
	0x17, 0x17, 0x17, 0x00, 0x17, 0x17, 0x17, 0x00, 0x17, 0x17, 0x17, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0x26, 0x26, 0x26, 0x59,
	0x41, 0x41, 0x41, 0xFD, 0x45, 0x45, 0x45, 0xFF, 0x0D, 0x0D, 0x0D, 0xC6,
	0x0B, 0x0B, 0x0B, 0x00, 0x1F, 0x1F, 0x1F, 0x00, 0x39, 0x39, 0x39, 0x00,
	0x33, 0x33, 0x33, 0x00, 0x33, 0x33, 0x33, 0x00, 0x30, 0x30, 0x30, 0x00,
	0x28, 0x28, 0x28, 0x00, 0x34, 0x34, 0x34, 0x00, 0x20, 0x20, 0x20, 0x00,
	0x12, 0x12, 0x12, 0x00, 0x17, 0x17, 0x17, 0x00, 0x17, 0x17, 0x17, 0x00,
	0x17, 0x17, 0x17, 0x00, 0x17, 0x17, 0x17, 0x00, 0x17, 0x17, 0x17, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0x29, 0x29, 0x29, 0xFF,
	0xEE, 0xEE, 0xEE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x77, 0x77, 0x77, 0xFF,
	0x00, 0x00, 0x00, 0x97, 0x1E, 0x1E, 0x1E, 0x00, 0x17, 0x17, 0x17, 0x50,
	0x1D, 0x1D, 0x1D, 0x47, 0x10, 0x10, 0x10, 0x75, 0x14, 0x14, 0x14, 0x62,
	0x26, 0x26, 0x26, 0x00, 0x38, 0x38, 0x38, 0x00, 0x22, 0x22, 0x22, 0x00,
	0x11, 0x11, 0x11, 0x00, 0x17, 0x17, 0x17, 0x00, 0x17, 0x17, 0x17, 0x00,
	0x17, 0x17, 0x17, 0x00, 0x17, 0x17, 0x17, 0x00, 0x17, 0x17, 0x17, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0x2B, 0x2B, 0x2B, 0xFF,
	0xD5, 0xD5, 0xD5, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
	0x34, 0x34, 0x34, 0xFF, 0x0F, 0x0F, 0x0F, 0xCB, 0x6C, 0x6C, 0x6C, 0xFF,
	0x3E, 0x3E, 0x3E, 0xFF, 0x74, 0x74, 0x74, 0xFF, 0x42, 0x42, 0x42, 0xFF,
	0x00, 0x00, 0x00, 0xCA, 0x14, 0x14, 0x14, 0xBC, 0x15, 0x15, 0x15, 0x34,
	0x13, 0x13, 0x13, 0x00, 0x14, 0x14, 0x14, 0x00, 0x14, 0x14, 0x14, 0x00,
	0x14, 0x14, 0x14, 0x00, 0x14, 0x14, 0x14, 0x00, 0x14, 0x14, 0x14, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0x17, 0x17, 0x17, 0xB8,
	0x7E, 0x7E, 0x7E, 0xFF, 0xE9, 0xE9, 0xE9, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
	0xB8, 0xB8, 0xB8, 0xFF, 0x36, 0x36, 0x36, 0xFF, 0xF4, 0xF4, 0xF4, 0xFF,
	0xEA, 0xEA, 0xEA, 0xFF, 0xB3, 0xB3, 0xB3, 0xFF, 0xCF, 0xCF, 0xCF, 0xFF,
	0x9C, 0x9C, 0x9C, 0xFF, 0x93, 0x93, 0x93, 0xFF, 0x09, 0x09, 0x09, 0xE9,
	0x0F, 0x0F, 0x0F, 0x07, 0x12, 0x12, 0x12, 0x00, 0x14, 0x14, 0x14, 0x00,
	0x14, 0x14, 0x14, 0x00, 0x14, 0x14, 0x14, 0x00, 0x14, 0x14, 0x14, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0x04, 0x04, 0x04, 0x00,
	0x22, 0x22, 0x22, 0xD2, 0x99, 0x99, 0x99, 0xFF, 0xF2, 0xF2, 0xF2, 0xFF,
	0xFF, 0xFF, 0xFF, 0xFF, 0x84, 0x84, 0x84, 0xFF, 0x4F, 0x4F, 0x4F, 0xFF,
	0xFF, 0xFF, 0xFF, 0xFF, 0xCE, 0xCE, 0xCE, 0xFF, 0xD9, 0xD9, 0xD9, 0xFF,
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x8D, 0x8D, 0x8D, 0xFF,
	0x00, 0x00, 0x00, 0xB6, 0x13, 0x13, 0x13, 0x0A, 0x0F, 0x0F, 0x0F, 0x00,
	0x11, 0x11, 0x11, 0x00, 0x11, 0x11, 0x11, 0x00, 0x11, 0x11, 0x11, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0x12, 0x12, 0x12, 0x00,
	0x00, 0x00, 0x00, 0x12, 0x34, 0x34, 0x34, 0xEC, 0xAF, 0xAF, 0xAF, 0xFF,
	0xFA, 0xFA, 0xFA, 0xFF, 0xFA, 0xFA, 0xFA, 0xFF, 0xBD, 0xBD, 0xBD, 0xFF,
	0xFB, 0xFB, 0xFB, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF6, 0xF6, 0xF6, 0xFF,
	0xC2, 0xC2, 0xC2, 0xFF, 0x58, 0x58, 0x58, 0xFF, 0xE6, 0xE6, 0xE6, 0xFF,
	0x42, 0x42, 0x42, 0xFF, 0x03, 0x03, 0x03, 0x51, 0x02, 0x02, 0x02, 0x00,
	0x06, 0x06, 0x06, 0x00, 0x06, 0x06, 0x06, 0x00, 0x06, 0x06, 0x06, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0x23, 0x23, 0x23, 0x00,
	0x1E, 0x1E, 0x1E, 0x00, 0x0B, 0x0B, 0x0B, 0x41, 0x50, 0x50, 0x50, 0xFF,
	0xC6, 0xC6, 0xC6, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
	0xC9, 0xC9, 0xC9, 0xFF, 0xF9, 0xF9, 0xF9, 0xFF, 0x85, 0x85, 0x85, 0xFF,
	0x7D, 0x7D, 0x7D, 0xFF, 0x8D, 0x8D, 0x8D, 0xFF, 0xC1, 0xC1, 0xC1, 0xFF,
	0x79, 0x79, 0x79, 0xFF, 0x00, 0x00, 0x00, 0x61, 0x13, 0x13, 0x13, 0x00,
	0x0B, 0x0B, 0x0B, 0x00, 0x0E, 0x0E, 0x0E, 0x00, 0x10, 0x10, 0x10, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0x26, 0x26, 0x26, 0x00,
	0x2C, 0x2C, 0x2C, 0x00, 0x19, 0x19, 0x19, 0xA5, 0x00, 0x00, 0x00, 0xFF,
	0x60, 0x60, 0x60, 0xFF, 0xDE, 0xDE, 0xDE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
	0x8A, 0x8A, 0x8A, 0xFF, 0x30, 0x30, 0x30, 0xFF, 0xE4, 0xE4, 0xE4, 0xFF,
	0x7F, 0x7F, 0x7F, 0xFF, 0xD0, 0xD0, 0xD0, 0xFF, 0xC9, 0xC9, 0xC9, 0xFF,
	0xC9, 0xC9, 0xC9, 0xFF, 0x17, 0x17, 0x17, 0xED, 0x09, 0x09, 0x09, 0x00,
	0x18, 0x18, 0x18, 0x00, 0x1D, 0x1D, 0x1D, 0x00, 0x19, 0x19, 0x19, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0x16, 0x16, 0x16, 0x00,
	0x08, 0x08, 0x08, 0x00, 0x32, 0x32, 0x32, 0xF0, 0x79, 0x79, 0x79, 0xFF,
	0x17, 0x17, 0x17, 0xFF, 0x7C, 0x7C, 0x7C, 0xFF, 0xFE, 0xFE, 0xFE, 0xFF,
	0xFF, 0xFF, 0xFF, 0xFF, 0x78, 0x78, 0x78, 0xFF, 0x93, 0x93, 0x93, 0xFF,
	0xCA, 0xCA, 0xCA, 0xFF, 0xAB, 0xAB, 0xAB, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
	0xF3, 0xF3, 0xF3, 0xFF, 0x11, 0x11, 0x11, 0xED, 0x0A, 0x0A, 0x0A, 0x40,
	0x26, 0x26, 0x26, 0x02, 0x23, 0x23, 0x23, 0x00, 0x16, 0x16, 0x16, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0x18, 0x18, 0x18, 0x00,
	0x07, 0x07, 0x07, 0x00, 0x22, 0x22, 0x22, 0xDC, 0xFA, 0xFA, 0xFA, 0xFF,
	0x99, 0x99, 0x99, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0xA9, 0xA9, 0xA9, 0xFF,
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xAF, 0xAF, 0xAF, 0xFF,
	0xDB, 0xDB, 0xDB, 0xFF, 0xF8, 0xF8, 0xF8, 0xFF, 0xF3, 0xF3, 0xF3, 0xFF,
	0xF3, 0xF3, 0xF3, 0xFF, 0x29, 0x29, 0x29, 0xD7, 0x00, 0x00, 0x00, 0xF2,
	0x08, 0x08, 0x08, 0xBD, 0x29, 0x29, 0x29, 0x1F, 0x12, 0x12, 0x12, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0x18, 0x18, 0x18, 0x00,
	0x14, 0x14, 0x14, 0x00, 0x09, 0x09, 0x09, 0x56, 0x65, 0x65, 0x65, 0xFF,
	0xFE, 0xFE, 0xFE, 0xFF, 0x76, 0x76, 0x76, 0xFF, 0x69, 0x69, 0x69, 0xFF,
	0xFC, 0xFC, 0xFC, 0xFF, 0xED, 0xED, 0xED, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
	0xF5, 0xF5, 0xF5, 0xFF, 0xF0, 0xF0, 0xF0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
	0xE8, 0xE8, 0xE8, 0xFF, 0x59, 0x59, 0x59, 0xFF, 0x7B, 0x7B, 0x7B, 0xFF,
	0x5C, 0x5C, 0x5C, 0xFF, 0x00, 0x00, 0x00, 0xE3, 0x13, 0x13, 0x13, 0x1C,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0x18, 0x18, 0x18, 0x00,
	0x19, 0x19, 0x19, 0x00, 0x06, 0x06, 0x06, 0x0D, 0x2B, 0x2B, 0x2B, 0xF0,
	0x8E, 0x8E, 0x8E, 0xFF, 0xD1, 0xD1, 0xD1, 0xFF, 0xE8, 0xE8, 0xE8, 0xFF,
	0xFB, 0xFB, 0xFB, 0xFF, 0xF2, 0xF2, 0xF2, 0xFF, 0xF9, 0xF9, 0xF9, 0xFF,
	0xFB, 0xFB, 0xFB, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF5, 0xF5, 0xF5, 0xFF,
	0x5C, 0x5C, 0x5C, 0xFF, 0x4F, 0x4F, 0x4F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF, 0xFF, 0x26, 0x26, 0x26, 0xFF, 0x01, 0x01, 0x01, 0x65,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0x16, 0x16, 0x16, 0x00,
	0x16, 0x16, 0x16, 0x00, 0x15, 0x15, 0x15, 0x00, 0x0E, 0x0E, 0x0E, 0x31,
	0x30, 0x30, 0x30, 0xFF, 0x78, 0x78, 0x78, 0xFF, 0xC1, 0xC1, 0xC1, 0xFF,
	0xF0, 0xF0, 0xF0, 0xFF, 0xF4, 0xF4, 0xF4, 0xFF, 0xDA, 0xDA, 0xDA, 0xFF,
	0xCA, 0xCA, 0xCA, 0xFF, 0xBD, 0xBD, 0xBD, 0xFF, 0x83, 0x83, 0x83, 0xFF,
	0x96, 0x96, 0x96, 0xFF, 0xCC, 0xCC, 0xCC, 0xFF, 0xF5, 0xF5, 0xF5, 0xFF,
	0xFF, 0xFF, 0xFF, 0xFF, 0xD3, 0xD3, 0xD3, 0xFF, 0x11, 0x11, 0x11, 0xF2,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0x17, 0x17, 0x17, 0x00,
	0x17, 0x17, 0x17, 0x00, 0x18, 0x18, 0x18, 0x00, 0x14, 0x14, 0x14, 0x00,
	0x01, 0x01, 0x01, 0x6C, 0x27, 0x27, 0x27, 0xFF, 0x66, 0x66, 0x66, 0xFF,
	0x95, 0x95, 0x95, 0xFF, 0xA2, 0xA2, 0xA2, 0xFF, 0x89, 0x89, 0x89, 0xFF,
	0x74, 0x74, 0x74, 0xFF, 0x4E, 0x4E, 0x4E, 0xFF, 0xAD, 0xAD, 0xAD, 0xFF,
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xEB, 0xEB, 0xEB, 0xFF,
	0xFF, 0xFF, 0xFF, 0xFF, 0xB7, 0xB7, 0xB7, 0xFF, 0x0E, 0x0E, 0x0E, 0xCB,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0x17, 0x17, 0x17, 0x00,
	0x17, 0x17, 0x17, 0x00, 0x17, 0x17, 0x17, 0x00, 0x17, 0x17, 0x17, 0x00,
	0x18, 0x18, 0x18, 0x00, 0x02, 0x02, 0x02, 0x3F, 0x1A, 0x1A, 0x1A, 0xFB,
	0x55, 0x55, 0x55, 0xFF, 0x69, 0x69, 0x69, 0xFF, 0x65, 0x65, 0x65, 0xFF,
	0x3F, 0x3F, 0x3F, 0xFF, 0x31, 0x31, 0x31, 0xFF, 0xD4, 0xD4, 0xD4, 0xFF,
	0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0xFC, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
	0xE2, 0xE2, 0xE2, 0xFF, 0x14, 0x14, 0x14, 0xFE, 0x00, 0x00, 0x00, 0x2D,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0x17, 0x17, 0x17, 0x00,
	0x17, 0x17, 0x17, 0x00, 0x17, 0x17, 0x17, 0x00, 0x17, 0x17, 0x17, 0x00,
	0x17, 0x17, 0x17, 0x00, 0x18, 0x18, 0x18, 0x00, 0x0F, 0x0F, 0x0F, 0x28,
	0x09, 0x09, 0x09, 0x73, 0x21, 0x21, 0x21, 0xB8, 0x14, 0x14, 0x14, 0xBB,
	0x00, 0x00, 0x00, 0xF1, 0x43, 0x43, 0x43, 0xFF, 0xB7, 0xB7, 0xB7, 0xFF,
	0xCF, 0xCF, 0xCF, 0xFF, 0xC2, 0xC2, 0xC2, 0xFF, 0xC8, 0xC8, 0xC8, 0xFF,
	0x5E, 0x5E, 0x5E, 0xFF, 0x00, 0x00, 0x00, 0x93, 0x03, 0x03, 0x03, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0x17, 0x17, 0x17, 0x00,
	0x17, 0x17, 0x17, 0x00, 0x17, 0x17, 0x17, 0x00, 0x17, 0x17, 0x17, 0x00,
	0x17, 0x17, 0x17, 0x00, 0x17, 0x17, 0x17, 0x00, 0x16, 0x16, 0x16, 0x00,
	0x14, 0x14, 0x14, 0x00, 0x0C, 0x0C, 0x0C, 0x00, 0x09, 0x09, 0x09, 0x00,
	0x09, 0x09, 0x09, 0x79, 0x51, 0x51, 0x51, 0xFF, 0x88, 0x88, 0x88, 0xFF,
	0x87, 0x87, 0x87, 0xFF, 0x70, 0x70, 0x70, 0xFF, 0x29, 0x29, 0x29, 0xFF,
	0x00, 0x00, 0x00, 0x93, 0x05, 0x05, 0x05, 0x05, 0x06, 0x06, 0x06, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0x17, 0x17, 0x17, 0x00,
	0x17, 0x17, 0x17, 0x00, 0x17, 0x17, 0x17, 0x00, 0x17, 0x17, 0x17, 0x00,
	0x17, 0x17, 0x17, 0x00, 0x17, 0x17, 0x17, 0x00, 0x16, 0x16, 0x16, 0x00,
	0x15, 0x15, 0x15, 0x00, 0x15, 0x15, 0x15, 0x00, 0x17, 0x17, 0x17, 0x00,
	0x10, 0x10, 0x10, 0x25, 0x2C, 0x2C, 0x2C, 0xFF, 0x5F, 0x5F, 0x5F, 0xFF,
	0x52, 0x52, 0x52, 0xFF, 0x22, 0x22, 0x22, 0xF3, 0x00, 0x00, 0x00, 0x54,
	0x05, 0x05, 0x05, 0x00, 0x09, 0x09, 0x09, 0x00, 0x06, 0x06, 0x06, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
	0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0x17, 0x17, 0x17, 0x00,
	0x17, 0x17, 0x17, 0x00, 0x17, 0x17, 0x17, 0x00, 0x17, 0x17, 0x17, 0x00,
	0x17, 0x17, 0x17, 0x00, 0x17, 0x17, 0x17, 0x00, 0x16, 0x16, 0x16, 0x00,
	0x15, 0x15, 0x15, 0x00, 0x16, 0x16, 0x16, 0x00, 0x17, 0x17, 0x17, 0x00,
	0x17, 0x17, 0x17, 0x00, 0x12, 0x12, 0x12, 0x4C, 0x13, 0x13, 0x13, 0xC7,
	0x03, 0x03, 0x03, 0xBE, 0x00, 0x00, 0x00, 0x1A, 0x08, 0x08, 0x08, 0x00,
	0x0C, 0x0C, 0x0C, 0x00, 0x08, 0x08, 0x08, 0x00, 0x06, 0x06, 0x06, 0x00,
};

const lv_img_dsc_t touch_cursor = {
	.header.always_zero = 0,
	.header.w = 33,
	.header.h = 33,
	.data_size = 1089 * LV_IMG_PX_SIZE_ALPHA_BYTE,
	.header.cf = LV_IMG_CF_TRUE_COLOR_ALPHA,
	.data = touch_cursor_map,
};

#ifdef HEKATE_LOGO

const lv_img_dsc_t hekate_logo = {
	.header.always_zero = 0,
	.header.w = 193,
	.header.h = 76,
	.data_size = 14668 * LV_IMG_PX_SIZE_ALPHA_BYTE,
	.header.cf = LV_IMG_CF_TRUE_COLOR_ALPHA,
	.data = (const uint8_t *)(NYX_RES_ADDR + 0x1D900),
};

const lv_img_dsc_t ctcaer_logo = {
	.header.always_zero = 0,
	.header.w = 147,
	.header.h = 76,
	.data_size = 11172 * LV_IMG_PX_SIZE_ALPHA_BYTE,
	.header.cf = LV_IMG_CF_TRUE_COLOR_ALPHA,
	.data = (const uint8_t *)(NYX_RES_ADDR + 0x2BF00),
};

#endif

#endif
