/*
        
        File:			MapDownload.h
        Program:		KisMAC
		Author:			Michael Rossberg
						mick@binaervarianz.de
		Description:	KisMAC is a wireless stumbler for MacOS X.
                
        This file is part of KisMAC.

    KisMAC is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License, version 2,
    as published by the Free Software Foundation;

    KisMAC is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with KisMAC; if not, write to the Free Software
    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
*/

#import <Cocoa/Cocoa.h>

@interface MapDownload : NSObject {
    NSImage     *_img;
    waypoint    _w1, _w2;
    NSPoint     _p1, _p2;
}

+ (MapDownload*)mapDownload;
- (BOOL)downloadMapFrom:(NSString*)server forPoint:(waypoint)w resolution:(NSSize)size zoomLevel:(int)zoom;

- (NSPoint)waypoint1Pixel;
- (waypoint)waypoint1;
- (NSPoint)waypoint2Pixel;
- (waypoint)waypoint2;
- (NSImage*)map;

@end
