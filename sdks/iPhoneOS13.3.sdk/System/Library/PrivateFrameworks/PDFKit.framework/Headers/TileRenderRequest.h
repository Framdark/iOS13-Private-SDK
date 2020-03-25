//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PDFPage, PDFRenderingProperties;
@protocol PDFTilePoolDelegate;

__attribute__((visibility("hidden")))
@interface TileRenderRequest : NSObject
{
    id <PDFTilePoolDelegate> target;
    PDFPage *page;
    PDFRenderingProperties *renderingProperties;
    CGRect tileFrame;
    double zoomFactor;
    CGAffineTransform matrix;
}

// - (void).cxx_destruct;

@end
