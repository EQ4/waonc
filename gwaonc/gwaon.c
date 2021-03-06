/* gWaoN -- gtk+ Spectra Analyzer
 * Copyright (C) 2007 Kengo Ichiki <kichiki@users.sourceforge.net>
 * $Id: gwaon.c,v 1.1 2007/02/09 23:03:59 kichiki Exp $
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

#include <gtk/gtk.h>
#include <sndfile.h> /* libsndfile */

#include "gwaon-menu.h" /* create_menu() */

/** global variables **/

SNDFILE * sf = NULL;
SF_INFO sfinfo;

int
main (int argc, char * argv [])
{
   gtk_init(&argc, &argv);
   create_menu();
   gtk_main();
   return 0;
}
