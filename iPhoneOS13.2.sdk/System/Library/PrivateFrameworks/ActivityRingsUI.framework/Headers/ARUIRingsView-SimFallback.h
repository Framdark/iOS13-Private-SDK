//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ActivityRingsUI/ARUIRingsView.h>

@class NSArray;

@interface ARUIRingsView (SimFallback)
+ (void)load;
- (id)sim_snapshot;
- (void)sim_updateFallbackRings;
- (void)sim_layoutSubviews;
- (void)sim_setOpaque:(_Bool)arg1;
- (void)sim_updateMetalLayerVisibility:(_Bool)arg1;
@property(retain, nonatomic) NSArray *shapeLayers; // @dynamic shapeLayers;
@end
