//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class VKPolylineGroupOverlay, VKPolylineOverlay;

@protocol VKPolylineGroupOverlayObserver <NSObject>
- (void)polylineGroup:(VKPolylineGroupOverlay *)arg1 didFocusPolyline:(VKPolylineOverlay *)arg2;
- (void)polylineGroup:(VKPolylineGroupOverlay *)arg1 didSelectPolyline:(VKPolylineOverlay *)arg2;
- (void)polylineGroup:(VKPolylineGroupOverlay *)arg1 didRemovePolyline:(VKPolylineOverlay *)arg2;
- (void)polylineGroup:(VKPolylineGroupOverlay *)arg1 didAddPolyline:(VKPolylineOverlay *)arg2;
@end

