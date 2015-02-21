#ifndef	_PV_LOOSE_LOCK_H_
#define	_PV_LOOSE_LOCK_H_

/* header file for pv-loose-lock.c --
 * PV - phase vocoder : pv-loose-lock.c
 * Copyright (C) 2007 Kengo Ichiki <kichiki@users.sourceforge.net>
 * $Id: pv-loose-lock.h,v 1.4 2007/03/11 01:07:15 kichiki Exp $
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
 */

/* puckette's loose phase lock scheme in conventional form
 *   (not by the complex arithmetics)
 * References: M.Puckette (1995)
 *             J.Laroche and M.Dolson (1999)
 */

void pv_loose_lock (const char *file, const char *outfile,
		    double rate, double pitch_shift,
		    long len, long hop_syn,
		    int flag_window);


#endif /* !_PV_LOOSE_LOCK_H_ */
