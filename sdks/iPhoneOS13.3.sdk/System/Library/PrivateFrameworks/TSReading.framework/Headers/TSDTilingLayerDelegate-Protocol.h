//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/CALayerDelegate-Protocol.h>

@class TSDTileProvider, TSDTilingBackgroundQueue, TSDTilingLayer;

@protocol TSDTilingLayerDelegate <CALayerDelegate>

@optional
- (void)tilingLayerWillSetNeedsDisplayForDirtyTiles:(TSDTilingLayer *)arg1;
- (void)tilingLayerWillSetNeedsLayout:(TSDTilingLayer *)arg1;
- (void)tilingLayerWillSetNeedsDisplay:(TSDTilingLayer *)arg1;
- (BOOL)mustDrawTilingLayerOnMainThread:(TSDTilingLayer *)arg1;
- (TSDTileProvider *)providerForTilingLayer:(TSDTilingLayer *)arg1;
- (void)didEndDrawingTilingLayerInBackground:(TSDTilingLayer *)arg1 withToken:(id)arg2;
- (BOOL)shouldBeginDrawingTilingLayerInBackground:(TSDTilingLayer *)arg1 returningToken:(id )arg2 andQueue:(id )arg3;
- (TSDTilingBackgroundQueue *)queueForDrawingTilingLayerInBackground:(TSDTilingLayer *)arg1;
- (BOOL)canDrawTilingLayerInBackground:(TSDTilingLayer *)arg1;
- (CGRect)visibleBoundsForTilingLayer:(TSDTilingLayer *)arg1;
- (BOOL)shouldLayoutTilingLayer:(TSDTilingLayer *)arg1;
@end

