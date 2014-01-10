//
//  FICImports.h
//  FastImageCache
//
//  Copyright (c) 2013 Path, Inc.
//  See LICENSE for full license agreement.
//

#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>


#if TARGET_OS_IPHONE
    #import <UIKit/UIKit.h>
    #define COCOAImage UIImage

#else
    #import <Cocoa/Cocoa.h>
    #define COCOAImage NSImage
#endif
