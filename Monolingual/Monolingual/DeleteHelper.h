//
//  DeleteHelper.h
//  Monolingual
//
//  Created by Ingmar Stein on Tue Mar 23 2004.
//  Copyright (c) 2004 Ingmar Stein. All rights reserved.
//
//  This program is free software; you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation; either version 2 of the License, or
//  (at your option) any later version.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with this program; if not, write to the Free Software
//  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
//

#import <Cocoa/Cocoa.h>

@interface DeleteHelper : NSObject {
}
- (id) initWithDirectories: (NSSet *)dirs;
- (void) finishedTask: (NSNotification *)aNotification;
- (void) cancelRemoval: (NSNotification *)aNotification;
- (void) fileManager: (NSFileManager *)manager willProcessPath: (NSString *)path;
- (BOOL) fileManager: (NSFileManager *)manager shouldProceedAfterError: (NSDictionary *)errorInfo;
- (void) removeDirectories: (NSSet *)directories;
- (void) removeDirectories: (NSSet *)directories atRoot: (NSString *)root;

@end
